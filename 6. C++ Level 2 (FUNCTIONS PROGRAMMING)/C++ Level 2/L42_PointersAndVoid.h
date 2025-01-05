#pragma once

#include <iostream>
using namespace std;

namespace space_L42_Lessons
{
	namespace space_L42_LE1
	{
		void L42_LE1_main()
		{
			void* ptr;

			// Varible of ptr to int a

			int a = 10;
			ptr = &a;
			
			// the address of a

			cout << "the address of a\n";
			cout << ptr;
			cout << endl;

			// The value of a

			cout << "The value of a\n";
			cout << *(static_cast<int*>(ptr));

			cout << endl << endl;
			// Varible of ptr to float b

			float b = 10;
			ptr = &b;

			// the address of b

			cout << "the address of b\n";
			cout << ptr;
			cout << endl;

			// The value of a

			cout << "The value of b\n";
			cout << *(static_cast<float*>(ptr));

		}
	}
}