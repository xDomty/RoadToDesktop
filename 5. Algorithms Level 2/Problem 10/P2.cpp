#include <iostream>
#include <string>
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

int func_TheDigitsReversed(int TheDigits)
{
      int remainder = 0;
      int ReversedNumber = 0;

      while (TheDigits > 0)
      {
            remainder = TheDigits % 10;
            TheDigits = TheDigits / 10;
            ReversedNumber = ReversedNumber * 10 + remainder;
      }
      
         return ReversedNumber;
}

void PrintResults(int TheDigits)
{
     int ReversedNumber = func_TheDigitsReversed(TheDigits);
     
     int remainder = 0;

      while (ReversedNumber > 0)
      {
           
            remainder = ReversedNumber % 10;
            ReversedNumber = ReversedNumber / 10;
            cout << remainder << endl;
      }
}

int main()
{
    int TheDigits = EnterAPositiveNumber("Hello, Please enter any number?");
    cout << endl;
    
    PrintResults(TheDigits);
    cout << endl;

    return 0;
}