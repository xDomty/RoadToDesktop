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

void PrintDigitFrequency(int Positive , int HowMany)
{
      int remainder = 0;
      int counter = 0;
      cout << "Ok, Here is the digit frequency of " << HowMany << " :" << endl;

      while (Positive > 0)
      {
            remainder = Positive % 10;
            Positive = Positive / 10;
            if (remainder == HowMany)
            {
                counter++;
            }
      }

      cout << counter;
}

int main()
{
    int Positive = EnterAPositiveNumber("Hello, Please the digits (NUMBERS ONLY!)");
    cout << endl;

    int HowMany = EnterAPositiveNumber("Please enter the number to print the digit frequency of it?");
    cout << endl;

    PrintDigitFrequency(Positive, HowMany);
    cout << endl;

    return 0;
}