#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <gtest/gtest.h>

#include "BleakVirtualMachine.h"

using std::map;
using std::vector;
using std::string;

TEST(BleakVirtualMachine, Tokenize) {
  ASSERT_EQ(vector<string>({"a", "b", "c", "d"}), BleakVirtualMachine::Tokenize("a b c d"));
  ASSERT_EQ(vector<string>({"store", "r9", "0", "<-", "ack"}), BleakVirtualMachine::Tokenize("store r9 0 <- ack"));
  ASSERT_EQ(vector<string>(), BleakVirtualMachine::Tokenize(""));
  ASSERT_EQ(vector<string>({"inc", "[r8]"}), BleakVirtualMachine::Tokenize("inc [r8]"));
}

TEST(BleakVirtualMachine, Resolve) {
  BleakVirtualMachine vm("cases/resolve.bleak", "cases/blank.in");
  for (int step = 0; step < 9; ++step) {
    ASSERT_EQ(100, vm.ResolveRValue("100")) << "I tried stepping a BleakVirtualMachine on source cases/resolve.bleak and input cases/blank.in " << step << " time" << (step == 1 ? "" : "s") << ", but when I tried to resolve rvalue \"100\", I didn't get the value I expected.";
    ASSERT_EQ(9, vm.ResolveRValue("9")) << "I tried stepping a BleakVirtualMachine on source cases/resolve.bleak and input cases/blank.in " << step << " time" << (step == 1 ? "" : "s") << ", but when I tried to resolve rvalue \"9\", I didn't get the value I expected.";
    ASSERT_EQ(-23, vm.ResolveRValue("-23")) << "I tried stepping a BleakVirtualMachine on source cases/resolve.bleak and input cases/blank.in " << step << " time" << (step == 1 ? "" : "s") << ", but when I tried to resolve rvalue \"-23\", I didn't get the value I expected.";

    for (int i = 0; i < step; ++i) {
      string reg = "r#";
      reg[1] = (char) ('0' + i);
      string other_reg = "r#";
      other_reg[1] = (char) ('0' + (9 - i));
      ASSERT_EQ(reg, vm.ResolveLValue(reg));
      ASSERT_EQ(other_reg, vm.ResolveLValue("[" + reg + "]"));
      ASSERT_EQ(9 - i, vm.ResolveRValue(reg));
      ASSERT_EQ((9 - i) >= step ? 0 : i, vm.ResolveRValue("[" + reg + "]"));
    }

    for (int i = step; i < 10; ++i) {
      string reg = "r#";
      reg[1] = (char) ('0' + i);
      string other_reg = "r#";
      other_reg[1] = (char) ('0' + (9 - i));
      ASSERT_EQ(reg, vm.ResolveLValue(reg));
      ASSERT_EQ("r0", vm.ResolveLValue("[" + reg + "]"));
      ASSERT_EQ(0, vm.ResolveRValue(reg));
      ASSERT_EQ(step > 0 ? 9 : 0, vm.ResolveRValue("[" + reg + "]"));
    }

    vm.Step();
  }
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv); 
  return RUN_ALL_TESTS();
}
