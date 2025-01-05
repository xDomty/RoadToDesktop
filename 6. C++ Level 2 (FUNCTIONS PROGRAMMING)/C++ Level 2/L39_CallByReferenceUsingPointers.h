#pragma once

#include "ImportantThings.h";
using namespace space_swap;
namespace space_L39_Lessons
{
	namespace space_L39_LE1
	{
		void L39_LE1_main()
		{
			int a = 10, b = 20;
			
			cout << "Before swapping:\n";
			cout << "a = " << a; cout << endl;;
			cout << "b = " << b; cout << endl;;

			cout << endl << endl;

			swap(&a, &b);

			cout << "After swapping:\n";
			cout << "a = " << a; cout << endl;;
			cout << "b = " << b; cout << endl;;


		}
	}
}