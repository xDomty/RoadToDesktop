#include "../include/Problem28.hpp"
#include "../include/Force.hpp"

namespace Problem28
{
    void WELCOMER()
    {
        cout << "Hello, This program calculates the sum of odd numbers from 1 to N\n";
    }

    void main()
    {
        WELCOMER();
        short N = InputForce::Positive<short>("Please enter N: ");
        PrintSumOfOddNumbers(N);
    }
}