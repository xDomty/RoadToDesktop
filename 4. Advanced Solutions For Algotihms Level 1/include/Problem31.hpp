#pragma once
#include <iostream>
#include <cmath>
using namespace std;

namespace Problem31
{
    template <typename Tnum>
    void PrintResultOfPower(Tnum num)
    {
        cout << "The power of 2 of " << num << " is: " << pow(num,2) << endl;
        cout << "The power of 3 of " << num << " is: " << pow(num,3) << endl;
        cout << "The power of 4 of " << num << " is: " << pow(num,4) << endl;
    }

    void WELCOMER();
    
    void main();

}