#pragma once
#include "Read.hpp"
using namespace std;

namespace Employee
{
    using namespace Read;

    struct stEmployees
    {
        string FirstName;
        string LastName;
        int Salary;
    };

    void ReadEmployeesDev(vector<stEmployees>& vPersonEmployee, int HowManyEmployees);

    void ReadEmployeesUser(vector<stEmployees>& vPersonEmployee, int& HowManyEmployees);

    void PrintEmployees(vector<stEmployees> vPersonEmployee);
}
