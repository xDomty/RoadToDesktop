#pragma once
#include "../include/Problem19.hpp"

namespace Problem19
{
    void WELCOMER()
    {
        cout << "Hello\nThis program calculates Circle area by the diameter\n";
    }

    void main()
    {
        WELCOMER();
        float diameter;
        TakeInput(diameter);
        PrintResult(diameter);
    }
}