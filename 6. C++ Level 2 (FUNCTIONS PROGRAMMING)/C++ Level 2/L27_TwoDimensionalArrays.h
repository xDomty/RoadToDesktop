#pragma once

#include <iostream>
#include <cstdio>
using namespace std;

namespace space_L27_Lessons
{
	namespace space_L27_LE1
	{
		void L27_LE1_main()
		{
			// int var[ROWS][COLS]

			int var[4][3] = {
							{1,2,3},
							{6,5,0},
							{4,3,2},
							{9,4,3}
			};

			for (int rows = 0; rows < 4; rows++)
			{
				for (int cols = 0; cols < 3; cols++)
				{
					cout << var[rows][cols] << " ";
				}
				cout << endl;
			}

		}
	}
};

namespace space_L27_Homeworks
{
	namespace space_L27_HW1
	{
		void L27HW_AllocateDimensionalArray10X10(int Multi[10][10])
		{
			for (int rows = 0; rows < 10; rows++)
			{
				for (int cols = 0; cols < 10; cols++)
				{
					Multi[rows][cols] = (rows+1) * (cols+1);
				}
			}
		}

		void L27HW_PrintDimensionalArray(int Multi[10][10])
		{
			for (int rows = 0; rows < 10; rows++)
			{
				for (int cols = 0; cols < 10; cols++)
				{
					printf("%0*d ", 2,Multi[rows][cols]);
				}
				cout << endl;
			}

		}

		void L27_HW1_main()
		{
			int multi[10][10];
			L27HW_AllocateDimensionalArray10X10(multi);
			L27HW_PrintDimensionalArray(multi);
		}
	}
};
