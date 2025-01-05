#pragma once

#include <iostream>
using namespace std;

namespace space_L36_Lessons
{
	namespace space_L36_LE1
	{
		void L36_LE1_main()
		{
			int a = 10;
			int* x = &a;
			cout << &a << endl;
			cout << x;

			cout << endl << endl;

			*x = 40;

			cout << *x << endl;
			cout << a << endl;
		}
	}

};