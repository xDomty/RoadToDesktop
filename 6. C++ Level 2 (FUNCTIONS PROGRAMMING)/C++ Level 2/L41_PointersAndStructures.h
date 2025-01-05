#pragma once

#include "ImportantThings.h";
using namespace space_Employee;

namespace space_L41_Lessons
{
	namespace space_L41_LE1
	{
		void L41_LE1_main()
		{
			stEmployees Employees;
			Employees.FirstName = "Adam ";
			Employees.LastName = "Ahmed";
			Employees.Salary = 200;

			stEmployees* p = &Employees;

			cout << "The Adress of employee:\n";
			cout << p << endl;

			cout << endl;

			cout << "Value of employee:\n";
			cout << "First Name: " << p->FirstName << endl;
			cout << "Last Name: " << p->LastName << endl;
			cout << "Salary: " << p->Salary << endl;

		}
	}
}