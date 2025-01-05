#pragma once

#include <iostream>
#include <vector>
using namespace std;

namespace space_L47_Lessons
{
	namespace space_L47_LE1
	{
		void L47_LE1_main()
		{
			vector <int> num{ 1,2,3,4,5 };
			cout << "Initial elements : ";

			for (const int& N : num) 
			{
				printf("%0*d ", 2, N);

			}

			cout << '\n' << '\n';

			cout << "Updated Vector : ";
			for (int& N : num)
			{
				N = 20;
				cout << N << ' ';
			}

			cout << endl << endl;
			
			num.at(0) = 20;
			num.at(1) = 80;
			num[2] = 5;
			num[3] = 50;
			num[4] = 6;

			cout << "Updated Vector : ";
			for (const int& N : num)
			{
				printf("%0*d ", 2, N);
			}

			cout << endl;
		}

	}
}