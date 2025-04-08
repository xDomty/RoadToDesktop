#include "../../include/Problems/Problem33.hpp"
#include <string>

namespace Problem33 {
	bool IsVowel(char c)
	{
		char vowels[] = { 'a', 'e', 'i', 'o', 'u' };
		for (char vowel : vowels)
			if (tolower(c) == vowel) return true;
		return false;
	}

	short CountVowels(string text)
	{
		short count = 0;
		for (char c : text)
			if (IsVowel(c)) count++;
		return count;
	}

	void main()
	{
		string text;
		cout << "Please enter a string:\n";
		getline(cin, text);
		cout << "\nVowels count is: " << CountVowels(text) << endl;
	}
}