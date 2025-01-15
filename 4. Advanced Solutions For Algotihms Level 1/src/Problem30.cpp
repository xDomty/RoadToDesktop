#pragma once
#include "../include/Problem30.hpp"
#include "../include/Force.hpp"

namespace Problem30
{
    void WELCOMER()
    {
        cout << "Hello, This program calculates the factorial of a number\n";
    }

    double Factorial(double N)
    {
        double result = 1;
        for (short i = 1; i <= N; i++)
        {
            result *= i;
        }
        return result;
    }

    void PrintResult(double N)
    {
        cout << "The factorial of " << N << " is: " << Factorial(N) << endl;
    }

    void main()
    {
        WELCOMER();
        short N = InputForce::Positive<short>("Please enter N: ");
        PrintResult(N);
    }
}