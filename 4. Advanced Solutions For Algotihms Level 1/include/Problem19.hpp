#pragma once
#include <iostream>
#include <cmath>
#include "Force.hpp"
using namespace std;

namespace Problem19
{
    void WELCOMER();

    template <typename T>
    void TakeInput(T& diameter)
    {
        diameter = InputForce::PositiveAndZero<T>("Please enter the diameter length : ");
    }

    template <typename T>
    T CircleAreaByDiameter(T Diameter)
    {
        const T pi = 3.14159265358979323846;
        return (pi * Diameter * Diameter) / 4;
    }

    template <typename T>
    void PrintResult(T diameter)
    {
        cout << "The area of the circle is: " << CircleAreaByDiameter(diameter) << " squared centimeters." << endl;
    }
    
    void main();
}