#include "../include/Problem11.hpp"

namespace Problem11
{
    void WELCOME()
    {
        cout << "HELLO!";
        cout << "\nThis program makes you enter 3 marks and it calculates the average of them from 100\n";
    }

    void main()
    {
        float mark[3];
        WELCOME();
        TakeMarks(mark);
        float average = AverageOf3Marks<float>(mark);
        cout << "Your Result Is : " << PrintResultOfMark(average,50);
    }
}