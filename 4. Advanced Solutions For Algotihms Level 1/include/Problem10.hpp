#pragma once
#include <iostream>
#include "Force.hpp"
using namespace std;

namespace Problem10
{
    template <typename TypeOfFunction>
    TypeOfFunction AverageOf3Marks(TypeOfFunction mark[3])
    {
        return (mark[0]+mark[1]+mark[2])/3;
    }

    template <typename TypeOfFunction>
    void TakeMarks(TypeOfFunction mark[3])
    {
        mark[0] = InputForce::NumBetween<TypeOfFunction>(0,100,"Please enter the first mark: ","Invalid input. Try again.");
        mark[1] = InputForce::NumBetween<TypeOfFunction>(0,100,"Please enter the second mark: ","Invalid input. Try again.");
        mark[2] = InputForce::NumBetween<TypeOfFunction>(0,100,"Please enter the third mark: ","Invalid input. Try again.");
    }

    void main();
}