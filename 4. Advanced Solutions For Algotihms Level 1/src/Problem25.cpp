#include "../include/Problem25.hpp"

namespace Problem25
{
    void WELCOMER()
    {
        cout << "This program checks if the entered age is valid or not\n";
    }

    void main()
    {
        WELCOMER();
        short age = InputForce::NumBetween<short>(18, 45, "Please enter your age: ", "You must enter your age between 18 and 45");
        cout << "VALID AGE\n";
    }
}