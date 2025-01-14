#pragma once
#include "../include/Problem17.hpp"
using namespace std;

namespace Problem17
{
    void WELCOMER()
    {
        cout << "Hello,\nThis program calculates the area of a triangle\n";
    };
    
    void main()
    {
        // Defining vars
        float base;
        float height;
        
        WELCOMER();
        ReadInput(base, height);
        PrintResult(base, height);
    }
}