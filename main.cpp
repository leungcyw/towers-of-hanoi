//  main.cpp
//  Hanoi - Solve the N disc Towers of Hanoi problem
#include <iostream>

#include "Hanoi.h"

using namespace std;

int main(int argc, const char * argv[]) {
   // Test 4 discs
   int numDiscs = 4;
   Hanoi puzzle(numDiscs);
   string sol = puzzle.solve();
   cout <<sol <<endl;
cout << "CHECK";
   // Test 10 discs 
   numDiscs = 10;
   Hanoi puzzle2(numDiscs);
   sol = puzzle2.solve();
   cout <<sol <<endl;
   
   // Test default constructor
   Hanoi puzzle3;
   sol = puzzle3.solve();
   cout <<sol <<endl;
  
   // Test 1 disc 
   numDiscs = 1;
   Hanoi puzzle4(numDiscs);
   sol = puzzle4.solve();
   cout <<sol <<endl;
   

    return 0;
}
