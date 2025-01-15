#pragma once
#include <iostream>
#include <optional>
#include <string>
#include "Force.hpp"
using namespace std;

namespace Problem12
{
    void WELCOME();

    template <typename T>
    optional <T> TheMaxOf2(T num[2])
    {
        if (num[0] == num[1])
           return nullopt;
        else if (num[0] > num[1])
           return num[0];
        else 
           return num[1];
    }

    template <typename T>
    string PrintResultOfMaxOf2(T num[3])
    {
       if (TheMaxOf2(num) == nullopt)
          return "All Of Them Are Equal";
       else 
          return (to_string(TheMaxOf2(num).value()) + " is the greatest number of the both");
    }
    
    template <typename T>
    void TakingTheInput(T num[2])
    {
       num[0] = InputForce::Any<T>("Please enter the first number: ");
       num[1] = InputForce::Any<T>("Please enter the second number: ");
    }

    void main();
}