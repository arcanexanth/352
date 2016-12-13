#include <iostream>
#include <sstream>
#include <cstdlib>

extern "C" {
  int pack(int r, int g, int b);
  int red(int rgb);
  int green(int rgb);
  int blue(int rgb);
}

void test_color(int r, int g, int b, int expected) {
  int actual = pack(r, g, b);
  if (expected != actual) {
    std::stringstream ss;
    ss << "I tried asking pack to compute the int for (" << r << ", " << g << ", " << b << "), but I didn't get back the result I expected. Expected: " << expected << ". Actual: " << actual << ".";
    throw ss.str();
  }

  int rgb = actual;
  int actual_red = red(rgb);
  int actual_green = green(rgb);
  int actual_blue = blue(rgb);

  if (r != actual_red) {
    std::stringstream ss;
    ss << "I tried asking red to extract the red intensity from the int color (" << r << ", " << g << ", " << b << "), but I didn't get back the result I expected. Expected: " << r << ". Actual: " << actual_red << ".";
    throw ss.str();
  }

  if (g != actual_green) {
    std::stringstream ss;
    ss << "I tried asking green to extract the green intensity from the int color (" << r << ", " << g << ", " << b << "), but I didn't get back the result I expected. Expected: " << g << ". Actual: " << actual_green << ".";
    throw ss.str();
  }

  if (b != actual_blue) {
    std::stringstream ss;
    ss << "I tried asking blue to extract the blue intensity from the int color (" << r << ", " << g << ", " << b << "), but I didn't get back the result I expected. Expected: " << b << ". Actual: " << actual_blue << ".";
    throw ss.str();
  }
}

int main(int argc, char **argv) {
  try {
    test_color(1, 2, 3, 66051);
    test_color(100, 200, 255, 6605055);
    return 0;
  } catch (std::string s) {
    std::cerr << s << std::endl;
    return 1;
  }
}
