#pragma once
#include <vector>
#include <string>
#include <limits>
#include <iostream>
#include "Colors.h"
using namespace std;

namespace Read
{
	string getString(string Message = "enter word: ")
	{
		string txt;
		cout << Message;
		getline(cin, txt);

		return txt;
	}

	int ReadNumberWithValidation(string message = "", string MessageIfFail = "")
	{
		int number = 0;
	StartCheckPointIfFail:  cout << message;
		cin >> number;
		while (cin.fail())
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			Colors_WindowsOS::XScreenColors(Colors_WindowsOS::enNormalColors::Red, Colors_WindowsOS::enBrightColors::BrightWhite);
			cout << MessageIfFail;
			system("pause");
			Colors_WindowsOS::XScreenColors(Colors_WindowsOS::enNormalColors::Black, Colors_WindowsOS::enBrightColors::BrightWhite);
			cout << endl;
			goto StartCheckPointIfFail;
		}

		return number;
	}

	bool ReadBoolWithValidation(string message = "", string MessageIfFail = "")
	{
        
		bool TrueOrFalse = 0;
    	StartCheckPointIfFail: cout << message;
		cin >> TrueOrFalse;
		while (cin.fail())
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			Colors_WindowsOS::XScreenColors(Colors_WindowsOS::enNormalColors::Red, Colors_WindowsOS::enBrightColors::BrightWhite);
			cout << MessageIfFail;
			system("pause");
			Colors_WindowsOS::XScreenColors(Colors_WindowsOS::enNormalColors::Black, Colors_WindowsOS::enBrightColors::BrightWhite);
			cout << endl;
			goto StartCheckPointIfFail;
		}

		return TrueOrFalse;
	}

	int ReadPositiveNumberWithValidation(string message = "", string MessageIfNegativeOr0Fail = "", string MessageIfTextFail = "")
	{
		int number = ReadNumberWithValidation(message, MessageIfTextFail);
		while (number <= 0)
		{
			cout << MessageIfNegativeOr0Fail;
			number = ReadNumberWithValidation("", MessageIfTextFail);
		}
		return number;
	}

	void ReadAPositiveNumberOfArrayWithVaildation(int*& arr, int ArrayLength, string message = "", string MessageIfTextFail = "", string MessageIfNegativeFail = "")
	{

		arr = new int[ArrayLength];
		for (int i = 0; i < ArrayLength; i++)
		{
		IHateMyLife:
			cout << message << ' ' << i + 1 << " : "; cin >> *(arr + i);
			while (cin.fail())
			{
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				cout << MessageIfTextFail;
				goto IHateMyLife;
			}

			if ((arr[i]) < 0)
			{
				cout << MessageIfNegativeFail;
				goto IHateMyLife;
			}
		}
	}

	void ReadANumberOfArrayWithVaildation(int*& arr, int ArrayLength, string message = "", string MessageIfTextFail = "")
	{

		arr = new int[ArrayLength];
		for (int i = 0; i < ArrayLength; i++)
		{
		IHateMyLife:
			cout << message << ' ' << i + 1 << " : "; cin >> *(arr + i);
			while (cin.fail())
			{
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				cout << MessageIfTextFail;
				goto IHateMyLife;
			}

		}
	}
}
