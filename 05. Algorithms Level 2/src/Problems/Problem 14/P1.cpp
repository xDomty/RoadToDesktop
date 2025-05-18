#include <iostream>
using namespace std;

int EnterAPositiveNumber(string message)
{
     int positive;
     do
     {
      cout << message << endl;
      cin >> positive;
     } while (positive < 0);
     return positive;
}

void LoopTheNumberPatternOfCharReversed(int num)
{
    char TheChar;
    cout << "Here is your pattern of charachters\n";

    // I For The Length Of The Pattern
    // J For The Width Of The Pattern

    for (int i = num; i >= 0; i--)
    {
        for (int j = i; j >= 1; j--)
        {
            TheChar = 64 + i;
            cout << TheChar;
        }

        cout << endl;
    }
    
}

int main()
{
    int num = EnterAPositiveNumber("Please enter your number to print the pattern of it?");
    cout << endl;

    LoopTheNumberPatternOfCharReversed(num);
    cout << endl;

    return 0;
}