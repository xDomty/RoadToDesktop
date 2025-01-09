#include "Problem8.hpp"

namespace Problem8
{
    
    void main()
    {
        cout << "HELLO!";
        cout << "\nThis program makes you enter the mark from 1 to 100\n";
        float mark;
        cout << "Please enter your mark?\n";
        cin >> mark;

        cout << PrintResultOfMark(mark,1,100,50);
    }
}