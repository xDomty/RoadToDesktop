#pragma once
#include <iostream>
using namespace std;

namespace Problem28
{
    void WELCOMER();

    template <typename T>
    T CalculateSumOfOddNumbers(T loop)
    {
        T SumOfOdd  = 0;
        for (T i = 1; i <= loop; i += 2)
        {
            SumOfOdd += i;
        }
        return SumOfOdd;
    }

    template <typename T>
    void PrintSumOfOddNumbers(T loop)
    {
        cout << "The sum of odd numbers between 1 and " << loop << " = " << CalculateSumOfOddNumbers(loop) << endl;
    }
    void main();
}