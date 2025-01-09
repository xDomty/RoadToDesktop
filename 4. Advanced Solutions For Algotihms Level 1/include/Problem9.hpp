#include <iostream>
using namespace std;

namespace Problem9
{
    template <typename TypeOfFunction>
    TypeOfFunction SumOf3Nums(TypeOfFunction num1, TypeOfFunction num2, TypeOfFunction num3)
    {
        return num1+num2+num3;
    }

    void main();
}