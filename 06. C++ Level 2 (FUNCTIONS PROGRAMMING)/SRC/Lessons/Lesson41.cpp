#include "../../Include/Lessons/Lesson41.hpp"
#include <iostream>
using namespace std;

namespace Lesson41 {
	struct stEmployees
	{
		string FirstName;
		string LastName;
		int Salary;
	};

    void main() {
		cout << "Lesson 41 : Pointer To Structure...\n";
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

    };
}
