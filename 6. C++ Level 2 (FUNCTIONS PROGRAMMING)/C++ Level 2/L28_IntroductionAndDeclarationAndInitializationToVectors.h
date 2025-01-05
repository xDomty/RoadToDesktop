#pragma once

#include <iostream>
#include <vector>
using namespace std;

namespace space_L28_Lessons
{
	namespace space_L28_LE1
	{
		void L28_LE1_main()
		{
			vector <int> vNum = { 5,10,15,20,25,30 };

			cout << "number vectors : ";

			for (int x : vNum)
			{
				cout << x << "  ";
			}

			cout << endl;
		}
	}
};

