#pragma once
#include "../include/Problem20.hpp"

namespace Problem20
{
    void WELCOMER()
    {
        cout << "Hello\nThis program calculates Circle area inscribed in a square width\n";
    }

    void main()
    {
        WELCOMER();
        float width;
        TakeInput(width);
        PrintResult(width);
    }
}