#include "../../include/Problems/Problem44.hpp"
#include <string>

namespace Problem44 {

    string RemovePunct(string text)
    {
    	string noPunct = "";
    	for (char c : text) if (!ispunct(c)) noPunct += c;
    	return noPunct;
    }
    
    void main()
    {
    	string text;
    	cout << "Please Enter Your String:\n";
    	getline(cin, text);
    	cout << "\nPunctuations Removed:\n";
    	cout << RemovePunct(text);
    }

}