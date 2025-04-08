#include "../../include/Problems/Problem37.hpp"
#include <string>

namespace Problem37 {
	vector<string> SplitString(string text, string delim)
	{
		string sWord; // define a string variable & delimiter
		vector<string> tokens;
		short pos = 0;

		while ((pos = text.find(delim)) != std::string::npos)
		{
			sWord = text.substr(0, pos); // store the word
			if (sWord != "") tokens.push_back(sWord);
			text.erase(0, pos + delim.length()); // erase() until positon and move to next word.
		}
		if (text != "") tokens.push_back(text); // include last word of the string.
		return tokens;
	}

	void main()
	{
		string text;
		vector<string> tokens;

		cout << "Please enter a string:\n";
		getline(cin, text);

		tokens = SplitString(text, " ");
		cout << "\nTokens = " << tokens.size() << endl;

		for (string& token : tokens)
			cout << token << endl;
	}
}