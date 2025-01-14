#ifndef PROBLEM29_HPP
#define PROBLEM29_HPP
#include <iostream>
#include "Force.hpp"

namespace Problem29
{
    void WELCOMER();

    template <typename T>
    T CalculateSumOfEvenNumbers(T loop)
    {
        T SumOfEven = 0;
        for (T i = 2; i <= loop; i += 2)
        {
            SumOfEven += i;
        }
        return SumOfEven;
    }

    template <typename T>
    void PrintSumOfEvenNumbers(T loop)
    {
        std::cout << "The sum of even numbers between 1 and " << loop << " = " << CalculateSumOfEvenNumbers(loop) << std::endl;
    }

    void main();
}
#endif