#include "../include/Problem32.hpp"

namespace Problem32
{
    void WELCOMER()
    {
        cout << "Hello, This program calculates (number ^ power)\n";
    }

    void main()
    {
        WELCOMER();
        short num,power;
        ReadInput(num,power);
        PrintResult(num,power);
    }
}