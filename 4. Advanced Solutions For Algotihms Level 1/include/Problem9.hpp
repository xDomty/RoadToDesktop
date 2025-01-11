#include <iostream>
#include "Force.hpp"
using namespace std;

namespace Problem9
{
    template <typename TypeOfNum>
    void TakeInput(TypeOfNum num[3])
    {
       num[0] = InputForce::Any<TypeOfNum>("Please enter the first number: ");
       num[1] = InputForce::Any<TypeOfNum>("Please enter the second number: ");
       num[2] = InputForce::Any<TypeOfNum>("Please enter the third number: ");
    }

    template <typename TypeOfFunction>
    TypeOfFunction SumOf3Nums(TypeOfFunction num[3])
    {
        return num[0]+num[1]+num[2];
    }

    void main();
}