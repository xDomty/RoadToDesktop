﻿#pragma once

#include <iostream>
#include <iomanip> 

using namespace std;

namespace space_L26_Lessons
{
	namespace space_L26_LE1
	{
		void L26_LE1_main()
		{
			cout << '|' << "------------" << '|' << "-------------------------------" << '|' << "------------" << '|' << endl;
			cout << '|' << "    CODE    " << '|' << "          COURSE INFO          " << '|' << "    MARK    " << '|' << endl;
			cout << '|' << "------------" << '|' << "-------------------------------" << '|' << "------------" << '|' << endl;

			// THE CODE OF COURSES WILL BE WITH LIMIT OF 12 CHAR
			// THE INFO OF COURSE WILL BE WITH LIMIT OF 31 CHAR
			// The Mark Of course will be 12 chars

			cout << '|' << setw(12) << "C200" << '|' << setw(31) << "Introduction To Computer" << '|' << setw(12) << "90/100" << '|' << '\n';
			cout << '|' << setw(12) << "C101" << '|' << setw(31) << "Algorithms" << '|' << setw(12) << "70/100" << '|' << '\n';
			cout << '|' << setw(12) << "C9999" << '|' << setw(31) << "C++" << '|' << setw(12) << "75/100" << '|' << '\n';
			cout << '|' << "------------" << '|' << "-------------------------------" << '|' << "------------" << '|' << endl;
		}
	}
}

// لا تيأس

