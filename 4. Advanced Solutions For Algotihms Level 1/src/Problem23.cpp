#include "../include/Problem23.hpp"

namespace Problem23
{
    void WELCOMER()
    {
        cout << "This program calculates the area of a circle described around an arbitrary triangle\n";
    }

    void main()
    {
        WELCOMER();
        float a, b, c;
        TakeInput(a, b,c);
        PrintAreaResultForArbitraryTriangle(a, b, c);
    }
}