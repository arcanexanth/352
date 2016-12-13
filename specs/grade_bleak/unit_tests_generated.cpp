#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <gtest/gtest.h>

#include "BleakVirtualMachine.h"

using std::map;
using std::vector;
using std::string;

#define STRING2(x) #x
#define STRING(x) STRING2(x)
#include STRING(GENERATED)

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv); 
  return RUN_ALL_TESTS();
}
