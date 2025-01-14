#pragma once
#include "../include/Problem10.hpp"

namespace Problem10
{
    void main()
    {
        float mark[3];
        cout << "Hello!\nThis program makes you enter 3 marks then it calculates the average of it.\n";
        TakeMarks(mark);
        cout << "The average of the three marks is : "<< AverageOf3Marks<float>(mark);
    }
}