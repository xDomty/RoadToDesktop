#pragma once
#include "../../include/HeadersBeforeCourse/Employee.hpp"

namespace Employee   // Want to upgrade
{
	using namespace Read;

	void ReadEmployeesDev(vector <stEmployees>& vPersonEmployee, int HowManyEmployees)
	{
		stEmployees TempEmployee;
		int counter = 0;

		for (counter; counter < HowManyEmployees; counter++)
		{
			cout << "Please enter The Info Of Employee [" << counter + 1 << ']' << '\n';

			cout << "First Name : "; cin >> TempEmployee.FirstName; cin.clear(); cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Last Name : ";  cin >> TempEmployee.LastName;
			cout << "Salary : "; TempEmployee.Salary = ReadPositiveNumberWithValidation<int>("", "HEY ! YOU MUST ENTER A POSITIVE NUMBER : ", "HEY ! YOU MUST ENTER A NUMBER NOT A TEXT : ");
			cout << endl;
			vPersonEmployee.push_back(TempEmployee);

		}


	};

	void ReadEmployeesUser(vector <stEmployees>& vPersonEmployee, int& HowManyEmployees)
	{
		HowManyEmployees = ReadPositiveNumberWithValidation<int>("How Many Eployees Do You Want? ", "HEY ! YOU MUST ENTER A POSITIVE NUMBER : ", "HEY ! YOU MUST ENTER A NUMBER NOT A TEXT : ");
		cout << endl;
		ReadEmployeesDev(vPersonEmployee, HowManyEmployees);
	};

	void PrintEmployees(vector <stEmployees> vPersonEmployee)
	{
		int counter = 0;
		for (stEmployees Employees : vPersonEmployee)
		{
			counter++;
			cout << "The Info Of Person [" << counter << "]\n";
			cout << "First Name : " << Employees.FirstName << '\n';
			cout << "Last Name : " << Employees.LastName << '\n';
			cout << "Salary : " << Employees.Salary << '\n';
			cout << endl;
		}
	};


}  //I want to upgrade it later
