TEST(BleakVirtualMachine, eg1_eg1) {
  BleakVirtualMachine vm("cases/eg1.bleak", "cases/eg1.in");
  for (int reset = 0; reset < 5; ++reset) {
    ASSERT_EQ(vector<string>({"input r0", "output r0", }), vm.GetInstructions()) << "I tried stepping a virtual machine on source cases/eg1.bleak and input cases/eg1.in 0 steps, having reset " << reset << " time" << (reset == 1 ? "" : "s") << ", but GetInstructions didn't give back the list I expected.";
    ASSERT_EQ(vector<int>({6, 7, 8, 9, }), vm.GetInput()) << "I tried stepping a virtual machine on source cases/eg1.bleak and input cases/eg1.in 0 steps, having reset " << reset << " time" << (reset == 1 ? "" : "s") << ", but GetInput didn't give back the list I expected.";
    ASSERT_EQ(vector<int>({}), vm.GetOutput()) << "I tried stepping a virtual machine on source cases/eg1.bleak and input cases/eg1.in 0 steps, having reset " << reset << " time" << (reset == 1 ? "" : "s") << ", but GetOutput didn't give back the list I expected.";
    {
      map<string, int> expected_labels = {};
      ASSERT_EQ(expected_labels, vm.GetLabels()) << "I tried stepping a virtual machine on source cases/eg1.bleak and input cases/eg1.in 0 steps, having reset " << reset << " time" << (reset == 1 ? "" : "s") << ", but GetLabels didn't give back the map I expected.";
    }
    ASSERT_EQ(0, vm.GetRegisters().find("pc")->second) << "I tried stepping a virtual machine on source cases/eg1.bleak and input cases/eg1.in 0 steps, having reset " << reset << " time" << (reset == 1 ? "" : "s") << ", but register pc wasn't what I expected it to be.";
    ASSERT_EQ(0, vm.GetRegisters().find("nc")->second) << "I tried stepping a virtual machine on source cases/eg1.bleak and input cases/eg1.in 0 steps, having reset " << reset << " time" << (reset == 1 ? "" : "s") << ", but register nc wasn't what I expected it to be.";
    ASSERT_EQ(0, vm.GetRegisters().find("ra")->second) << "I tried stepping a virtual machine on source cases/eg1.bleak and input cases/eg1.in 0 steps, having reset " << reset << " time" << (reset == 1 ? "" : "s") << ", but register ra wasn't what I expected it to be.";
    ASSERT_EQ(0, vm.GetRegisters().find("r0")->second) << "I tried stepping a virtual machine on source cases/eg1.bleak and input cases/eg1.in 0 steps, having reset " << reset << " time" << (reset == 1 ? "" : "s") << ", but register r0 wasn't what I expected it to be.";
    ASSERT_EQ(0, vm.GetRegisters().find("r1")->second) << "I tried stepping a virtual machine on source cases/eg1.bleak and input cases/eg1.in 0 steps, having reset " << reset << " time" << (reset == 1 ? "" : "s") << ", but register r1 wasn't what I expected it to be.";
    ASSERT_EQ(0, vm.GetRegisters().find("r2")->second) << "I tried stepping a virtual machine on source cases/eg1.bleak and input cases/eg1.in 0 steps, having reset " << reset << " time" << (reset == 1 ? "" : "s") << ", but register r2 wasn't what I expected it to be.";
    ASSERT_EQ(0, vm.GetRegisters().find("r3")->second) << "I tried stepping a virtual machine on source cases/eg1.bleak and input cases/eg1.in 0 steps, having reset " << reset << " time" << (reset == 1 ? "" : "s") << ", but register r3 wasn't what I expected it to be.";
    ASSERT_EQ(0, vm.GetRegisters().find("r4")->second) << "I tried stepping a virtual machine on source cases/eg1.bleak and input cases/eg1.in 0 steps, having reset " << reset << " time" << (reset == 1 ? "" : "s") << ", but register r4 wasn't what I expected it to be.";
    ASSERT_EQ(0, vm.GetRegisters().find("r5")->second) << "I tried stepping a virtual machine on source cases/eg1.bleak and input cases/eg1.in 0 steps, having reset " << reset << " time" << (reset == 1 ? "" : "s") << ", but register r5 wasn't what I expected it to be.";
    ASSERT_EQ(0, vm.GetRegisters().find("r6")->second) << "I tried stepping a virtual machine on source cases/eg1.bleak and input cases/eg1.in 0 steps, having reset " << reset << " time" << (reset == 1 ? "" : "s") << ", but register r6 wasn't what I expected it to be.";
    ASSERT_EQ(0, vm.GetRegisters().find("r7")->second) << "I tried stepping a virtual machine on source cases/eg1.bleak and input cases/eg1.in 0 steps, having reset " << reset << " time" << (reset == 1 ? "" : "s") << ", but register r7 wasn't what I expected it to be.";
    ASSERT_EQ(0, vm.GetRegisters().find("r8")->second) << "I tried stepping a virtual machine on source cases/eg1.bleak and input cases/eg1.in 0 steps, having reset " << reset << " time" << (reset == 1 ? "" : "s") << ", but register r8 wasn't what I expected it to be.";
    ASSERT_EQ(0, vm.GetRegisters().find("r9")->second) << "I tried stepping a virtual machine on source cases/eg1.bleak and input cases/eg1.in 0 steps, having reset " << reset << " time" << (reset == 1 ? "" : "s") << ", but register r9 wasn't what I expected it to be.";
    vm.Step();
    ASSERT_EQ(vector<string>({"input r0", "output r0", }), vm.GetInstructions()) << "I tried stepping a virtual machine on source cases/eg1.bleak and input cases/eg1.in 1 step, having reset " << reset << " time" << (reset == 1 ? "" : "s") << ", but GetInstructions didn't give back the list I expected.";
    ASSERT_EQ(vector<int>({6, 7, 8, 9, }), vm.GetInput()) << "I tried stepping a virtual machine on source cases/eg1.bleak and input cases/eg1.in 1 step, having reset " << reset << " time" << (reset == 1 ? "" : "s") << ", but GetInput didn't give back the list I expected.";
    ASSERT_EQ(vector<int>({}), vm.GetOutput()) << "I tried stepping a virtual machine on source cases/eg1.bleak and input cases/eg1.in 1 step, having reset " << reset << " time" << (reset == 1 ? "" : "s") << ", but GetOutput didn't give back the list I expected.";
    {
      map<string, int> expected_labels = {};
      ASSERT_EQ(expected_labels, vm.GetLabels()) << "I tried stepping a virtual machine on source cases/eg1.bleak and input cases/eg1.in 1 step, having reset " << reset << " time" << (reset == 1 ? "" : "s") << ", but GetLabels didn't give back the map I expected.";
    }
    ASSERT_EQ(1, vm.GetRegisters().find("pc")->second) << "I tried stepping a virtual machine on source cases/eg1.bleak and input cases/eg1.in 1 step, having reset " << reset << " time" << (reset == 1 ? "" : "s") << ", but register pc wasn't what I expected it to be.";
    ASSERT_EQ(1, vm.GetRegisters().find("nc")->second) << "I tried stepping a virtual machine on source cases/eg1.bleak and input cases/eg1.in 1 step, having reset " << reset << " time" << (reset == 1 ? "" : "s") << ", but register nc wasn't what I expected it to be.";
    ASSERT_EQ(0, vm.GetRegisters().find("ra")->second) << "I tried stepping a virtual machine on source cases/eg1.bleak and input cases/eg1.in 1 step, having reset " << reset << " time" << (reset == 1 ? "" : "s") << ", but register ra wasn't what I expected it to be.";
    ASSERT_EQ(6, vm.GetRegisters().find("r0")->second) << "I tried stepping a virtual machine on source cases/eg1.bleak and input cases/eg1.in 1 step, having reset " << reset << " time" << (reset == 1 ? "" : "s") << ", but register r0 wasn't what I expected it to be.";
    ASSERT_EQ(0, vm.GetRegisters().find("r1")->second) << "I tried stepping a virtual machine on source cases/eg1.bleak and input cases/eg1.in 1 step, having reset " << reset << " time" << (reset == 1 ? "" : "s") << ", but register r1 wasn't what I expected it to be.";
    ASSERT_EQ(0, vm.GetRegisters().find("r2")->second) << "I tried stepping a virtual machine on source cases/eg1.bleak and input cases/eg1.in 1 step, having reset " << reset << " time" << (reset == 1 ? "" : "s") << ", but register r2 wasn't what I expected it to be.";
    ASSERT_EQ(0, vm.GetRegisters().find("r3")->second) << "I tried stepping a virtual machine on source cases/eg1.bleak and input cases/eg1.in 1 step, having reset " << reset << " time" << (reset == 1 ? "" : "s") << ", but register r3 wasn't what I expected it to be.";
    ASSERT_EQ(0, vm.GetRegisters().find("r4")->second) << "I tried stepping a virtual machine on source cases/eg1.bleak and input cases/eg1.in 1 step, having reset " << reset << " time" << (reset == 1 ? "" : "s") << ", but register r4 wasn't what I expected it to be.";
    ASSERT_EQ(0, vm.GetRegisters().find("r5")->second) << "I tried stepping a virtual machine on source cases/eg1.bleak and input cases/eg1.in 1 step, having reset " << reset << " time" << (reset == 1 ? "" : "s") << ", but register r5 wasn't what I expected it to be.";
    ASSERT_EQ(0, vm.GetRegisters().find("r6")->second) << "I tried stepping a virtual machine on source cases/eg1.bleak and input cases/eg1.in 1 step, having reset " << reset << " time" << (reset == 1 ? "" : "s") << ", but register r6 wasn't what I expected it to be.";
    ASSERT_EQ(0, vm.GetRegisters().find("r7")->second) << "I tried stepping a virtual machine on source cases/eg1.bleak and input cases/eg1.in 1 step, having reset " << reset << " time" << (reset == 1 ? "" : "s") << ", but register r7 wasn't what I expected it to be.";
    ASSERT_EQ(0, vm.GetRegisters().find("r8")->second) << "I tried stepping a virtual machine on source cases/eg1.bleak and input cases/eg1.in 1 step, having reset " << reset << " time" << (reset == 1 ? "" : "s") << ", but register r8 wasn't what I expected it to be.";
    ASSERT_EQ(0, vm.GetRegisters().find("r9")->second) << "I tried stepping a virtual machine on source cases/eg1.bleak and input cases/eg1.in 1 step, having reset " << reset << " time" << (reset == 1 ? "" : "s") << ", but register r9 wasn't what I expected it to be.";
    vm.Step();
    ASSERT_EQ(vector<string>({"input r0", "output r0", }), vm.GetInstructions()) << "I tried stepping a virtual machine on source cases/eg1.bleak and input cases/eg1.in 2 steps, having reset " << reset << " time" << (reset == 1 ? "" : "s") << ", but GetInstructions didn't give back the list I expected.";
    ASSERT_EQ(vector<int>({6, 7, 8, 9, }), vm.GetInput()) << "I tried stepping a virtual machine on source cases/eg1.bleak and input cases/eg1.in 2 steps, having reset " << reset << " time" << (reset == 1 ? "" : "s") << ", but GetInput didn't give back the list I expected.";
    ASSERT_EQ(vector<int>({6, }), vm.GetOutput()) << "I tried stepping a virtual machine on source cases/eg1.bleak and input cases/eg1.in 2 steps, having reset " << reset << " time" << (reset == 1 ? "" : "s") << ", but GetOutput didn't give back the list I expected.";
    {
      map<string, int> expected_labels = {};
      ASSERT_EQ(expected_labels, vm.GetLabels()) << "I tried stepping a virtual machine on source cases/eg1.bleak and input cases/eg1.in 2 steps, having reset " << reset << " time" << (reset == 1 ? "" : "s") << ", but GetLabels didn't give back the map I expected.";
    }
    ASSERT_EQ(2, vm.GetRegisters().find("pc")->second) << "I tried stepping a virtual machine on source cases/eg1.bleak and input cases/eg1.in 2 steps, having reset " << reset << " time" << (reset == 1 ? "" : "s") << ", but register pc wasn't what I expected it to be.";
    ASSERT_EQ(1, vm.GetRegisters().find("nc")->second) << "I tried stepping a virtual machine on source cases/eg1.bleak and input cases/eg1.in 2 steps, having reset " << reset << " time" << (reset == 1 ? "" : "s") << ", but register nc wasn't what I expected it to be.";
    ASSERT_EQ(0, vm.GetRegisters().find("ra")->second) << "I tried stepping a virtual machine on source cases/eg1.bleak and input cases/eg1.in 2 steps, having reset " << reset << " time" << (reset == 1 ? "" : "s") << ", but register ra wasn't what I expected it to be.";
    ASSERT_EQ(6, vm.GetRegisters().find("r0")->second) << "I tried stepping a virtual machine on source cases/eg1.bleak and input cases/eg1.in 2 steps, having reset " << reset << " time" << (reset == 1 ? "" : "s") << ", but register r0 wasn't what I expected it to be.";
    ASSERT_EQ(0, vm.GetRegisters().find("r1")->second) << "I tried stepping a virtual machine on source cases/eg1.bleak and input cases/eg1.in 2 steps, having reset " << reset << " time" << (reset == 1 ? "" : "s") << ", but register r1 wasn't what I expected it to be.";
    ASSERT_EQ(0, vm.GetRegisters().find("r2")->second) << "I tried stepping a virtual machine on source cases/eg1.bleak and input cases/eg1.in 2 steps, having reset " << reset << " time" << (reset == 1 ? "" : "s") << ", but register r2 wasn't what I expected it to be.";
    ASSERT_EQ(0, vm.GetRegisters().find("r3")->second) << "I tried stepping a virtual machine on source cases/eg1.bleak and input cases/eg1.in 2 steps, having reset " << reset << " time" << (reset == 1 ? "" : "s") << ", but register r3 wasn't what I expected it to be.";
    ASSERT_EQ(0, vm.GetRegisters().find("r4")->second) << "I tried stepping a virtual machine on source cases/eg1.bleak and input cases/eg1.in 2 steps, having reset " << reset << " time" << (reset == 1 ? "" : "s") << ", but register r4 wasn't what I expected it to be.";
    ASSERT_EQ(0, vm.GetRegisters().find("r5")->second) << "I tried stepping a virtual machine on source cases/eg1.bleak and input cases/eg1.in 2 steps, having reset " << reset << " time" << (reset == 1 ? "" : "s") << ", but register r5 wasn't what I expected it to be.";
    ASSERT_EQ(0, vm.GetRegisters().find("r6")->second) << "I tried stepping a virtual machine on source cases/eg1.bleak and input cases/eg1.in 2 steps, having reset " << reset << " time" << (reset == 1 ? "" : "s") << ", but register r6 wasn't what I expected it to be.";
    ASSERT_EQ(0, vm.GetRegisters().find("r7")->second) << "I tried stepping a virtual machine on source cases/eg1.bleak and input cases/eg1.in 2 steps, having reset " << reset << " time" << (reset == 1 ? "" : "s") << ", but register r7 wasn't what I expected it to be.";
    ASSERT_EQ(0, vm.GetRegisters().find("r8")->second) << "I tried stepping a virtual machine on source cases/eg1.bleak and input cases/eg1.in 2 steps, having reset " << reset << " time" << (reset == 1 ? "" : "s") << ", but register r8 wasn't what I expected it to be.";
    ASSERT_EQ(0, vm.GetRegisters().find("r9")->second) << "I tried stepping a virtual machine on source cases/eg1.bleak and input cases/eg1.in 2 steps, having reset " << reset << " time" << (reset == 1 ? "" : "s") << ", but register r9 wasn't what I expected it to be.";
    bool saw_exception = false;
    try {
      vm.Step();
    } catch (int actual_exception) {
      saw_exception = true;
      ASSERT_EQ(BleakVirtualMachine::INSTRUCTION_OUT_OF_BOUNDS, actual_exception) << "I tried stepping a virtual machine on source cases/eg1.bleak and input cases/eg1.in 3 steps, having reset " << reset << " time" << (reset == 1 ? "" : "s") << ", but the exception raised on the last call to Step wasn't what I expected.";
    }
    ASSERT_TRUE(saw_exception) << "I tried stepping a virtual machine on source cases/eg1.bleak and input cases/eg1.in 3 steps, having reset " << reset << " time" << (reset == 1 ? "" : "s") << ", but the last call to Step didn't raise exception INSTRUCTION_OUT_OF_BOUNDS as I expected.";
    vm.Reset();
  }
}

