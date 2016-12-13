#include <iostream>
#include <sstream>
#include <cstdlib>

extern "C" {
  int *vecsum(const int *v1, const int *v2, int n);
}

void test_vecsum(int *a, int *b, int n, int *expected) {
  // Do this first, in case their code alters the array.
  std::stringstream ss;
  ss << "I tried asking vecsum to add [" << a[0];
  for (int i = 1; i < n; ++i) {
    ss << ", " << a[i];
  }
  ss << "] and [" << b[0];
  for (int i = 1; i < n; ++i) {
    ss << ", " << b[i];
  }
  ss << "], but I didn't get back the result I expected. Expected: [" << expected[0];
  for (int i = 1; i < n; ++i) {
    ss << ", " << expected[i];
  }
  ss << "]. Actual: [";

  int *actual = vecsum(a, b, n);
  bool is_same = true;
  for (int i = 0; i < n; ++i) {
    if (i > 0) ss << ", ";
    ss << actual[i];
    if (actual[i] != expected[i]) {
      is_same = false; 
    }
  } 
  ss << "].";

  if (!is_same) {
    free(actual);
    throw ss.str();
  }

  free(actual);
}

int main(int argc, char **argv) {
  try {
    int r3[] = {100, 0, 300};
    int r3r3[] = {200, 0, 600};
    test_vecsum(r3, r3, 3, r3r3);

    int r4a[] = {1, 2, 3, 4};
    int r4b[] = {10, 20, 30, 40};
    int r4c[] = {11, 22, 33, 44};
    test_vecsum(r4a, r4b, 4, r4c);

    int r101[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int r102[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    int r103[] = {10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10};
    test_vecsum(r101, r102, 11, r103);

    int r51[] = {-10, -5, 0, 5, 10};
    int r52[] = {10, 5, 0, -5, -10};
    int r53[] = {0, 0, 0, 0, 0};
    test_vecsum(r51, r52, 5, r53);

    int r71[] = {102, -4, 6, -15, 80, 153, 45};
    int r72[] = {23, -19, -25, 7, 222, -45, 3};
    int r73[] = {125, -23, -19, -8, 302, 108, 48};
    test_vecsum(r71, r72, 7, r73);

    return 0;
  } catch (std::string s) {
    std::cerr << s << std::endl;
    return 1;
  }
}
