#include "../include/Problem29.hpp"
#include "../include/Force.hpp"

namespace Problem29
{
    void WELCOMER()
    {
        cout << "Hello, This program calculates the sum of even numbers from 0 to N\n";
    }

    void main()
    {
        WELCOMER();
        short N = InputForce::Positive<short>("Please enter N: ");
        PrintSumOfEvenNumbers(N);
    }
}