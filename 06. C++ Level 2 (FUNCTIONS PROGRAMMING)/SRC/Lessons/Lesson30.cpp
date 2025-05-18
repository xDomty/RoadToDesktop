#include "../../Include/Lessons/Lesson30.hpp"

namespace Lesson30 {
    
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
		cout << "Lesson 30 : Vector Of Structure...\n";
        vector <stEmployees> vEmployees;
        ReadEmployeesDev(vEmployees, 1);
        PrintEmployees(vEmployees);
    };
}
