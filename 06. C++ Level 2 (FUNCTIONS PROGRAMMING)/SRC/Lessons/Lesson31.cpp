#include "../../Include/Lessons/Lesson31.hpp"
#include <iostream>
#include <vector>
using namespace std;

namespace Lesson31 {
	struct stEmployees
	{
		string FirstName;
		string LastName;
		int Salary;
	};

	int ReadNumberWithValidation(string message = "", string MessageIfFail = "")
	{
		int number = 0;
	StartCheckPointIfFail:  cout << message;
		cin >> number;
		while (cin.fail())
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << MessageIfFail;
			system("pause");
			cout << endl;
			goto StartCheckPointIfFail;
		}

		return number;
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

	void ReadEmployeesDev(vector <stEmployees>& vPersonEmployee, int HowManyEmployees)
	{
		stEmployees TempEmployee;
		int counter = 0;

		for (counter; counter < HowManyEmployees; counter++)
		{
			cout << "Please enter The Info Of Employee [" << counter + 1 << ']' << '\n';

			cout << "First Name : "; cin >> TempEmployee.FirstName; cin.clear(); cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Last Name : ";  cin >> TempEmployee.LastName;
			cout << "Salary : "; TempEmployee.Salary = ReadPositiveNumberWithValidation("", "HEY ! YOU MUST ENTER A POSITIVE NUMBER : ", "HEY ! YOU MUST ENTER A NUMBER NOT A TEXT : ");
			cout << endl;
			vPersonEmployee.push_back(TempEmployee);

		}
	};

	void ReadEmployeesUser(vector <stEmployees>& vPersonEmployee, int& HowManyEmployees)
	{
		HowManyEmployees = ReadPositiveNumberWithValidation("How Many Eployees Do You Want? ", "HEY ! YOU MUST ENTER A POSITIVE NUMBER : ", "HEY ! YOU MUST ENTER A NUMBER NOT A TEXT : ");
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

    void main() {
		cout << "Lesson 31 : Remove Elements From Vector...\n";
		vector <stEmployees> vEmployees;
		int HowManyEmployees = 0;
		ReadEmployeesUser(vEmployees, HowManyEmployees);
		cout << "__________________________\n\n";
		cout << "The Employee Before POP:\n\n";
		PrintEmployees(vEmployees);
		cout << "The size of employee right now is " << vEmployees.size();
		cout << endl << endl;
		cout << "The Employee After POP:\n";
		vEmployees.clear();
		cout << "The size of employee right now is " << vEmployees.size();

		// WE ALSO TOOK VECTOR.EMPTY()
    };
}
