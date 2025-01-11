#include "../include/Problem7.hpp"
#include "../include/Force.hpp"

namespace Problem7
{
    void main()
    {
        //defining vars
        float UserNum;
    
        cout << "Hello, This program is taking the half of the number\n"; // INTRODUCTION
        UserNum = InputForce::Any<short>(); //taking the input

        cout << "Here is the half of the number : " << HalfNumber<short>(UserNum) << endl;
    }
}