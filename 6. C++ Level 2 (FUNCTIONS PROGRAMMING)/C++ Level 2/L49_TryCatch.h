#pragma once

#include <iostream>
#include <vector>
using namespace std;

namespace space_L49_Lessons
{
	namespace space_L49_LE1
	{
		void L49_LE1_main()
		{
			vector <int> num{ 1,2,3,4,5 };

			// do not use try catch except in the situations that force you to do that

			try
			{
				cout << num.at(5);
			}
			catch (...)
			{
				cout << "ERROR";
			}
		}

	}
}