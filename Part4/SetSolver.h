#ifndef SetSolver_h
#define SetSolver_h

#include <string>
#include <iostream>
#include <vector>
#include "SetSolverSquareSet.h"

using std::vector;
using std::string;
//You can add another .h class to help you create a data structure of your choosing.

class SetSolver
{
private:
    int boardSize = 9;
    vector<vector<SetSolverSquareSet>>board;
    
public:
    
void PopulateBoard(vector<string>skeletonBoard)
{
    // implement your code here
}
    
int ReturnValue(size_t row, size_t col)
{
    // implement your code here and
    
    //return the right value
    return 0;//This line was added temporarily 
}
    
void Solve()
{
    // implement your code here
}
    
    
};
#endif /* SetSolver_h */
