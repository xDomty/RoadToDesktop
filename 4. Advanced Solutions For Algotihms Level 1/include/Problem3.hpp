#ifndef PROBLEM3_HPP
#define PROBLEM3_HPP
#include <iostream>
using namespace std;

namespace Problem3
{
    template <typename VarType>
    bool IsEven(VarType num)
    {
        if (num % 2 == 0)
            return true;
        else
            return false;
    }
       
    template <typename VarType>
    string ResultOfIsEven(VarType num)
    {
       if (IsEven(num))
          return "Your result is even";
       else
          return "Your result is odd";
    }
}
#endif