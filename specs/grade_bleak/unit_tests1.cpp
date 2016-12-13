#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <gtest/gtest.h>

#include "BleakVirtualMachine.h"

using std::map;
using std::vector;
using std::string;

TEST(BleakVirtualMachine, Constants) {
  ASSERT_EQ(1, BleakVirtualMachine::INSTRUCTION_OUT_OF_BOUNDS);
  ASSERT_EQ(2, BleakVirtualMachine::INPUT_OUT_OF_BOUNDS);
  ASSERT_EQ(3, BleakVirtualMachine::UNKNOWN_INSTRUCTION);
}

TEST(BleakVirtualMachine, Empty) {
  map<string, int> expected_labels;
  map<string, int> expected_registers = {{"pc", 0}, {"nc", 0}, {"ra", 0}, {"r0", 0}, {"r1", 0}, {"r2", 0}, {"r3", 0}, {"r4", 0}, {"r5", 0}, {"r6", 0}, {"r7", 0}, {"r8", 0}, {"r9", 0}};

  BleakVirtualMachine vm("/dev/null", "/dev/null");
  ASSERT_EQ(vector<string>(), vm.GetInstructions()) << "I tried asking a BleakVirtualMachine whose source and input both came from /dev/null for its instructions, but I didn't get back the list that I expected.";
  ASSERT_EQ(expected_labels, vm.GetLabels()) << "I tried asking a BleakVirtualMachine whose source and input both came from /dev/null for its labels, but I didn't get back the map that I expected.";
  ASSERT_EQ(expected_registers, vm.GetRegisters()) << "I tried asking a BleakVirtualMachine whose source and input both came from /dev/null for its registers, but I didn't get back the map that I expected.";
  ASSERT_EQ(vector<int>(), vm.GetInput()) << "I tried asking a BleakVirtualMachine whose source and input both came from /dev/null for its input, but I didn't get back the list that I expected.";
  ASSERT_EQ(vector<int>(), vm.GetOutput()) << "I tried asking a BleakVirtualMachine whose source and input both came from /dev/null for its output, but I didn't get back the list that I expected.";
}

TEST(BleakVirtualMachine, ResolveLValue) {
  BleakVirtualMachine vm("/dev/null", "/dev/null");
  map<string, int> &registers = vm.GetRegisters();

  ASSERT_EQ("r3", vm.ResolveLValue("r3"));
  ASSERT_EQ("r9", vm.ResolveLValue("r9"));
  ASSERT_EQ("pc", vm.ResolveLValue("pc"));
  ASSERT_EQ("nc", vm.ResolveLValue("nc"));
  ASSERT_EQ("r0", vm.ResolveLValue("[r9]"));
  registers["r9"] = 1;
  ASSERT_EQ("r1", vm.ResolveLValue("[r9]"));
  registers["r7"] = 8;
  ASSERT_EQ("r8", vm.ResolveLValue("[r7]"));
}

TEST(BleakVirtualMachine, ResolveRValue) {
  BleakVirtualMachine vm("/dev/null", "/dev/null");
  map<string, int> &registers = vm.GetRegisters();

  ASSERT_EQ(0, vm.ResolveRValue("r0"));
  ASSERT_EQ(0, vm.ResolveRValue("r1"));
  ASSERT_EQ(0, vm.ResolveRValue("r2"));
  ASSERT_EQ(0, vm.ResolveRValue("r3"));
  ASSERT_EQ(0, vm.ResolveRValue("r4"));
  ASSERT_EQ(0, vm.ResolveRValue("r5"));
  ASSERT_EQ(0, vm.ResolveRValue("r6"));
  ASSERT_EQ(0, vm.ResolveRValue("r7"));
  ASSERT_EQ(0, vm.ResolveRValue("r8"));
  ASSERT_EQ(0, vm.ResolveRValue("r9"));
  ASSERT_EQ(0, vm.ResolveRValue("pc"));
  ASSERT_EQ(0, vm.ResolveRValue("nc"));
  ASSERT_EQ(0, vm.ResolveRValue("ra"));

  registers["r9"] = 1;
  ASSERT_EQ(0, vm.ResolveRValue("[r9]"));
  registers["r1"] = 104;
  ASSERT_EQ(104, vm.ResolveRValue("[r9]"));

  registers["r7"] = 8;
  ASSERT_EQ(0, vm.ResolveRValue("[r7]"));
  registers["r8"] = 32;
  ASSERT_EQ(32, vm.ResolveRValue("[r7]"));
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv); 
  return RUN_ALL_TESTS();
}
