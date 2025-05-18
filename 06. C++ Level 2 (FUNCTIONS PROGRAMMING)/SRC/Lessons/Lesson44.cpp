#include "../../Include/Lessons/Lesson44.hpp"
#include <iostream>
using namespace std;

namespace Lesson44 {
	void ReadAPositiveNumberOfArrayWithVaildation(int*& arr, int ArrayLength, string message = "", string MessageIfTextFail = "", string MessageIfNegativeFail = "")
	{

		arr = new int[ArrayLength];
		for (int i = 0; i < ArrayLength; i++)
		{
		CheckPoint:
			cout << message << ' ' << i + 1 << " : "; cin >> *(arr + i);
			while (cin.fail())
			{
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				cout << MessageIfTextFail;
				goto CheckPoint;
			}

			if ((arr[i]) < 0)
			{
				cout << MessageIfNegativeFail;
				goto CheckPoint;
			}
		}
	}

	void PrintArrayNumbers(int* arr, int ArrayLength, int FormatOfArray = 1, string message = "", string messagePart2 = "", string TheMeterOfResult = "")
	{
		cout << "_________________________________\n\n";
		for (int i = 0; i < ArrayLength; i++)
		{
			cout << message << " [" << i + 1 << "] " << messagePart2 << " : ";
			printf("%0*d", FormatOfArray, arr[i]);
			cout << ' ' << TheMeterOfResult << endl;
		}
		cout << "_________________________________\n";
	}

    void main() {
		cout << "Lesson 44 : Dynamic Arrays...\n";
		int* StudentsDegrees;
		int TheNumberOfStudents = 5;

		ReadAPositiveNumberOfArrayWithVaildation
		(
			StudentsDegrees // The Pointer Array
			, TheNumberOfStudents // The Number Of Students
			, "Please enter degrees of student" // The Message To User
			, "The Student Degree cannot be text\n\n" // The Message to user if he enters degrees as a text
			, "The Student Degree cannot be negative\n\n" // The Message to user if he enters degrees as negative
		); //RETURN STUDENTS DEGREES BY REFERANCE

		cout << "\n\nOk, So the students degrees is:\n";

		PrintArrayNumbers
		(
			StudentsDegrees // The Pointer Array
			, TheNumberOfStudents // The Number Of Students
			, 2 // Formating For Degrees 
			, "Student" // Part 1 Of Message before the counter
			, "Degrees" // Part 2 Of Message After The Counter
			, "Degrees" // The Unit of measurement
		);

		delete[] StudentsDegrees;
    };
}
