#pragma once

#include <iostream>
#include <vector>
using namespace std;

namespace space_L48_Lessons
{
	namespace space_L48_LE1
	{
		void L48_LE1_main()
		{
			vector <int> num{ 1,2,3,4,5 };

			vector<int>::iterator iter;

			for (iter = num.begin(); iter != num.end(); iter++)
			{
				cout << *iter << ' ';
			}
		}

	}
}