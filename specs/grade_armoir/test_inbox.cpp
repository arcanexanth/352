#include <iostream>
#include <sstream>
#include <cstdlib>

extern "C" {
  int inbox(int l, int b, int r, int t, int x, int y);
}

void test_inbox(int l, int b, int r, int t, int x, int y, int expected) {
  int actual = inbox(l, b, r, t, x, y);
  if (expected != actual) {
    std::stringstream ss;
    ss << "I tried asking inbox if (" << x << ", " << y << ") was in the box (" << l << ", " << b << ", " << r << ", " << t << "), but I didn't get back the result I expected. Expected: " << expected << ". Actual: " << actual;
    throw ss.str();
  }
}

int main(int argc, char **argv) {
  try {
    test_inbox(4, 2, 6, 10, 5, 9, 1);
    test_inbox(4, 2, 6, 8, 5, 9, 0);
    test_inbox(4, 2, 6, 8, 4, 2, 1);
    test_inbox(4, 2, 6, 8, 6, 8, 1);

    for (int y = -10; y <= 9; ++y) {
      for (int x = -100; x <= -70; ++x) {
        test_inbox(-100, -10, -70, 9, x, y, 1);
      }
    }
    test_inbox(-100, -10, -70, 9, -50, 10, 0);
    test_inbox(-100, -10, -70, 9, -50, -1, 0);
    test_inbox(-100, -10, -70, 9, -101, 3, 0);
    test_inbox(-100, -10, -70, 9, -69, 3, 0);

    return 0;
  } catch (std::string s) {
    std::cerr << s << std::endl;
    return 1;
  }
}
