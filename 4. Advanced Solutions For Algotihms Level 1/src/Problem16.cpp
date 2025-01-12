#include "../include/Problem16.hpp"
#include "../include/Force.hpp"
#include <cmath>


namespace Problem16
{
    float RectangleAreaFromDiameter(float length, float rectangleDiameter)
    {
        float result = length * sqrt(pow(rectangleDiameter, 2) - (pow(length, 2)));
        return result;
    }

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
        PrintResultOfRectanglePerimeter(length, rectangleDiameter);
    }
}