#include <iostream>
using namespace std;

void ReadArray(int arr[100], int& ArrayLength)
{
	cout << "Please enter the length of array? (Maximum is 100)\n";
	cin >> ArrayLength;

	for (int i = 0; i < ArrayLength; i++)
	{
		cout << "Array [" << i + 1 << "] : ";
		cin >> arr[i];
	}
}

void PrintArrayNumbers(int arr[100], int ArrayLength)
{
	for (int i = 0; i < ArrayLength; i++)
	{
		cout << "Random Number [" << i + 1 << "] : "
			<< arr[i] << endl;
	}
}

void CopyArrayToAnotherArrayButInReversedOrder(int arr[100] , int arr2[100] , int ArrayLength)
{
    int counter = 0;
    for (int i = ArrayLength; i >= 0; i--)
    {
        arr2[counter] = arr[i - 1];
        counter++;
    }
}

enum en_PalindromeOrNot { Palindrome = 1, NotPalindrome = 2};

en_PalindromeOrNot CheckPalindrome(int Array1[100],int Array2[100], int Array1And2Length)
{
    int counter = 0;
    for (int i = 0; i < Array1And2Length; i++)
    {
        if (Array1[i] == Array2[i])
        {
            counter++;
        }
    }
    
    if (counter == Array1And2Length)
       return en_PalindromeOrNot::Palindrome;
    else
       return en_PalindromeOrNot::NotPalindrome;
}

string CheckPalindromeReturnsSTRING(int Array1[100],int Array2[100], int Array1And2Length)
{
     if (CheckPalindrome(Array1,Array2,Array1And2Length) == true)
       return "Palindrome";
     else
       return "Not Palindrome";
}

int main()
{
     ///////////////////////////////////////////

     int Array1[100], Array1Length = 0;
     ReadArray(Array1, Array1Length);
     cout << endl << endl;
     cout << "The Array Elements is:\n";
     PrintArrayNumbers(Array1,Array1Length);

     ///////////////////////////////////////////

     int Array2[100];
     CopyArrayToAnotherArrayButInReversedOrder(Array1,Array2,Array1Length);

     //////////////////////////////////////////

     cout << "Your result is : " << CheckPalindromeReturnsSTRING(Array1,Array2,Array1Length);
     cout << endl << endl;
}