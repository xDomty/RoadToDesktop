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

void PrintResults(int TheDigits,int TheDigitsReversed)
{

     string TheDigitsReversedToString = to_string(TheDigitsReversed);
     int TheDigitsReversedLength = TheDigitsReversedToString.length();

     for (int i = TheDigitsReversedLength; i >= 0; i-- )
     {
          cout << TheDigitsReversedToString[i] << endl;
     }
}

int main()
{
    int TheDigits = EnterAPositiveNumber("Hello, Please enter any number?");
    cout << endl;

    int TheDigitsReversed = func_TheDigitsReversed(TheDigits);
    cout << endl;
    
    PrintResults(TheDigits,TheDigitsReversed);
    cout << endl;

    return 0;
}