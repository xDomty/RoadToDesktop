#pragma once

#include "ImportantThings.h"
using namespace space_Read;
using namespace space_Print;

namespace space_L44_Lessons
{
	namespace space_L44_LE1
	{
		void L44_LE1_main()
		{
			int* StudentsDegrees; 
			int TheNumberOfStudents = 5;

			ReadAPositiveNumberOfArrayWithVaildation
			(
			StudentsDegrees // The Pointer Array
			,TheNumberOfStudents // The Number Of Students
			,"Please enter degrees of student" // The Message To User
			,"The Student Degree cannot be text\n\n" // The Message to user if he enters degrees as a text
			,"The Student Degree cannot be negative\n\n" // The Message to user if he enters degrees as negative
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
		}
	}
}