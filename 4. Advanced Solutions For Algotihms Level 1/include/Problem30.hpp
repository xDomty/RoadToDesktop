#pragma once
#include <iostream>
using namespace std;

namespace Problem30
{
    void WELCOMER();

    template <typename T>
    T Factorial(T N)
    {
        T result = 1;
        for (T i = 1; i <= N; i++)
        {
            result *= i;
        }
        return result;
    }

    template <typename T>
    void PrintResult(T N)
    {
        cout << "The factorial of " << N << " is: " << Factorial(N) << endl;
    }
    
    void main();
}