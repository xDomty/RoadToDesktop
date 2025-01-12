#include "../include/Problem16.hpp"
#include "../include/Force.hpp"
#include <cmath>


namespace Problem16
{

    void WELCOMER()
    {
        cout << "Hello,\nThis program calculates the area of a rectangle from its length and diameter\n";
    }

    

    void main()
    {
        // Defining variables
        float length;
        float rectangleDiameter;

        WELCOMER();
        TakeInput(length, rectangleDiameter);
        PrintResultOfRectangleArea(length, rectangleDiameter);
    }
}