#include "../include/Problem27.hpp"

namespace Problem27
{
    void WELCOMER()
    {
        cout << "Hello, This program prints from the number you type to 0\n";
    }

    void main()
    {
        WELCOMER();
        short N = InputForce::Positive<short>("Please enter N: ");
        PrintFromNTo1(N);
    }
}