#include "Problem7.h"

namespace Problem7
{
    void main()
    {
        //defining vars
        short UserNum;
    
        cout << "Hello, This program is taking the half of the number\n"; // INTRODUCTION
        cout << "Please enter the number\n";
        cin >> UserNum;

        cout << "Here is the half of the number : " << HalfNumber<short>(UserNum) << endl;
    }
}