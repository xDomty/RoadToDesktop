#include "../include/Problem15.hpp"
#include "../include/Force.hpp"

namespace Problem15
{
    void main()
    {
        float length, width;
        cout << "Hello, This program calculates the area of a rectangle\n";
        length = InputForce::Positive<float>("Please enter the length of the rectangle: ");
        width = InputForce::Positive<float>("Please enter the width of the rectangle: ");

        cout << "The area of the rectangle is: " << RectangleArea(length, width) << std::endl;
    }
}