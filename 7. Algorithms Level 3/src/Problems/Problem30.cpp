#include "../../include/Problems/Problem30.hpp"
#include "../../include/HeadersBeforeCourse/Validate.hpp"
#include <string>

namespace Problem30 {
	namespace MrSolution {
		string ReadString()
		{
			string S1;
			cout << "\nPlease Enter Your String?\n";
			cin.ignore(1, '\n');
			getline(cin, S1);
			return S1;
		}
		char ReadChar()
		{
			char Ch1;
			cout << "\nPlease Enter a Character?\n";
			cin >> Ch1;
			return Ch1;
		}
		short CountLetter(string S1, char Letter)
		{
			short Counter = 0;
			for (short i = 0; i < S1.length(); i++)
			{
				if (S1[i] == Letter)
					Counter++;
			}
			return Counter;
		}
		void main()
		{
			string S1 = ReadString();
			char Ch1 = ReadChar();
			cout << "\nLetter \'" << Ch1 << "\' Count = " <<
				CountLetter(S1, Ch1);
			system("pause>0");

		}
	}

	namespace MySolution {
		void main() {
			string str; char UserChar;
			cout << "enter your text ? ";
			cin.ignore(1, '\n'); getline(cin, str);

			UserChar = Validate::ValidateChar("enter the letter you want to check? ", "Allowed only to enter chars :) : ");

			cout << "The Char " << UserChar << " Found " << OPERATIONS::StringsAndChars::CountChar<short>(str, UserChar) << " times.";
		}
	}
}