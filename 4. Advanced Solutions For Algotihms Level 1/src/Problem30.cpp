#pragma once
#include "../include/Problem30.hpp"
#include "../include/Force.hpp"

namespace Problem30
{
    void WELCOMER()
    {
        cout << "Hello, This program calculates the factorial of a number\n";
    }

    void main()
    {
        WELCOMER();
        short N = InputForce::Positive<short>("Please enter N: ");
        PrintResult(N);
    }
}