#include "../include/Problem8.hpp"
#include "../include/Force.hpp"
namespace Problem8
{
    void main()
    {
        cout << "HELLO!";
        cout << "\nThis program makes you enter the mark from 1 to 100\n";
        float mark;
        mark = InputForce::NumBetween<float>(1,100,"Please enter the mark: ","Invalid input. Try again.");
        cout << PrintResultOfMark(mark,1,100,50);
    }
}