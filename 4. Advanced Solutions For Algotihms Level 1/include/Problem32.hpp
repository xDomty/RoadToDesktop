#include <iostream>
#include <cmath>
#include "Force.hpp"

using namespace std;

namespace Problem32
{
    void WELCOMER();

    template <typename T>
    void ReadInput(T& num, T& power)
    {
        num = InputForce::Positive<T>("Please enter the number: ");
        power = InputForce::Positive<T>("Please enter the power: ");
    }

    template <typename T>
    void PrintResult(T num, T power)
    {
        cout << "The power of " << num << " to the " << power << " is: " << pow(num, power) << endl;
    }
}