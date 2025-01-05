#pragma once

#include <iostream>
#include <limits>
using namespace std;

namespace space_L11_Lessons
{

	int L11_ReadNumberWithValidation_Lesson1(string message, string MessageIfFail)
	{
		int number = 0;
		cout << message;
		cin >> number;
		while (cin.fail())
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << MessageIfFail;
			cin >> number;
		}

		return number;
	}
	
}

namespace space_L11_WhatIDidByMyself
{
	using namespace space_L11_Lessons;
	void L11_ReadPositiveNumberWithValidation()
	{
		int number = L11_ReadNumberWithValidation_Lesson1("Please enter a positive number or number bigger than 0?\n", "PLEASE ENTER A NUMBER NOT A TEXT:\n");
		while (number <= 0)
		{
			cout << "HEY PLEASE ENTER A POSITIVE NUMBER?\n";
			number = L11_ReadNumberWithValidation_Lesson1("", "PLEASE ENTER A NUMBER NOT A TEXT:\n");
		}
	}

   void L11_WhatIDidByMySelf_Main1()
   {
	   L11_ReadPositiveNumberWithValidation();
   }
}