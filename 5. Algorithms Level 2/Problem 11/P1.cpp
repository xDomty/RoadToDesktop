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

enum en_PalindromeOrNot {Palindrome = 1, NotPalindrome = 2};

en_PalindromeOrNot PalindromeOrNot(int TheDigits)
{
    int ReversedNumber = func_TheDigitsReversed(TheDigits);

     if (ReversedNumber == TheDigits)
     {
        return en_PalindromeOrNot::Palindrome;
     }

     else
     {
        return en_PalindromeOrNot::NotPalindrome;
     }

}

void PrintResults(en_PalindromeOrNot IsItPalindrome)
{
   switch (IsItPalindrome)
   {
      case en_PalindromeOrNot::Palindrome:
         cout << "Your Number is Palindrome";
         break;
      case en_PalindromeOrNot::NotPalindrome:
         cout << "Your Number is Not Palindrome";
         break;
   }
}

int main()
{
    int TheDigits = EnterAPositiveNumber("Hello, Please enter any number?");
    cout << endl;
    
    PrintResults(PalindromeOrNot(TheDigits));
    cout << endl;

    return 0;
}