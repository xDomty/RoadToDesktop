#include "../../include/Problems/Problem42.hpp"
#include <string>

namespace Problem42 {
	vector<string> SplitString(string text, string delim = " ")
	{
		string sWord; // define a string variable & delimiter
		vector<string> tokens;
		short pos;

		while ((pos = text.find(delim)) != std::string::npos)
		{
			sWord = text.substr(0, pos); // store the word
			if (sWord != "") tokens.push_back(sWord);
			text.erase(0, pos + delim.length()); // erase() until positon and move to next word.
		}
		if (text != "") tokens.push_back(text); // include last word of the string.
		return tokens;
	}

	string ReplaceStringWords(string text, string oldWord, string newWord)
	{
		vector<string> words = SplitString(text);
		vector<string>::iterator iter;
		text.clear();
		for (string& word : words)
			text += (word == oldWord ? newWord : word) + " ";
		return text.substr(0, text.length() - 1); //remove last space.
	}
	string ReplaceWordInStringUsingBuiltInFunction(string S1, string StringToReplace, string sRepalceTo)
	{
		short pos = S1.find(StringToReplace);
		while (pos != std::string::npos)
		{
			S1 = S1.replace(pos, StringToReplace.length(),
				sRepalceTo);
			pos = S1.find(StringToReplace);//find next
		}
		return S1;
	}

	void main() {
		string text, oldWord, newWord;
		cout << "Please Enter Your String:\n";
		getline(cin, text);
		cout << "\nWord To Replace: ";
		cin >> oldWord;
		cout << "Replace To     : ";
		cin >> newWord;
		text = ReplaceStringWords(text, oldWord, newWord);
		cout << "\nString After Replace:\n" << text << endl;
	}
}