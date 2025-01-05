#pragma once

#include <iostream>
#include <cctype>
using namespace std;

namespace space_L51_Lessons
{
	namespace space_L51_LE1
	{
		void L51_LE1_main()
		{
			char x;
			char w;

			x = toupper('a');
			w = tolower('A');
			cout << endl;
			cout << "(a) to (A) : "<< x << endl 
				 << "(A) to (a) : "<< w << endl;
			cout << endl;
			cout << "(A) is upper : " << isupper(x) << endl
				 << "(a) is upper : " << isupper(w) << endl;
			cout << endl;
			cout << "(A) is lower : " << islower(x) << endl
				 << "(a) is lower : " << islower(w) << endl;

			cout << "isdigit('1') : " << isdigit('1') << endl;
			cout << "ispunct(';') : " << ispunct(';');
		}

	}
}