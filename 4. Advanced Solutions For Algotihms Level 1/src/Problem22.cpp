#include "../include/Problem22.hpp"

namespace Problem22
{
    void WELCOMER()
    {
        cout << "Hello\nThis program calculates the area of the circle inscribed in an isosceles triangle\n";
    }

    void main()
    {
        WELCOMER();
        float sideA, sideB;
        TakeInputForIsoscelesTriangle(sideA, sideB);
        PrintResultForIsoscelesTriangle(sideA, sideB);
    }
}