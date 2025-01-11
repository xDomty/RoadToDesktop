#include <iostream>
#include <optional>
#include <limits>
#include "Force.hpp"
using namespace std;

namespace Problem11
{               
    void WELCOME();

    template <typename TypeOfFunction>
    void TakeMarks(TypeOfFunction mark[3])
    {
        mark[0] = InputForce::NumBetween<TypeOfFunction>(0,100,"Please enter the first mark: ","Invalid input. Try again.");
        mark[1] = InputForce::NumBetween<TypeOfFunction>(0,100,"Please enter the second mark: ","Invalid input. Try again.");
        mark[2] = InputForce::NumBetween<TypeOfFunction>(0,100,"Please enter the third mark: ","Invalid input. Try again.");
    }
    
    template <typename TypeOfFunction>
    TypeOfFunction AverageOf3Marks(TypeOfFunction mark[3])
    {
        return (mark[0]+mark[1]+mark[2])/3;
    }

    template <typename TypeOfMARK, typename TypeOfRequiredMArkToPass>
    bool ResultOfMark(TypeOfMARK mark, TypeOfRequiredMArkToPass RequiredMarkToPass)
    {
           return (mark >= RequiredMarkToPass);
    }

    template <typename TypeOfMARK, typename TypeOfRequiredMArkToPass>
    string PrintResultOfMark(TypeOfMARK mark, TypeOfRequiredMArkToPass RequiredMarkToPass)
    {
        if (ResultOfMark(mark,RequiredMarkToPass))
           return "PASSED";
        else
           return "FAILED";
    }

    
    void main();
}