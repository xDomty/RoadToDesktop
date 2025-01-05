#include <iostream>
#include <cmath>
using namespace std;

float EnterANumber(string message)
{
	cout << message << endl;

	float number;
	cin >> number;
	return number;
}

float TheRemainingOfNumber(float number)
{
    
    return (float)abs(number - int(number));

}

int RoundOfNumber(float number)
{
    float TheRemaining = TheRemainingOfNumber(number);
    
    if (TheRemaining >= 0.5)
       {
          if (number >= 0)
             return (int) number + 1;
          else
             return (int) number - 1;
       }
    else
       return (int)number;
}

int FloorOfNumber(float number)
{
    if (number >= 0)
       return (int)number;
    else 
       return (int)number-1;
}

int CeilOfNumber(float Number)
{
    float TheRemaining = TheRemainingOfNumber(Number);
    
    if (TheRemaining > 0)
       if (Number > 0) 
          return int(Number) + 1; 
       else
          return int(Number);
    else
       return (int)Number;
}

float MySquareRoot(float number)
{
   return pow(number,0.5);
}

int main()
{
    float TheNumberToCheck = EnterANumber("Please enter the number to make operations with it?");

    cout << endl << endl;
    cout << "The number after rounding it using my function : " << RoundOfNumber(TheNumberToCheck) << endl;
    cout << "The number after rounding it using cmath : " << round(TheNumberToCheck) << endl;
    cout << "\n______________________________\n\n";
    cout << "The number after flooring it using my function : " << FloorOfNumber(TheNumberToCheck) << endl;
    cout << "The number after flooring it using cmath : " << floor(TheNumberToCheck) << endl;
    cout << "\n______________________________\n\n";
    cout << "The number after ceiling it using my function : " << CeilOfNumber(TheNumberToCheck) << endl;
    cout << "The number after ceiling it using cmath : " << ceil(TheNumberToCheck) << endl;
    cout << "\n______________________________\n\n";
    cout << "The number after Square Rooting it using my function : " << MySquareRoot(TheNumberToCheck) << endl;
    cout << "The number after Square Rooting it using cmath : " << sqrt(TheNumberToCheck) << endl;
    cout << "\n______________________________\n\n";

}