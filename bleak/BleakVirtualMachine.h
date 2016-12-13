#ifndef BLEAKVIRTUALMACHINE_H
#define BLEAKVIRTUALMACHINE_H

#include <string>
#include <vector>
#include <map>

//stuff for file managment//
#include <iostream>
#include <fstream>
#include <sstream>
#include <cstring>

//constants//
using namespace std;

class BleakVirtualMachine{

    private:
    //Variables//
    vector<string> instructions;
    vector<int> inputs;
    vector<int> outputs;

    //More variables//
    map<string, int> registers;
    map<string, int> labels;

 
    
    public:
    
    static const int INSTRUCTION_OUT_OF_BOUNDS;
    static const int INPUT_OUT_OF_BOUNDS;
    static const int UNKNOWN_INSTRUCTION;

    //Functions//
    BleakVirtualMachine(const string &src, const string &in);
    void Reset();
    const vector<string>& GetInstructions() const;
    const map<string, int>& GetLabels() const;
    map<string, int>& GetRegisters();
    const vector<int>& GetInput() const;
    const vector<int>& GetOutput() const;
    string ResolveLValue(const string &expression);
    int ResolveRValue(const string &expression);
    static vector<string> Tokenize(const string &line);
    void Step();
};

#endif
