#include "../include/Problem13.hpp"

namespace Problem13
{
    void WELCOME()
    {
        cout << "Hello, This program print to you the biggest number from three numbers you type\n";
    }

    void main()
    {
        float num[3];
        WELCOME();
        TakingTheInput(num);
        cout << PrintResultOfMaxOf3(num);
    }
}