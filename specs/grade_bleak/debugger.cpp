#include <cstring>
#include <iostream>
#include <curses.h>

#include "BleakVirtualMachine.h"

int main(int argc, char **argv) {
  if (argc != 3) {
    std::cerr << "Usage: " << argv[0] << " source input" << std::endl;
    exit(1);
  }

  BleakVirtualMachine vm(argv[1], argv[2]);

  initscr(); 
  cbreak();
  noecho();
  keypad(stdscr, TRUE);
  curs_set(0);

  int selection = 0;
  bool is_quit = false;
  int exception = 0;
  bool has_exception = false;

  do {
    wclear(stdscr);

    int width, height;
    getmaxyx(stdscr, height, width);

    // Outer borders
    wmove(stdscr, 0, 1);
    whline(stdscr, 0, width - 2);

    wmove(stdscr, 1, 0);
    wvline(stdscr, 0, height - 3);

    wmove(stdscr, height - 2, 1);
    whline(stdscr, 0, width - 2);

    wmove(stdscr, 1, width - 1);
    wvline(stdscr, 0, height - 3);

    // Outer corners
    wmove(stdscr, 0, 0);
    waddch(stdscr, ACS_ULCORNER);

    wmove(stdscr, 0, width - 1);
    waddch(stdscr, ACS_URCORNER);

    wmove(stdscr, height - 2, 0);
    waddch(stdscr, ACS_LLCORNER);

    wmove(stdscr, height - 2, width - 1);
    waddch(stdscr, ACS_LRCORNER);

    // Let's break the display up into 5 columns. We only really need 4, but
    // the instructions are a bit wider than the others, and we will let them
    // span two columns.
    int column_width = (width - 1) / 5;
    int column_start = 0;

    // Instructions
    int i = 0;
    wmove(stdscr, 1, column_start + 2);
    wattron(stdscr, A_UNDERLINE);
    waddstr(stdscr, "INSTRUCTIONS");
    wattroff(stdscr, A_UNDERLINE);
    for (auto instruction : vm.GetInstructions()) {
      wmove(stdscr, i + 2, column_start + 2);
      if (i == vm.GetRegisters().find("pc")->second) {
        wattron(stdscr, A_STANDOUT);
      }
      waddstr(stdscr, instruction.c_str());
      wattroff(stdscr, A_STANDOUT);
      ++i;
    }

    column_start += 2 * column_width;
    wmove(stdscr, 1, column_start);
    wvline(stdscr, 0, height - 3);

    // Registers
    i = 0;
    wmove(stdscr, 1, column_start + 2);
    wattron(stdscr, A_UNDERLINE);
    waddstr(stdscr, "REGISTERS");
    wattroff(stdscr, A_UNDERLINE);
    for (auto pair : vm.GetRegisters()) {
      wmove(stdscr, i + 2, column_start + 2);
      wprintw(stdscr, "%s: %d", pair.first.c_str(), pair.second);
      ++i;
    }

    column_start += column_width;
    wmove(stdscr, 1, column_start);
    wvline(stdscr, 0, height - 3);

    // Input
    i = 0;
    wmove(stdscr, 1, column_start + 2);
    wattron(stdscr, A_UNDERLINE);
    waddstr(stdscr, "INPUT");
    wattroff(stdscr, A_UNDERLINE);
    for (auto input : vm.GetInput()) {
      wmove(stdscr, i + 2, column_start + 2);
      if (i == vm.GetRegisters().find("nc")->second) {
        wattron(stdscr, A_STANDOUT);
      }
      wprintw(stdscr, "%d", input);
      wattroff(stdscr, A_STANDOUT);
      ++i;
    }

    column_start += column_width;
    wmove(stdscr, 1, column_start);
    wvline(stdscr, 0, height - 3);

    // Output
    i = 0;
    wmove(stdscr, 1, column_start + 2);
    wattron(stdscr, A_UNDERLINE);
    waddstr(stdscr, "OUTPUT");
    wattroff(stdscr, A_UNDERLINE);
    for (auto output : vm.GetOutput()) {
      wmove(stdscr, i + 2, column_start + 2);
      wprintw(stdscr, "%d", output);
      ++i;
    }

    // Step button
    wmove(stdscr, height - 1, 0);
    if (selection == 0) {
      wattron(stdscr, A_STANDOUT);
    }
    waddstr(stdscr, "Step");
    wattroff(stdscr, A_STANDOUT);

    // Reset button
    wmove(stdscr, height - 1, width / 2 - strlen("Reset") / 2);
    if (selection == 1) {
      wattron(stdscr, A_STANDOUT);
    }
    waddstr(stdscr, "Reset");
    wattroff(stdscr, A_STANDOUT);

    // Quit button
    wmove(stdscr, height - 1, width - strlen("Quit"));
    if (selection == 2) {
      wattron(stdscr, A_STANDOUT);
    }
    waddstr(stdscr, "Quit");
    wattroff(stdscr, A_STANDOUT);

    int key = wgetch(stdscr);

    switch (key) {
      case KEY_LEFT:
        selection = (selection + 3 - 1) % 3;
        break;
      case KEY_RIGHT:
        selection = (selection + 1) % 3;
        break;
      case KEY_ENTER:
      case 10:
        if (selection == 0) {
          try {
            vm.Step();
          } catch (int i) {
            is_quit = true;
            has_exception = true;
            exception = i;
          }
        } else if (selection == 1) {
          vm.Reset();
        } else {
          is_quit = true;
        }
        break;
      case 'q':
        is_quit = true;
        break;
      default:
        break;
    }

  } while (!is_quit);

  endwin();

  if (has_exception) {
    std::cerr << "Caught " << exception << std::endl;
  }

  return 0;
}
