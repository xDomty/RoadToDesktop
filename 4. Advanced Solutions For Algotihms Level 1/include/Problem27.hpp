#pragma once
#include <iostream>
#include "Force.hpp"

namespace Problem27
{
    void WELCOMER();

    template <typename T>
    void PrintFromNTo1(T N)
    {
        for (T i = N; i >= 1; i--)
        {
            std::cout << i << std::endl;
        }
    }

    void main();
}