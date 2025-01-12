#include "../include/Problem18.hpp"

namespace Problem18
{
    void WELCOMER()
    {
        cout << "Hello,\nThis program calculates the area of circle.\n";
    }

    void main()
    {
        float radius;
        WELCOMER();
        TakeInput(radius);
        PrintResult(radius);
    }
}