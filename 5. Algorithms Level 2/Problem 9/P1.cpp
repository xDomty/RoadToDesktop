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

int DigitFrequency(int Positive , short DigitFrequencyOfNumber)
{
      int remainder = 0;
      int counter = 0;

      while (Positive > 0)
      {
            remainder = Positive % 10;
            Positive = Positive / 10;

            if (remainder == DigitFrequencyOfNumber)
            {
                counter++;
            }
      }

      return counter;
}

void PrintAllDigitsLoop(int Positive)
{
     for (short i = 1; i < 10; i++)
     {
          short shortDigitFrequency = DigitFrequency(Positive,i);
          
          if (shortDigitFrequency > 0)
          {
            cout << "The Digit frequency of " << i << " is " << shortDigitFrequency << endl;
          }
          
     }
}

int main()
{
    int Positive = EnterAPositiveNumber("Hello, Please the digits (NUMBERS ONLY!)");
    cout << endl;

    PrintAllDigitsLoop(Positive);
    cout << endl;

    return 0;
}