#include "../../include/Problems/Problem34.hpp"
#include <string>

namespace Problem34 {
	bool IsVowel(char c)
	{
		char vowels[] = { 'a', 'e', 'i', 'o', 'u' };
		for (char vowel : vowels)
			if (tolower(c) == vowel) return true;
		return false;
	}

	void PrintVowels(string text)
	{
		for (char c : text)
			if (IsVowel(c)) cout << c << "   ";
	}

	void main()
	{
		string text;
		cout << "Please enter a string:\n";
		getline(cin, text);
		cout << "\nVowels in string: ";
		PrintVowels(text);
		cout << endl;
	}
}