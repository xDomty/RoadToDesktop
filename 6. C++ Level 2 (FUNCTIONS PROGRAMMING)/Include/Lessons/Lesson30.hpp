#pragma once
#include <iostream>
#include <vector>
using namespace std;

namespace Lesson30 {
	struct stEmployees;

	int ReadNumberWithValidation(string, string);

	int ReadPositiveNumberWithValidation(string, string, string);

	void ReadEmployeesDev(vector <stEmployees>&, int);

	void PrintEmployees(vector <stEmployees>);

    void main();
}
