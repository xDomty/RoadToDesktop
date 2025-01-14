#include "../include/Problem31.hpp"
#include "../include/Force.hpp"

namespace Problem31
{
    void WELCOMER()
    {
        cout << "Hello, This program calculates the power of 2, 3, and 4 of a number\n";
    }

    void main()
    {
        WELCOMER();
        short N = InputForce::Positive<short>("Please enter N: ");
        PrintResult(N);
    }
}