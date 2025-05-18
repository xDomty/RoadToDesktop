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

void LoopTheNumberPattern(int num)
{

    cout << "Here is your pattern\n";

    for (int i = num; i >= 0; i--)
    {
        for (int j = i; j >= 1; j--)
        {
            cout << i;
        }

        cout << endl;
    }
    
}

int main()
{
    int num = EnterAPositiveNumber("Please enter your number to print the pattern of it?");
    cout << endl;

    LoopTheNumberPattern(num);
    cout << endl;

    return 0;
}