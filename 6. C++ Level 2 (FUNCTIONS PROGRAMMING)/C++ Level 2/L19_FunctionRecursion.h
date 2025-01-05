#pragma once

#include <iostream>
using namespace std;


/*

Function recursion is not prefered because it has limits...
if it succeed it's limit so the program will be broken and get stack overflow.

*/


namespace space_L19_Lessons
{
	void L19_PrintNumbersFromToN_UsingRecursion(int from, int to) // if (to) became huge number like 10000 the program will crash and get stack overflow
	{
		if (from <= to)
		{
			cout << from << endl;
			L19_PrintNumbersFromToN_UsingRecursion(from + 1, to);
		}
	}

	void L19_L1_main()
	{
		L19_PrintNumbersFromToN_UsingRecursion(1,10); 
	}
}

namespace space_L19_Homeworks 
{

	namespace space_L19_hw1  // Program To Print Numbers (to) to (from) "PRINT NUMBERS REVERSED" ((USING RECURSION))
	{
          void l19_hw1_PrintNumbersNToFrom_UsingRecursion(int from, int to) 
	        {
	        	if (to <= from)
	        	{
	        		cout << from << endl;
	        		l19_hw1_PrintNumbersNToFrom_UsingRecursion(from - 1, to);
	        	}
	        }

	        void l19_hw1_main()
	        {
	        	l19_hw1_PrintNumbersNToFrom_UsingRecursion(100, 1);
	        }
	}

	namespace space_L19_hw2 // The Power Using Recursion
	{
		int l19_hw2_ThePowerUsingRecursion(int base, int power)
		{
			if (power == 0)
				return 1;
			else
				return (base * l19_hw2_ThePowerUsingRecursion(base, power - 1));
		}

		void l19_hw2_main()
		{
			cout << l19_hw2_ThePowerUsingRecursion(2, 4);
		}
	}
	
}