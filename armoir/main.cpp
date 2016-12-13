/**
 * Author: George Hamlin
 * Started: 11/18/16
 * Ended: 
 * What to do: 
**/

#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

extern "C"{
   int inbox(int l, int b, int r, int t, int x, int y);
}

extern "C" {
   int pack(int r, int g, int b);
   int red(int rgb);
   int green(int rgb);
   int blue(int rgb);
}

extern "C" {
   int opposed(int i, int j);
}

extern "C" {
   int max(const int *numbers, int n);
}

extern "C" {
   int *vecsum(const int *v1, const int *v2, int n);
}

int test_max(const int *numbers, int n){
      //cout << numbers[0] << endl;
      int val = max(numbers, n);
      //cout << "Inside max: " << val << endl;
      return val;
}

void test_vecsum(int *a, int *b, int n){
   int *actual = vecsum(a, b, n);
   for(int i = 0; i < n; ++i){
      cout << "array val is: " << actual[i] << endl;
   } 
   
}

int main (int argc, char *argv[]){
   int val = 0;

   /** inbox.s vars **/
   int l = 4;
   int b = 2;
   int r = 6;
   int t = 10;
   int x = 5;
   int y = 9;

   /** inbox.s call **/
    val = inbox(l, b, r, t, x, y);
    cout << "Inbox Val is: " << val << endl;

   /** color.s vars **/
   int rgb = 0;
   r = 100;
   int g = 200;
   b = 255;

   /** opposed.s vars **/
   int i = -9000;
   int j = 765;

   /** Max.s vars **/

   int r3[] = {100, 0, 300};
   int r1[] = {57};
   int r2[] = {-10, -9, -8, -7};
   int r4[] = {-100, 0, 1, 3, 23, 22, 21, -58};

   /** color.s call **/
   rgb = pack(r, g, b);
   int actual_red = red(rgb);
   int actual_green = green(rgb);
   int actual_blue = blue(rgb);
   cout << "Color RGB is: " << rgb << endl;
   cout << "Color red is: " << actual_red << endl;
   cout << "Color green is: " << actual_green << endl;
   cout << "Color blue is: " << actual_blue << endl;

   /** Vecsum.s vars **/

   int ra3[] = {100, 0, 300};
   int r4a[] = {1, 2, 3, 4};
   int r4b[] = {10, 20, 30, 40};  

   /** opposed.s call **/
   val = opposed(i, j);
   cout << "Opposed Val is: " << val << endl;

   /** vecsum.s call **/

   test_vecsum(ra3, ra3, 3);
   test_vecsum(r4a, r4b, 4);

   /** max.s call **/
   val = test_max(r3, 3);
   cout << "Max val r3 is: " << val << endl;
   val = test_max(r1, 1);
   cout << "Max val r1 is: " << val << endl;
   val = test_max(r2, 1);
   cout << "Max val r2, test 1, is: " << val << endl;
   val = test_max(r2, 2);
   cout << "Max val r2, test 2, is: " << val << endl;
   val = test_max(r2, 3);
   cout << "Max val r2, test 3, is: " << val << endl;
   val = test_max(r2, 4);  
   cout << "Max val r2, test 4, is: " << val << endl;
   val = test_max(r4, 8);
   cout << "Max val r4 is: " << val << endl;
   cout << "aaah" << endl;

   /** echo.s call **/
   
}
