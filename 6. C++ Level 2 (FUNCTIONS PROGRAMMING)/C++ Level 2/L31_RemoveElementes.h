#pragma once

#include <vector>
#include "ImportantThings.h"
using namespace space_Read;
using namespace space_Employee;


namespace space_L31_Lessons
{
	namespace space_L31_LE1
	{
		void L31_LE1_main()
		{
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
		}
	}

};