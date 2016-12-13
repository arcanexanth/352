#include <iostream>
#include <sstream>
#include <cstdlib>

extern "C" {
  int opposed(int a, int b);
}

void test_opposed(int a, int b, int expected) {
  int actual = opposed(a, b);

  if (expected != actual) {
    std::stringstream ss;
    ss << "I tried asking oppose if " << a << " and " << b << " have opposite signs, but I didn't get back the result I expected. Expected: " << expected << ". Actual: " << actual << ".";
    throw ss.str();
  }
}

int main(int argc, char **argv) {
  try {
    test_opposed(-10, 10, 1);
    test_opposed(0, 0, 0);
    test_opposed(0, 100, 0);
    test_opposed(-9000, 765, 1);
    test_opposed(-101, -101, 0);
    test_opposed(-101, -352, 0);
    test_opposed(0, 1, 0);
    test_opposed(-1, 1, 1);
    test_opposed(-30, 27, 1);
    test_opposed(-187, 0, 1);
    test_opposed(-187, -1, 0);
    return 0;
  } catch (std::string s) {
    std::cerr << s << std::endl;
    return 1;
  }
}
