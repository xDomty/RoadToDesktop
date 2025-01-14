#pragma once
#include "../include/Problem12.hpp"

namespace Problem12
{
    void WELCOME()
    {
        cout << "Hello, This program print to you the biggest number from both numbers you type\n";
    }

    void main()
    {
       int num[2];
       WELCOME();
       TakingTheInput(num);
       cout << PrintResultOfMaxOf2(num);
    }
}

