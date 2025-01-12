#include <iostream>
#include <cmath>
#include "Force.hpp"
using namespace std;

namespace Problem16
{
    void WELCOMER();
    
    template <typename T>
    void TakeInput(T& length, T& width)
    {
        length = InputForce::PositiveAndZero<float>("Please enter the length of the rectangle in cm: ");
        width = InputForce::PositiveAndZero<float>("Ok, now please enter the width of the rectangle in cm: ");
    }
    
    template <typename T>
    T RectangleAreaFromDiameter(T length, T rectangleDiameter)
    {
        T result = length * sqrt(pow(rectangleDiameter, 2) - (pow(length, 2)));
        return result;
    }
    template <typename T>
    void PrintResultOfRectangleArea(T length, T width)
    {
        cout << "Ok, here is your result:\n";
        cout << "Rectangle area = " << RectangleAreaFromDiameter(length, width) << " Squared Longitudinal units\n";
    }
    void main();
}