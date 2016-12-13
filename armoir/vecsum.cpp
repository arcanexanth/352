#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

extern "C" {
   int *vecsum(const int *v1, const int *v2, int n);
}

void test_vecsum(int *a, int *b, int n){
   int *actual = vecsum(a, b, n);
   for(int i = 0; i < n; ++i){
      cout << "array val is: " << actual[i] << endl;
   }
}

int main(int argc, char** argv){
   int ra3[] = {100, 0, 300};
   int r4a[] = {1, 2, 3, 4};
   int r4b[] = {10, 20, 30, 40};

   test_vecsum(ra3, ra3, 3);
   test_vecsum(r4a, r4b, 4);
}
