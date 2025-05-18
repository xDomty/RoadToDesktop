#pragma once
#include <iostream>
#include <vector>
using namespace std;

namespace Lesson30HW {

	struct stEmployees;

	int ReadNumberWithValidation(string message, string MessageIfFail);

	int ReadPositiveNumberWithValidation(string message, string MessageIfNegativeOr0Fail, string MessageIfTextFail);

	void ReadEmployeesDev(vector <stEmployees>& vPersonEmployee, int HowManyEmployees);

	void ReadEmployeesUser(vector <stEmployees>& vPersonEmployee, int& HowManyEmployees);

	void main();

}
