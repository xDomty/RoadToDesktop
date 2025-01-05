#pragma once

#include <iostream>
using namespace std;

namespace space_L21_Lessons
{
	namespace space_L21_LE1
	{
		void L21_LE1_main()
		{
			auto x = 10; // INT (Although it should be short int)
			auto y = 10.5; // DOUBLE (Although it should be float)
			auto z = "Hello World\n"; // CONST CHAR 

			// DO NOT USE AUTO BCS IT'S NOT FOR PERFORMANCE !!!

			cout << x << endl;
			cout << y << endl;
			cout << z << endl;
		}
	}
}