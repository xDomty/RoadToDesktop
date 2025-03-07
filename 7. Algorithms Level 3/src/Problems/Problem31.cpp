#include "../../include/Problems/Problem31.hpp"
#include "../../include/HeadersBeforeCourse/Validate.hpp"
#include <string>

namespace Problem31 {
	namespace MrSolution {
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

	namespace MySolution {
		void main() {
			using namespace OPERATIONS::StringsAndChars; using namespace Validate;

			string str; char UserChar;
			cout << "enter your text ? ";
			cin.ignore(1, '\n'); getline(cin, str);

			UserChar = ValidateChar("enter the letter you want to check? ", "Allowed only to enter chars :) : ");

			cout << "The Char " << UserChar << " Found " << CountChar<short>(str, UserChar) << " times.\n";
			cout << "The Chars ( " << UserChar << " / " << InvertCharacterCase(UserChar) << " ) Found " << CountCharUpperAndLower<short>(str, UserChar) << " times.";
		}
	}
}