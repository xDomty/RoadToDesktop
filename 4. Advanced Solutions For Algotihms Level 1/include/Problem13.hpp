#include <iostream>
#include <optional>
#include "Force.hpp"
using namespace std;

namespace Problem13
{
    void WELCOME();

    template <typename T>
    optional <T> TheMaxOf3(T num[3])
    {
        if (num[0] > num[1])
        {
            if (num[0] > num[2])
                return num[0];
            else
                return num[2];
        }
        else
        {
            if (num[1] > num[2])
                return num[1];
            else
                return num[2];
        }
    }

    template <typename T>
    string PrintResultOfMaxOf3(T num[3])
    {
       if (TheMaxOf3(num) == nullopt)
            return "All Of Them Are Equal";
       else 
       {
            return (to_string(TheMaxOf3(num).value()) + " is the greatest number of the three");
       }
    }
    
    template <typename T>
    void TakingTheInput(T num[3])
    {
       num[0] = InputForce::Any<T>("Please enter the first number: ");
       num[1] = InputForce::Any<T>("Please enter the second number: ");
       num[2] = InputForce::Any<T>("Please enter the third number: ");
    }

    void main();
}