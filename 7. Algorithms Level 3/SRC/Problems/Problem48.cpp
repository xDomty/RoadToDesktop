#include "../../include/Problems/Problem48.hpp"
#include <fstream>
#include <iomanip>

namespace Problem48 {

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
    
    void PrintClientData(strClient& client)
    {
    	cout << "| " << setw(15) << left << client.AccountNumber;
    	cout << "| " << setw(10) << left << client.PinCode;
    	cout << "| " << setw(40) << left << client.Name;
    	cout << "| " << setw(12) << left << client.Phone;
    	cout << "| " << setw(12) << left << client.AccountBalance;
    }
    
    void PrintAllClientsData(vector<strClient>& vClients)
    {
    	cout << "\n\t\t\t\tClient List (3) Client(s).";
    	cout << "\n____________________________________________________";
    	cout << "____________________________________________\n" << endl;
    	cout << "| " << left << setw(15) << "Accout Number";
    	cout << "| " << left << setw(10) << "Pin Code";
    	cout << "| " << left << setw(40) << "        Client Name";
    	cout << "| " << left << setw(12) << "Phone";
    	cout << "| " << left << setw(12) << "Balance";
    	cout << "\n____________________________________________________";
    	cout << "____________________________________________\n" << endl;
    
    	for (strClient& client : vClients)
    	{
    		PrintClientData(client);
    		cout << endl;
    	}
    
    	cout << "____________________________________________________";
    	cout << "____________________________________________\n" << endl;
    }
    
    void main()
    {
    	vector <strClient> vClients = LoadClientsDataFromFile(ClientsFileName);
    	PrintAllClientsData(vClients);
    }
}