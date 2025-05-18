#include "../../Include/Homeworks/Lesson30HW.hpp"
#include <limits>

namespace Lesson30HW {
    struct stEmployees {
        string FirstName;
        string LastName;
        int Salary;
    };

    int ReadNumberWithValidation(string message = "", string MessageIfFail = "") {
        int number = 0;

        while (true) {
            cout << message;
            cin >> number;

            if (cin.fail()) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << MessageIfFail << endl;
                system("pause");
                cout << endl;
                continue;
            }
            return number;
        }
    }

    int ReadPositiveNumberWithValidation(string message = "", string MessageIfNegativeOr0Fail = "", string MessageIfTextFail = "") {
        while (true) {
            int number = ReadNumberWithValidation(message, MessageIfTextFail);

            if (number > 0) {
                return number;
            }
            cout << MessageIfNegativeOr0Fail << endl;
        }
    }

    void ReadEmployeesDev(vector<stEmployees>& vPersonEmployee, int HowManyEmployees) {
        stEmployees TempEmployee;

        for (int counter = 0; counter < HowManyEmployees; counter++) {
            cout << "Please enter the info for Employee [" << counter + 1 << "]\n";

            cout << "First Name: ";
            cin >> TempEmployee.FirstName;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            cout << "Last Name: ";
            cin >> TempEmployee.LastName;

            TempEmployee.Salary = ReadPositiveNumberWithValidation("Salary: ",
                "HEY! YOU MUST ENTER A POSITIVE NUMBER: ",
                "HEY! YOU MUST ENTER A NUMBER, NOT TEXT: ");
            cout << endl;

            vPersonEmployee.push_back(TempEmployee);
        }
    }

    void ReadEmployeesUser(vector<stEmployees>& vPersonEmployee, int& HowManyEmployees) {
        HowManyEmployees = ReadPositiveNumberWithValidation(
            "How many employees do you want? ",
            "HEY! YOU MUST ENTER A POSITIVE NUMBER: ",
            "HEY! YOU MUST ENTER A NUMBER, NOT TEXT: ");
        cout << endl;

        ReadEmployeesDev(vPersonEmployee, HowManyEmployees);
    }

    void PrintEmployees(const vector<stEmployees>& vEmployees) {
        for (size_t i = 0; i < vEmployees.size(); i++) {
            cout << "Employee [" << i + 1 << "]\n";
            cout << "First Name: " << vEmployees[i].FirstName << '\n';
            cout << "Last Name: " << vEmployees[i].LastName << '\n';
            cout << "Salary: " << vEmployees[i].Salary << '\n';
            cout << "__________________________\n\n";
        }
    }

    void main() {
        cout << "Homework 1 of Lesson 30: Read Employees Then Print Employees\n";

        vector<stEmployees> vEmployees;
        int HowManyEmployees = 0;

        ReadEmployeesUser(vEmployees, HowManyEmployees);

        cout << "__________________________\n\n";
        PrintEmployees(vEmployees);
    }
}