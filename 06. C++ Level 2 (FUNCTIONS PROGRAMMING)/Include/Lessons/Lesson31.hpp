#pragma once
#include <vector>
#include <iostream>
using namespace std;

namespace Lesson31 {
	struct stEmployees;

	int ReadNumberWithValidation(string, string);

	int ReadPositiveNumberWithValidation(string, string, string);

	void ReadEmployeesDev(vector <stEmployees>&, int);

	void ReadEmployeesUser(vector <stEmployees>&, int&);

	void PrintEmployees(vector <stEmployees>);

	void main();
}
