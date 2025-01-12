#include <iostream>
#include <cmath>
#include "Force.hpp"
using namespace std;

namespace Problem20
{
    void WELCOMER();
    
    template <typename T>
    void TakeInput(T& width)
    {
        width = InputForce::PositiveAndZero<T>("Please enter the width of the square: ");
    }
    
    template <typename T>
    T CircleAreaBySquareWidth(T width)
    {
        const T pi = 3.14159265358979323846;
        T radius = width / 2;
        return pi * radius * radius;
    }
    
    template <typename T>
    void PrintResult(T width)
    {
        cout << "The area of the inscribed circle is: " << CircleAreaBySquareWidth(width) << " squared centimeters." << endl;
    }
    
    void main();
}