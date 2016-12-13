#include <iostream>
#include <sstream>
#include <cstdlib>

extern "C" {
  int max(const int *numbers, int n);
}

void test_max(int n, const int *numbers, int expected) {
  // Do this first, in case their code alters the array.
  std::stringstream ss;
  ss << "I tried asking max for the maximum of [" << numbers[0];
  for (int i = 1; i < n; ++i) {
    ss << ", " << numbers[i];
  }

  int actual = max(numbers, n);

  if (expected != actual) {
    ss << "], but I didn't get back the result I expected. Expected: " << expected << ". Actual: " << actual;
    throw ss.str();
  }
}

int main(int argc, char **argv) {
  try {
    int r3[] = {100, 0, 300};
    test_max(3, r3, 300);

    int r1[] = {57};
    test_max(1, r1, 57);

    int r2[] = {-10, -9, -8, -7};
    test_max(1, r2, -10);
    test_max(2, r2, -9);
    test_max(3, r2, -8);
    test_max(4, r2, -7);

    int r4[] = {-100, 0, 1, 3, 23, 22, 21, -58};
    test_max(8, r4, 23);

    return 0;
  } catch (std::string s) {
    std::cerr << s << std::endl;
    return 1;
  }
}
