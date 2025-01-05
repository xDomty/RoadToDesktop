#pragma once

#include <iostream>
#include <string>
using namespace std;

namespace space_L50_Lessons
{
	namespace space_L50_LE1
	{
		void L50_LE1_main()
		{
			string S1 = "Adam Ahmed";

			// Original Text
			cout << "Original Text : ";
			cout << S1 << endl << endl;

			// (at method) Returns the char at position
			cout << "(at method) Returns the char at position\n";
			cout << S1.at(3) << endl;
			cout << endl;

			// (length method) Returns The Length Of String
			cout << "(length method) Returns The Length Of String\n";
			cout << S1.length() << endl;
			cout << endl;

			// (append method) add text to the string
			cout << "(append method) add text to the string \n";
			S1.append(" Adam Ahmed");
			cout << S1 << endl;
			cout << endl;

			// (insert method) inserts text in specific position
			cout << "(insert method) inserts text in specific position\n";
			S1.insert(5, "Ahmed ");
			cout << S1 << endl;
			cout << endl;

			// (substr method) print all the letters from (position, Number Of Chars To Print After)
			cout << "(substr method) print all the letters from position (A) to (B)\n";
			cout << S1.substr(5, 11);
			cout << endl << endl;

			//Finds Ali in the string
			cout << S1.find("Ahmed") << endl;
			//Finds ali in the string
			cout << S1.find("ali") << endl;
			if (S1.find("ali") == S1.npos)
			{
				cout << "ali is not found";
			}
			//clears all string letters.
			S1.clear();
			cout << S1 << endl;

		}

	}
}