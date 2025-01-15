#pragma once
#include <iostream>
#include <cmath>
#include "Force.hpp"

using namespace std;

namespace Problem32
{
    void WELCOMER();

    template <typename Tnum,typename Tpower>
    void ReadInput(Tnum& num, Tpower& power)
    {
        num = InputForce::Positive<Tnum>("Please enter the number: ");
        power = InputForce::Positive<Tpower>("Please enter the power: ");
    }

    template <typename Tnum,typename Tpower>
    void PrintResult(Tnum num, Tpower power)
    {
        cout << "The power of " << num << " to the " << power << " is: " << pow(num, power) << endl;
    }
    void main();
    
}