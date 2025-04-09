#include "../../include/Problems/Problem49.hpp"
#include <fstream>
#include <string>

namespace Problem49 {
    const string ClientsFileName = "Clients.txt";
    
    struct strClient
    {
    	string AccountNumber;
    	string PinCode;
    	string Name;
    	string Phone;
    	double AccountBalance;
    };
    
    vector<string> SplitString(string text, string delim)
    {
    	string sWord; // define a string variable & delimiter
    	vector<string> words;
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
    	vector<string> vClientData = SplitString(line, delim);
    	strClient client;
    	client.AccountNumber = vClientData[0];
    	client.PinCode = vClientData[1];
    	client.Name = vClientData[2];
    	client.Phone = vClientData[3];
    	client.AccountBalance = stod(vClientData[4]); //Cast string to double
    	return client;
    }
    
    vector<strClient> LoadClientsDataFromFile(string fileName)
    {
    	vector <strClient> vClients;
    	fstream file;
    	file.open(fileName, ios::in);
    
    	if (file.is_open())
    	{
    		strClient client;
    		string line;
    		while (getline(file, line))
    		{
    			client = ConvertLinetoRecord(line);
    			vClients.push_back(client);
    		}
    		file.close();
    	}
    
    	return vClients;
    }
    
    bool FindClientByAccNum(vector<strClient>& vClients, strClient& saveTo, string accNum)
    {
    	for (strClient& client : vClients)
    		if (client.AccountNumber == accNum)
    		{
    			saveTo = client;
    			return true;
    		}
    	return false;
    }
    
    void PrintClientRecord(strClient& client)
    {
    	cout << "\nThe Following Are The Client Details:\n";
    	cout << "\nAccout Number  : " << client.AccountNumber;
    	cout << "\nPin Code       : " << client.PinCode;
    	cout << "\nName           : " << client.Name;
    	cout << "\nPhone          : " << client.Phone;
    	cout << "\nAccount Balance: " << client.AccountBalance;
    }
    
    void main()
    {
    	vector <strClient> vClients = LoadClientsDataFromFile(ClientsFileName);
    	strClient client;
    	string accNum;
    
    	cout << "Please Enter Account Number: ";
    	cin >> accNum;
    
    	if (FindClientByAccNum(vClients, client, accNum)) PrintClientRecord(client);
    	else cout << "\nThe Client With Account Number (" << accNum << ") Is Not Found.";
    
    	cout << endl;
    }
}