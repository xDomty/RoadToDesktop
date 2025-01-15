#pragma once
#include <iostream>
using namespace std;

namespace Problem14
{
    template <typename T>
    void swipe(T &num1, T &num2)
    {
        T temp;
        temp = num1;
        num1 = num2;
        num2 = temp;
    }
    
    void main();
}