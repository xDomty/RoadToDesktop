#include "../../include/Problems/Problem35.hpp"
#include <string>

namespace Problem35 {

	void PrintEachWordInString(string S1)
	{
		string sWord, delim = " "; // define a string variable & delimiter
		short pos = 0;
		while ((pos = S1.find(delim)) != std::string::npos)
		{
			sWord = S1.substr(0, pos); // store the word
			if (sWord != "") cout << sWord << endl;
			S1.erase(0, pos + delim.length()); // erase() until positon and move to next word.
		}
		if (S1 != "")
			cout << S1 << endl; // it print last word of the string.
	}

	void main()
	{
		string text;
		cout << "Please enter a string:\n";
		getline(cin, text);
		cout << "\nWords in string are:\n";
		PrintEachWordInString(text);
	}
}