#pragma once
#include <iostream>
#include <cmath>
#include "Force.hpp"
using namespace std;

namespace Problem23
{
    void WELCOMER();

    template <typename T>
    void TakeInput(T& sideA, T& sideB, T& sideC)
    {
        sideA = InputForce::Positive<T>("Please write the length of the first side of the triangle: ");
        sideB = InputForce::Positive<T>("Please write the length of the second side of the triangle: ");
        sideC = InputForce::Positive<T>("Please write the length of the third side of the triangle: ");
    }

    
    template <typename T>
    T CircleAreaInscribedInArbitraryTriangle(T sideA, T sideB, T sideC)
    {
        T semiPerimeter = (sideA + sideB + sideC) / 2;
        T area = sqrt(semiPerimeter * (semiPerimeter - sideA) * (semiPerimeter - sideB) * (semiPerimeter - sideC));
        T radius = area / semiPerimeter;
        return 3.14159265358979323846 * radius * radius;
    }

    template <typename T>
    void PrintAreaResultForArbitraryTriangle(T sideA, T sideB, T sideC)
    {
        cout << "The area of the circle described around the isosceles triangle is: " << CircleAreaInscribedInArbitraryTriangle(sideA, sideB, sideC) << " squared centimeters." << std::endl;
    }

    void main();
}