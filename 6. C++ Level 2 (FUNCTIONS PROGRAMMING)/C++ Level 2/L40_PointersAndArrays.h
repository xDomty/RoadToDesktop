#pragma once

#include "ImportantThings.h";

namespace space_L40_Lessons
{
	namespace space_L40_LE1
	{
		void L40_LE1_main()
		{
			int arr[5] = { 1,2,3,4,5 };
			int *p = arr;

			cout << "Pointer adresses:\n";
			cout << p << endl;
			cout << p + 1 << endl;
			cout << p + 2 << endl;
			cout << p + 3 << endl;
			cout << p + 4 << endl;


			cout << endl;

			cout << "Pointer variables:\n";
			cout << *(p) << endl;
			cout << *(p + 1) << endl;
			cout << *(p + 2) << endl;
			cout << *(p + 3) << endl;
			cout << *(p + 4) << endl;


		}
	}
}