#pragma once
#include "../include/Problem21.hpp"

namespace Problem21
{
    void WELCOMER()
    {
        cout << "Hello,\nThis program calculates the area of the circle by entering the circumference of it\n";
    }

    void main()
    {
        WELCOMER();
        float circumference;
        TakeInput(circumference);
        PrintResult(circumference);
    }
}