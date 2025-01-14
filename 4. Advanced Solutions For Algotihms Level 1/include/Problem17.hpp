#pragma once
#include <iostream>
using namespace std;

namespace Problem17
{
    void WELCOMER();

    template <typename T>
    void ReadInput(T& base, T& height)
    {
        base = InputForce::Positive<T>("Enter the base of the triangle: ");
        height = InputForce::Positive<T>("Enter the height of the triangle: ");
    }

    template <typename T>
    T calculateArea(T base, T height)
    {
        return 0.5 * base * height;
    }

    template <typename T>
    void PrintResult(T base, T height)
    {
        cout << "The area of the triangle is: " << calculateArea(base, height) << " Squared Longitudinal units." << endl;
    }
    
    void main();
}