#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

extern "C" {
   int* mul (const int* n, int a);
}

void test_mul(int *a, int n){
   int *val = mul(a, n);
   //cout << "Value is: " << val << endl;
   for(int i = 0; i < sizeof(val); i++){
      cout << "Value is: " << val[i] << endl;
   }
}
int main(int argc, char** argv){
   int array[] = {5, 7, 9};
   test_mul(array, 3);

}
