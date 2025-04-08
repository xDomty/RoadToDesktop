#include "../../include/Problems/Problem36.hpp"
#include <string>

namespace Problem36 {

    short CountWords(string S1)
    {
    	string delim = " "; // delimiter
    	short Counter = 0;
    	short pos = 0;
    	string sWord; // define a string variable
    	// use find() function to get the position of the delimiters
    	while ((pos = S1.find(delim)) != std::string::npos)
    	{
    		sWord = S1.substr(0, pos); // store the word
    		if (sWord != "")
    		{
    			Counter++;
    		}
    		//erase() until positon and move to next word.
    		S1.erase(0, pos + delim.length());
    	}
    	if (S1 != "")
    	{
    		Counter++; // it counts the last word of the string.
    	}
    	return Counter;
    }

	void main()
	{
		string text;
		cout << "Please enter a string:\n";
		getline(cin, text);
		cout << "\nWords count in string is: " << CountWords(text) << endl;
	}
}