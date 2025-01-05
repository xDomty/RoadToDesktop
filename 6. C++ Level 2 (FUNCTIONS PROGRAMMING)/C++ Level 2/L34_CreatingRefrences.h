#pragma once

#include <iostream>
using namespace std;

namespace space_L34_Lessons
{
	namespace space_L34_LE1
	{
		void L34_LE1_main()
		{
			int a = 10;
			int& x = a;
			a++;
			cout << x;
			cout << endl;
			cout << a;
		}
	}

};