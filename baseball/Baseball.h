#ifndef BASEBALL_H
#define BASEBALL_H

#include <string>
#include <vector>
#include <map>

using namespace std;

class Baseball {
   public:
      int EvaluateDigit (char c);
      char ValueToDigit (unsigned char c);
      unsigned int FromBase (const string s, unsigned int b);
      string ToBase (unsigned int i, unsigned int b);
      unsigned int EvaluateLiteral (const string &s);
      unsigned int EvaluateVariable (const string &s);
      unsigned int EvaluateTerm (const string &s);
      void EvaluateOperation (const string &s, const string &o, const string &e);
      vector<string> Tokenize(const string &s);
      unsigned int ExtractTargetBase (vector<string> &tokens);
      string ExtractTargetID (vector<string> &express);
      unsigned int Evaluate (const vector<string> &express);
      string Evaluate (const string &str);
};

#endif
