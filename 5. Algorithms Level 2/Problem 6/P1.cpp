// DONE

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

int SumOfDigits(int Positive , string message)
{
      int remainder = 0;
      int sum = 0;

      cout << message << endl;

      while (Positive > 0)
      {
            remainder = Positive % 10;
            Positive = Positive / 10;
            sum += remainder;
            
      }
      
      return sum;
}

void PrintResults(int TheDigits,int TheSumOfDigits)
{

     cout << "The digits entered is :\n"
          << TheDigits << endl << endl
          << "The Sum Of Digits Is :\n"
          << TheSumOfDigits << endl << endl;
}

int main()
{

    int TheDigits = EnterAPositiveNumber("Hello, Please enter any number?");

    cout << endl;

    int TheSumOfDigits = SumOfDigits(TheDigits, "Here is the sum of each digit of your number is:");
    
    cout << endl;

    PrintResults(TheDigits, TheSumOfDigits);

    return 0;
}