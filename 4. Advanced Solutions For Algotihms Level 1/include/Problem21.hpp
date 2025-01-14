#pragma once
#include <iostream>
#include <cmath>
#include "Force.hpp"
using namespace std;

namespace Problem21
{
    void WELCOMER();

    template <typename T>
    void TakeInput(T& circumference)
    {
        circumference = InputForce::PositiveAndZero<T>("Please enter the circumference of the circle: ");
    }

    template <typename T>
    T CircleAreaByCircumference(T circumference)
    {
        const T pi = 3.14159265358979323846;
        return ((circumference * circumference) / (4 * pi));
    }

    template <typename T>
    void PrintResult(T circumference)
    {
        cout << "The area of the circle is: " << CircleAreaByCircumference(circumference) << " squared centimeters." << endl;
    }

    void main();
}