#include "../../include/Problems/Problem47.hpp"
#include <string>
#include <fstream>

namespace Problem47 {

    const string ClientsFileName = "Clients.txt";

    struct strClient
    {
    	string AccountNumber;
    	string PinCode;
    	string Name;
    	string Phone;
    	double AccountBalance;
    };
    
    strClient NewClient()
    {
    	strClient client;
    	cout << "Enter Account Number: ";
    	cin >> ws >> client.AccountNumber;
    	cout << "Enter Pin Code: ";
    	cin >> client.PinCode;
    	cout << "Enter Name: ";
    	getline(cin >> ws, client.Name);
    	cout << "Enter Phone: ";
    	cin >> client.Phone;
    	cout << "Enter Account Balance: ";
    	cin >> client.AccountBalance;
    	return client;
    }
    
    string ConvertRecordToLine(strClient client, string delim = "#//#")
    {
    	string recordToLine =
    		client.AccountNumber + delim
    		+ client.PinCode + delim
    		+ client.Name + delim
    		+ client.Phone + delim
    		+ to_string(client.AccountBalance);
    	return recordToLine;
    }
    
    void SaveClientToFile(string clientLine)
    {
    	fstream file;
    	file.open(ClientsFileName, ios::out | ios::app);
    	if (file.is_open())
    	{
    		file << clientLine << endl;
    		file.close();
    	}
    }
    
    void main()
    {
    	char addMore;
    	do
    	{
    		system("cls");
    		cout << "Adding New Client:\n\n";
    		SaveClientToFile(ConvertRecordToLine(NewClient()));
    		cout << "\nClient added successfully, do you want to add more clients [y/n]? ";
    		cin >> addMore;
    	} while (tolower(addMore) == 'y');
    }

}