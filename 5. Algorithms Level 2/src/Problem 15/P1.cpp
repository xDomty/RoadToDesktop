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

void LoopTheNumberPatternOfChar(int num)
{

    char TheChar;

    cout << "Here is your pattern\n";

    for (int i = 1; i<= num; i++)
    {
        for (int j = 1; j <= i; j++)
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

    LoopTheNumberPatternOfChar(num);
    cout << endl;

    return 0;
}