#pragma once
#include <iostream>
#include <optional>
#include "Force.hpp"
using namespace std;

namespace Problem24
{
    optional <short> ageCheck()
    {
        short age = InputForce::Positive<short>("Please enter your age: ");
        if (age >= 18 && age <= 45)
            return age;
        else
            return nullopt;
    }

    void PrintResult();
    void WELCOMER();
    void main();
}