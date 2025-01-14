#pragma once
#include <iostream>
#include <cmath>
#include "Force.hpp"
using namespace std;

namespace Problem22
{
    void WELCOMER();

    template <typename T>
    T CircleAreaInscribedInIsoscelesTriangle(T sideA, T sideB)
    {
        T semiPerimeter = (2 * sideA + sideB) / 2;
        T area = (sideB / 4) * sqrt(4 * sideA * sideA - sideB * sideB);
        T radius = area / semiPerimeter;
        return 3.14159265358979323846 * radius * radius;
    }

    template <typename T>
    void TakeInputForIsoscelesTriangle(T& sideA, T& sideB)
    {
        sideA = InputForce::PositiveAndZero<T>("Please enter the length of the equal sides of the isosceles triangle: ");
        sideB = InputForce::PositiveAndZero<T>("Please enter the length of the base of the isosceles triangle: ");
    }
    
    template <typename T>
    void PrintResultForIsoscelesTriangle(T sideA, T sideB)
    {
        cout << "The area of the circle inscribed in the isosceles triangle is: " << CircleAreaInscribedInIsoscelesTriangle(sideA, sideB) << " squared centimeters." << endl;
    }

    void main();
}