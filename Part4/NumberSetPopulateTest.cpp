//
//  main.cpp
//  PEP Resit 2023 C++ Number Set
//
//
//


#include <memory>
#include "SetSolver.h"



using std::cout;
using std::unique_ptr;




int main()
{
    int retval = 0;
    {
        //Task 1

        unique_ptr<SetSolver>board(new SetSolver());
        
        vector<string>
        skeletonBoard{  "-6*300**00",
                        "41*30*8*6",
                        "**0**0***",
                        "***-2***70",
                        "0-9**6**00",
                        "0****0***",
                        "**804*06*",
                        "**9*-12***",
                        "00560-42*0"};

        board->PopulateBoard(skeletonBoard);

        vector<vector<int>> skeletonAnswer
                    {
                        {-6,99,3,0,0,99,99,0,0},
                        {4,1,99,3,0,99,8,99,6},
                        {99,99,0,99,99,0,99,99,99},
                        {99,99,99,-2,99,99,99,7,0},
                        {0,-9,99,99,6,99,99,0,0},
                        {0,99,99,99,99,0,99,99,99},
                        {99,99,8,0,4,99,0,6,99},
                        {99,99,9,99,-1,2,99,99,99},
                        {0,0,5,6,0,-4,2,99,0}
                    };

        for(size_t row=0;row<9;++row)
        {
            for (size_t col=0; col<9;++col)
            {
                if((board->ReturnValue(row,col))!= (skeletonAnswer[row][col]))
                {
                    cout << "Failed: when checking row: "<<row<<" col: "<< col <<"\n";
                    retval++;
                }
            }
        }
        

    }
    

    return retval;
}
