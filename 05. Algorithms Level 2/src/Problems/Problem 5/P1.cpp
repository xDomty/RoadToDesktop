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

void PrintDigits(int Positive , string message)
{
      int remainder = 0;

      cout << message << endl;

      while (Positive > 0)
      {
           
            remainder = Positive % 10;
            Positive = Positive / 10;
            cout << remainder << endl;
      }
}

int main()
{
    int Positive = EnterAPositiveNumber("Hello, Please enter any number?");
    PrintDigits(Positive, "Here is your numbers reversed");
    return 0;
}