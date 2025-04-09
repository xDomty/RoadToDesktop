#include "../../include/Problems/Problem51.hpp"
#include <fstream>
#include <string>

namespace Problem51 {
    
    string ClientsFileName = "Clients.txt";
    
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
    
    strClient ConvertLinetoRecord(string line, string delim)
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
    
    string ConvertRecordToLine(strClient& client, string delim)
    {
    	string recordToLine =
    		client.AccountNumber + delim
    		+ client.PinCode + delim
    		+ client.Name + delim
    		+ client.Phone + delim
    		+ to_string(client.AccountBalance);
    	return recordToLine;
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
    
    void SaveClientsDataToFile(vector<strClient>& vClients)
    {
    	fstream file;
    	file.open(ClientsFileName, ios::out);
    	if (file.is_open())
    	{
    		for (strClient& client : vClients)
    			file << ConvertRecordToLine(client) << endl;
    		file.close();
    	}
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
    
    vector<strClient>::iterator FindClientByAccNum(vector<strClient>& vClients, string accNum)
    {
    	vector<strClient>::iterator iter;
    	for (iter = vClients.begin(); iter != vClients.end(); iter++)
    		if (iter->AccountNumber == accNum) break;
    	return iter;
    }
    
    void UpdClientByAccNum(vector<strClient>& vClients, string accNum)
    {
    	vector<strClient>::iterator iter = FindClientByAccNum(vClients, accNum);
    	char confirmUpd;
    
    	if (iter != vClients.end())
    	{
    		PrintClientRecord(*iter);
    		cout << "\n\nAre You Sure You Want To Update This Client [y/n]? ";
    		cin >> confirmUpd;
    
    		if (tolower(confirmUpd) == 'y')
    		{
    			cout << "\nEnter Pin Code: ";
    			cin >> iter->PinCode;
    			cout << "Enter Name: ";
    			getline(cin >> ws, iter->Name);
    			cout << "Enter Phone: ";
    			cin >> iter->Phone;
    			cout << "Enter Account Balance: ";
    			cin >> iter->AccountBalance;
    
    			SaveClientsDataToFile(vClients);
    			cout << "\nClient Updated Successfully.\n";
    		}
    	}
    	else cout << "\nThe Client With Account Number (" << accNum << ") Is Not Found.\n";
    }
    
    void main()
    {
    	vector <strClient> vClients = LoadClientsDataFromFile(ClientsFileName);
    	string accNum;
    	cout << "Please Enter Account Number: ";
    	cin >> accNum;
    	UpdClientByAccNum(vClients, accNum);
    }

}