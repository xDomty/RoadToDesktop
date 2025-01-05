#pragma once

#include <vector>
#include "ImportantThings.h"
using namespace space_Read;
using namespace space_Employee;


namespace space_L30_Lessons
{
	namespace space_L30_LE1
	{

		void L30_LE1_main()
		{
			vector <stEmployees> vEmployees;
			ReadEmployeesDev(vEmployees, 1);
			PrintEmployees(vEmployees);
		}
	}
};

namespace space_L30_Homeworks
{
	namespace space_L30_HW1
	{
		void L30_HW1_main()
		{
			vector <stEmployees> vEmployees;
			int HowManyEmployees = 0;
			ReadEmployeesUser(vEmployees,HowManyEmployees);
			cout << "__________________________\n\n";
			PrintEmployees(vEmployees);
		}
	}
};

