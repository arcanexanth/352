#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

extern "C" {
   int max (const int *numbers, int n);
}

void test_max(const int *numbers, int n){
   int val = max(numbers, n);
   cout << "Max val is: " << val << endl;
}

int main (int argc, char** argv){
   int r3[] = {100, 0, 300};
   int r1[] = {57};
   int r2[] = {-10, -9, -8, -7};
   int r4[] = {-100, 0, 1, 3, 23, 22, 21, -58};

   test_max(r3, 3);
   test_max(r1, 1);
   test_max(r2, 1);
   test_max(r2, 2);
   test_max(r2, 3);
   test_max(r2, 4);
   test_max(r4, 8);
}
