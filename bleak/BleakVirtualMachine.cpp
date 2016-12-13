#include "BleakVirtualMachine.h"

const int BleakVirtualMachine::INSTRUCTION_OUT_OF_BOUNDS = 1;
const int BleakVirtualMachine::INPUT_OUT_OF_BOUNDS = 2;
const int BleakVirtualMachine::UNKNOWN_INSTRUCTION = 3;

BleakVirtualMachine::BleakVirtualMachine(const string &src, const string &in){
       
    registers["r0"]=0;
    registers["r1"]=0;
    registers["r2"]=0;
    registers["r3"]=0;
    registers["r4"]=0;
    registers["r5"]=0;
    registers["r6"]=0;
    registers["r7"]=0;
    registers["r8"]=0;
    registers["r9"]=0;
    registers["pc"]=0;
    registers["nc"]=0;
    registers["ra"]=0; 
     
    //set instructions and inputs//
    string sline = " ";
    int iline = 0;
    int lineN = 0;

    ifstream srcfile(src);
    while(getline(srcfile, sline)){
//        cout << "src loop" << endl;
        vector<string> vect = Tokenize(sline);
        if((vect.size() >= 2) && (vect[vect.size()-2].compare("<-") == 0)){
            string s = vect[vect.size()-1];
            labels[s] = lineN;
        }
         lineN += 1;
        instructions.push_back(sline);
    }
    
    ifstream infile(in);
    
    while(infile >> iline){
       inputs.push_back(iline);
    }
}
/** Method is huge. Here's a table of contents **/
/** Variables           line  81-84
    Exception Checks    line  86-113
      - Tokenize        line  85-86
      -Input Check      line  104-113
    Output Check        line  115-120
    Add Check           line  122-129
    Sub Check           line  131-138
    Inc Check           line  140-145
    Dec Check           line  147-152
    Store Check         line  154-161
    Jmp Check           line  163-167
    JPos Check          line  169-173
    JNeg Check          line  175-179
    JZilch Check        line  181-185
    Call Check          line  187-192
    Return Check        line  194-199
    Increase PC         line  201-204
**/
void BleakVirtualMachine::Step(){
   
//   cout << "*******" <<endl;
//   cout << "r0 is: " << registers["r0"] << endl;
//   cout << "r1 is: " << registers["r1"] << endl;
//   cout << "r2 is: " << registers["r2"] << endl;
//   cout << "r3 is: " << registers["r3"] << endl;
//   cout << "r4 is: " << registers["r4"] << endl;
//   cout << "r5 is: " << registers["r5"] << endl;
//   cout << "r6 is: " << registers["r6"] << endl;
//   cout << "r7 is: " << registers["r7"] << endl;
//   cout << "r8 is: " << registers["r8"] << endl;
//   cout << "r9 is: " << registers["r9"] << endl;
//   cout << "*******" << endl;

   /** Variables **/
   vector<string> acceptableInst = {"input", "add", "store", "sub", "inc", "dec", "output", "jmp", "jpos", "jneg", "jzilch", "call", "return"};
   int cmp = 0;
   bool moved = false;
   bool called = false;
   
   /** Check for base program exit **/
   if(registers["pc"] >= instructions.size())
      throw INSTRUCTION_OUT_OF_BOUNDS;

   /** Tokenize the line **/
   vector<string> line = Tokenize(instructions[registers["pc"]]);

   /** Compare instruction to known Instructions **/
   for(int i = 0; i < acceptableInst.size(); i++){
           if(line[0].compare(acceptableInst[i]) != 0){
              cmp += 1;
           }
   }

   /* Check for known Instructions */
   if(cmp >= acceptableInst.size())
         throw UNKNOWN_INSTRUCTION;

   /* Check for instructions */
   if(line[0].compare("input") == 0){
      if (registers["nc"] >= inputs.size()){
         throw INPUT_OUT_OF_BOUNDS;
      }

      string s = ResolveLValue(line[1]);
      registers[s] = inputs[registers["nc"]];
      registers["nc"] += 1;
   }
   
   /** output **/
   if(line[0].compare("output") == 0){
      int val = 0;
      val = ResolveRValue(line[1]);
      outputs.push_back(val);
   }
   
   /** add **/
   if(line[0].compare("add") == 0){
      int val = 0;
      string s;
      s = ResolveLValue(line[1]);
      val = ResolveRValue(line[2]);      
      registers[s] += val;
   }
   
   /** sub **/
   if(line[0].compare("sub") == 0){
      int val = 0;
      string s;
      s = ResolveLValue(line[1]);
      val = ResolveRValue(line[2]);
      registers[s] -= val;
   }
   
   /** inc **/
   if(line[0].compare("inc") == 0){
      string s;
      s = ResolveLValue(line[1]);
      registers[s] += 1;
   }
   
   /** dec **/
   if(line[0].compare("dec") == 0){
      string s;
      s = ResolveLValue(line[1]);
      registers[s] -= 1;
   }
   
   /** store **/
   if(line[0].compare("store") == 0){
      string s;
      int val;
      s = ResolveLValue(line[1]);
      val = ResolveRValue(line[2]);
      registers[s] = val;
   }

   /** jmp **/
   if(line[0].compare("jmp") == 0){
      moved = true;
      registers["pc"] = labels[line[1]];
   }

   /** jpos **/
   if(line[0].compare("jpos") == 0 && ResolveRValue(line[1]) > 0){
      moved = true;
      registers["pc"] = labels[line[2]];
   }
   
   /** jneg **/
   if(line[0].compare("jneg") == 0 && ResolveRValue(line[1]) < 0){
      moved = true;
      registers["pc"] = labels[line[2]];
   }

   /** jzilch **/
   if(line[0].compare("jzilch") == 0 && ResolveRValue(line[1]) == 0){
      moved = true;
      registers["pc"] = labels[line[2]];
   }

   /** call **/
   if(line[0].compare("call") == 0){
      moved = true;
      registers["ra"] = registers["pc"] +1;
      registers["pc"] = labels[line[1]];
   }
   
   /** return **/
   if(line[0].compare("return") == 0){
      moved = true;
      registers["pc"] = registers["ra"];
      
   }

   /** Increase PC **/
   if(!moved){
      registers["pc"] += 1;
   }
   
}

vector<string> BleakVirtualMachine::Tokenize(const string& line){
   vector<string> vect;
   stringstream ss(line);
   string token;
   while (getline(ss, token, ' ')) {
      vect.push_back(token);
   }
   return vect;
}

string BleakVirtualMachine::ResolveLValue(const string& reg){
   
   if(!(reg[0] == '[')){
      return reg;
   }

   int i;
   string s;
   s += reg[1];
   s += reg[2];
   i = registers[s];
   return ResolveLValue("r" + to_string(i));
 
/*Keep just for reference or if needed to 
          use for second test    */
//   registers["r0"] = 9;
//   if(reg[0] == '['){
//      int i;
//      string s;
//      s+= reg[1];
//      s+= reg[2];
//      i = registers[s];
//      return "r" + to_string(i);   
//   }
//   return reg;
}

int BleakVirtualMachine::ResolveRValue(const string& reg){
   

   if(!(reg[0] == '[') && !(reg[0] == 'r')){
      return atoi(reg.c_str());
   } else if (reg[0] == 'r'){
      return registers[reg];
   }
    int i;
    string s;
    s+= reg[1];
    s+= reg[2];
    i = registers[s];
    return ResolveRValue("r" + to_string(i));

/** Keep for reference **/
//   int i;
//   
//   registers["r0"] = 9;
//   if(reg[0] == '['){
//      string s;
//      s+=reg[1];
//      s+=reg[2];
//      cout << registers["r" +reg[2]] << endl;
//     i = registers[s];
//      cout << i << endl;
//      return registers["r" + i]; 
//      cout << i << endl;
//   }else if(reg[0] == 'r'){     
//   }   
//   return 0;

}

void BleakVirtualMachine::Reset(){
    outputs.clear();
    registers["r0"]=0;
    registers["r1"]=0;
    registers["r2"]=0;
    registers["r3"]=0;
    registers["r4"]=0;
    registers["r5"]=0;
    registers["r6"]=0;
    registers["r7"]=0;
    registers["r8"]=0;
    registers["r9"]=0;
    registers["pc"]=0;
    registers["nc"]=0;
    registers["ra"]=0; 
}

const vector<int>& BleakVirtualMachine::GetInput () const {
    return inputs;
}

const vector<int>& BleakVirtualMachine::GetOutput () const{
    return outputs;
}

const map<string, int>& BleakVirtualMachine::GetLabels () const{
    return labels;
}

map<string, int>& BleakVirtualMachine::GetRegisters(){
    return registers;
}

const vector<string>& BleakVirtualMachine::GetInstructions() const{
   return instructions;
}

