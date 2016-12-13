#include "BleakVirtualMachine.h"

int main(int argc, char* argv[]){
//    cout << "Enter input file location: ";
//    getline(cin, input);
    
    //get source file//
//    cout << "Enter source file location ";
//    getline(cin, source);
    int i;
    string s;
    string source = " ";
    string input = " ";
    source = argv[1];
    input = argv[2];
    cout << "The input file location is: " << argv[1] << endl;    
    cout << "The source file location is: " << argv[2] << endl;

    BleakVirtualMachine* bleak = new BleakVirtualMachine(argv[1], argv[2]);
    //s = bleak->ResolveLValue("[r0]");
    //i = bleak->ResolveRValue("[r0]");
    //cout << i << endl;

    bool run = true;
    try{
     do{
       bleak -> Step();
//       bleak -> Step();
//       cout << "Size of output is: " << bleak->GetOutput().size() << endl;
//       bleak -> Reset();
//       cout << "Size of output is: " << bleak->GetOutput().size() << endl;
     }while(true);
    }catch(int e){
//      map<string, int> map = bleak->GetLabels();
//         for (auto it = map.begin(); it != map.end(); ++it){
//            cout << it->first << map[it->first]<< "\n";
//      }
      if(e == 1)
         cout << "INSTRUCTION_OUT_OF_BOUNDS: " << e << endl;
      if(e== 2)
         cout << "INPUT_OUT_OF_BOUNDS: " << e << endl;   
      if(e == 3)
         cout << "UNKNOWN_INSTRUCTION: " << e << endl;
      
      exit(0);
   }    
}
