#include "../include/Problem26.hpp"
#include "../include/Force.hpp"

namespace Problem26
{
    void WELCOMER()
    {
        cout << "This program prints from 0 to N\n";
    }

    void main()
    {
        WELCOMER();
        short N = InputForce::Positive<short>("Please enter N: ");
        PrintFrom1ToN(N);
    }
}