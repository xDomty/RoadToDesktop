#pragma once

#include <iostream>
using namespace std;

namespace space_L20_Lessons
{
	namespace space_L20_LE1 // Learning Static
	{
		void L20_LE1_PrintStaticVariable()
		{
			static int c = 1;
			cout << "The value of c is : " << c << endl;
			c++;
		}

		void L20_LE1_main()
		{
			L20_LE1_PrintStaticVariable();
			L20_LE1_PrintStaticVariable();
			L20_LE1_PrintStaticVariable();
		}
	}
}