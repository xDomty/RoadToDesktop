#include "../../include/Problems/Problem27.hpp"

namespace Problem27 {
	namespace MrSolution {
		char ReadChar()
		{
			char Ch1;
			cout << "Please Enter a Character?\n";
			cin >> Ch1;
			return Ch1;
		}
		char InvertLetterCase(char char1)
		{
			return isupper(char1) ? tolower(char1) : toupper(char1);
		}
		void main()
		{
			char Ch1 = ReadChar();
			cout << "\nChar after inverting case:\n";
			Ch1 = InvertLetterCase(Ch1);
			cout << Ch1 << endl;
		}
	}

	namespace MySolution {
		void main() {
			char CharEntered = Validate::ValidateChar("Please enter your char? ", "Please enter a char not text :) : ");

			char CharResult = OPERATIONS::StringsAndChars::InvertCharacterCase(CharEntered);

			cout << "The result of your character is : " << CharResult;
		}
	}
}