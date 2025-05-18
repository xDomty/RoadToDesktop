#include "../../include/Problems/Problem32.hpp"

namespace Problem32 {
	bool IsVowel(char c)
	{
		char vowels[] = { 'a', 'e', 'i', 'o', 'u' };
		for (char vowel : vowels)
			if (tolower(c) == vowel) return true;
		return false;
	}

	void main()
	{
		char c;
		cout << "Please enter a character: ";
		cin >> c;

		if (IsVowel(c))
			cout << "\nYES: Letter '" << c << "' is vowel\n";
		else
			cout << "\nNO: Letter '" << c << "' is NOT vowel\n";
	}
}