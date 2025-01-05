#pragma once

// WE LEARNED SOME COMMON MISTAKES

#pragma once

#include <iostream>
using namespace std;

namespace space_L37_Lessons
{
	namespace space_L37_LE1
	{
		void L37_LE1_main()
		{
			int x, * p;


			// Wrong!
			// p is an address but x is not
			
			// p = x;
			

			// Correct!
			// p is an address and so is &x

			p = &x;


			// Wrong!
			// &x is an address
			// *p is the value stored in &x

			//*p = &x;




			// Correct!
			// *p is the value and so x
			*p = x;
		}
	}

};