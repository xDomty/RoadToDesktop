#pragma once
#include "../include/Problem14.hpp"
#include "../include/Force.hpp"
using namespace std;

namespace Problem14
{
    void main()
    {
        float num1, num2;
        cout << "Hello, This program swaps the numbers you type\n";
        num1 = InputForce::Any<float>("Please enter the first number: ");
        num2 = InputForce::Any<float>("Please enter the second number: ");

        cout << "Numbers before swapping:\n";
        cout << "First number: " << num1 << endl;
        cout << "Second number: " << num2 << endl;

        swipe(num1, num2);

        cout << "Numbers after swapping:\n";
        cout << "First number: " << num1 << endl;
        cout << "Second number: " << num2 << endl;
    }
}