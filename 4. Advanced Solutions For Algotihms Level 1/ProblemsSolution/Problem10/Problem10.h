#include <iostream>
using namespace std;

namespace Problem10
{
    template <typename TypeOfFunction>
    TypeOfFunction AverageOf3Marks(TypeOfFunction mark1, TypeOfFunction mark2, TypeOfFunction mark3)
    {
        return (mark1+mark2+mark3)/3;
    }

    void main();
}