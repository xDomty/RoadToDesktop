#pragma once
#include "../include/Force.hpp"

namespace Problem18
{
    void WELCOMER();

    void TakeInput(float& radius)
    {
        radius = InputForce::PositiveAndZero<float>("Please enter the radius in cm: ");
    }

    template <typename T>
    T CircleAreaByRadius(T radius)
    {
        const T pi = 3.14159265358979323846;
        return pi * radius * radius;
    }

    template <typename T>
    void PrintResult(T radius)
    {
        cout << "The area of the circle is: " << CircleAreaByRadius(radius) << " squared centimeters." << endl;
    }

    void main();
}