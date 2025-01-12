#include <iostream>
using namespace std;

namespace Problem16
{
    void WELCOMER();
    
    template <typename T>
    void TakeInput(T& length, T& rectangleDiameter)
    {
        length = InputForce::PositiveAndZero<float>("Please enter the length of the rectangle in cm: ");
        rectangleDiameter = InputForce::Positive<float>("Ok, now please enter the rectangle diameter in cm: ");
    }


    template <typename T>
    T RectanglePerimeter(T length, T width)
    {
        return 2 * (length + width);
    }

    template <typename T>
    void PrintResultOfRectanglePerimeter(T length, T width)
    {
        cout << "Ok, here is your result:\n";
        cout << "Rectangle perimeter = 2 * (length + width) = 2 * (" << length << " + " << width << ") = " << RectanglePerimeter(length, width) << " Longitudinal units\n";
    }

    void main();
}