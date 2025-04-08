#include "../../include/Problems/Problem31.hpp"
#include <string>

namespace Problem31 {

		string ReadString()
		{
			string S1;
			cout << "\nPlease Enter Your String?\n";
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
		char InvertLetterCase(char char1)
		{
			return isupper(char1) ? tolower(char1) : toupper(char1);
		}
		short CountLetter(string S1, char Letter, bool MatchCase = true)
		{
			short Counter = 0;
			for (short i = 0; i < S1.length(); i++)
			{
				if (MatchCase)
				{
					if (S1[i] == Letter)
						Counter++;
				}
				else
				{
					if (tolower(S1[i]) == tolower(Letter))
						Counter++;
				}
			}
			return Counter;
		}
		void main()
		{
			string S1 = ReadString();
			char Ch1  = ReadChar();
			cout << "The Character " << Ch1 << " Found "            << CountLetter(S1, Ch1)        << " Times.\n";
			cout << "The Character " << Ch1 << " Found "            << CountLetter(S1, Ch1, false) << " Times.\n";
			cout << "The Character " << Ch1 << " Inverted Case is " << InvertLetterCase(Ch1)       << ".\n";
		}

}