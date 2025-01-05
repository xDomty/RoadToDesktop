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
      string TakeTheOutputResult = "";

      while (TheDigits > 0)
      {
            remainder = TheDigits % 10;
            TheDigits = TheDigits / 10;
            TakeTheOutputResult += to_string(remainder);
      }
      
         int TheOutputResult_ToInt = stoi(TakeTheOutputResult);
         
         return TheOutputResult_ToInt;
}

void PrintResults(int TheDigits,int TheDigitsReversed)
{

     cout << "The digits entered is :\n"
          << TheDigits << endl << endl
          << "The Digits Reversed Is :\n"
          << TheDigitsReversed << endl << endl;

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