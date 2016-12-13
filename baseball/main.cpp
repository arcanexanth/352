#include <iostream>
#include "Baseball.h"

int main(int argc, char **argv){
   Baseball calc;

   std::cout << "> ";
   std::string line;
   while(std::getline(std::cin, line)){
      try{
         std::cout << calc.Evaluate(line) << std::endl;  
      } catch (const char *s) {
        std::cerr << s << std::endl;
      }
      std::cout << "> ";
   }
   std::cout << std::endl;

   return 0;
}
