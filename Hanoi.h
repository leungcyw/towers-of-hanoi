//  Hanoi.h
//  Hanoi - Solving the Towers of Hanoi puzzle

#ifndef Hanoi_hpp
#define Hanoi_hpp

#include <iostream>
#include <sstream>
#include <string>
class Hanoi {
private:
    int nPoles;
    int nDiscs;
    
    std::string sol(int nDiscs, std::string from, std::string to, std::string help) const;

public:
    Hanoi(int nd = 5): nDiscs(nd) { nPoles = 3; }  // Discuss > 4 poles cases in the forums

    // Returns a string with lines of the form "p->q" where p is the source pole number and 
    // q the destination for each move. Consider each pole to have an ordinal label (1, 2 or 3).
    std::string solve() const;
};

#endif /* Hanoi_hpp */
