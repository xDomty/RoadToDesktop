#pragma once
#include <iostream>
#include <limits>
#include <string>
using namespace std;

namespace Validate
{
	template <typename T>
	T Any(const string& message = "Please enter a number: ", const string& messageIfFail = "Invalid input. Try again.")
	{
		T variable;
		while (true)
		{
			cout << message;
			cin >> variable;
			if (!cin.fail())
				break;
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << messageIfFail << endl;
		}
		return variable;
	}

	template <typename T>
	T NumBetween(T from, T to, const string& message = "Please enter a number: ", const string& messageIfNumberFail = "Input Failed, Number out of range. Try again.", const string& messageIfTextFail = "Invalid input. Try again.")
	{
		T variable;
		variable = Any<T>(message, messageIfTextFail);
		while (variable < from || variable > to)
		{
			cout << messageIfNumberFail << endl;
			variable = Any<T>(message, messageIfTextFail);
		}
		return variable;
	}

	template <typename T>
	T Positive(const string& message = "Please enter a positive number: ", const string& messageIfNumberFail = "Input Failed, Please enter a positive number.", const string& messageIfTextFail = "Invalid input. Please enter a valid number.")
	{
		T variable;
		variable = Any<T>(message, messageIfTextFail);
		while (variable <= 0)
		{
			cout << messageIfNumberFail << endl;
			variable = Any<T>(message, messageIfTextFail);
		}
		return variable;
	}

	template <typename T>
	T PositiveAndZero(const string& message = "Please enter a positive number or zero: ", const string& messageIfNumberFail = "Input Failed, Please enter a positive number or zero.", const string& messageIfTextFail = "Invalid input. Please enter a valid number.")
	{
		T variable;
		variable = Any<T>(message, messageIfTextFail);
		while (variable < 0)
		{
			cout << messageIfNumberFail << endl;
			variable = Any<T>(message, messageIfTextFail);
		}
		return variable;
	}

	template <typename T>
	T Zero(const string& message = "Please enter zero: ", const string& messageIfNumberFail = "Input Failed, Please enter zero.", const string& messageIfTextFail = "Invalid input. Please enter a valid number.")
	{
		T variable;
		variable = Any<T>(message, messageIfTextFail);
		while (variable != 0)
		{
			cout << messageIfNumberFail << endl;
			variable = Any<T>(message, messageIfTextFail);
		}
		return variable;
	}

	template <typename T>
	T NegativeAndZero(const string& message = "Please enter a negative number or zero: ", const string& messageIfNumberFail = "Input Failed, Please enter a negative number or zero.", const string& messageIfTextFail = "Invalid input. Please enter a valid number.")
	{
		T variable;
		variable = Any<T>(message, messageIfTextFail);
		while (variable > 0)
		{
			cout << messageIfNumberFail << endl;
			variable = Any<T>(message, messageIfTextFail);
		}
		return variable;
	}

	template <typename T>
	T Negative(const string& message = "Please enter a negative number: ", const string& messageIfNumberFail = "Input Failed, Please enter a negative number: ", const string& messageIfTextFail = "Invalid input. Please enter a valid number: ")
	{
		T variable;
		variable = Any<T>(message, messageIfTextFail);
		while (variable >= 0)
		{
			cout << messageIfNumberFail << endl;
			variable = Any<T>(message, messageIfTextFail);
		}
		return variable;
	}

	char ValidateChar(string message, string messageIfFail);
}