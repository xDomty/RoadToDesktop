#include "../../include/Problems/Problem46.hpp"
#include <string>

namespace Problem46 {

    struct strClient
    {
    	string AccountNumber;
    	string PinCode;
    	string Name;
    	string Phone;
    	double AccountBalance;
    };
    
    vector <string> SplitString(string text, string delim)
    {
    	string sWord; // define a string variable & delimiter
    	vector <string> words;
    	short pos;
    
    	while ((pos = text.find(delim)) != std::string::npos)
    	{
    		sWord = text.substr(0, pos); // store the word
    		if (sWord != "") words.push_back(sWord);
    		text.erase(0, pos + delim.length()); // erase() until positon and move to next word.
    	}
    	if (text != "") words.push_back(text); // include last word of the string.
    	return words;
    }
    
    strClient ConvertLinetoRecord(string line, string delim = "#//#")
    {
    	vector< string> vClientData = SplitString(line, delim);
    	strClient client;
    	client.AccountNumber = vClientData[0];
    	client.PinCode = vClientData[1];
    	client.Name = vClientData[2];
    	client.Phone = vClientData[3];
    	client.AccountBalance = stod(vClientData[4]); //Cast string to double
    	return client;
    }
    
    void PrintClientRecord(strClient client)
    {
    	cout << "\n\nThe following is the extracted client record:";
    	cout << "\nAccout Number  : " << client.AccountNumber;
    	cout << "\nPin Code       : " << client.PinCode;
    	cout << "\nName           : " << client.Name;
    	cout << "\nPhone          : " << client.Phone;
    	cout << "\nAccount Balance: " << client.AccountBalance;
    }
    
    void main()
    {
    	string line = "A150#//#1234#//#Mohammed Abu-Hadhoud#//#079999#//#5270.000000";
    	strClient client = ConvertLinetoRecord(line);
    	cout << "Line record is:\n" << line;
    	PrintClientRecord(client);
    	cout << endl;
    }
}