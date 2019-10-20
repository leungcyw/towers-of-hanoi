#include <sstream>
#include "Hanoi.h"

using namespace std;

string Hanoi::sol(int nDiscs, string from, string to, string help) const {
  if (nDiscs == 1) {
    string ret = from + "->" + to + "\n";
    return ret;
  }
  string r1 = sol(nDiscs - 1, from, help, to);
  string r2 = from + "->" + to + "\n";
  string r3 = sol(nDiscs - 1, help, to, from);
  return r1 + r2 + r3;
}


// Solve the N pole, M disc Towers of Hanoi problem and return a sequence of
// moves as a string in the form:
//  # Below, A->B means 'move the top disc on pole A to pole B'
//  1->2
//  1->3
//  2->3
//  ...
// solve() always means move all discs from pole 1 to pole 2 using 3 as a temp.
string Hanoi::solve() const {
   string str = "# Below, A->B means 'move the top disc on pole A to pole B'\n";
   if (nDiscs < 1) {
     return str;
   }
   string ans = sol(nDiscs, "1", "2", "3"); 
   return str + ans;  
}
