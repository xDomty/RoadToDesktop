#include "../../include/Problems/Problem45.hpp"
#include <string>

namespace Problem45 {
    struct strClient
    {
    	string accountNumber;
    	string pinCode;
    	string name;
    	string phone;
    	double accountBalance;
    };
    
    strClient EnterNewClientInfo()
    {
    	strClient client;

    	cout << "Enter Account Number: ";
    	getline(cin, client.accountNumber);

    	cout << "Enter Pin Code: ";
    	getline(cin, client.pinCode);

    	cout << "Enter Name: ";
    	getline(cin, client.name);

    	cout << "Enter Phone: ";
    	getline(cin, client.phone);

    	cout << "Enter Account Balance: ";
    	cin >> client.accountBalance;

    	return client;
    }
    
    string ConvertRecordToLine(strClient client, string delim = "#//#")
    {
    	string recordToLine = "";
    	recordToLine += client.accountNumber + delim
    		          + client.pinCode + delim
    		          + client.name + delim
    		          + client.phone + delim
    		          + to_string(client.accountBalance);
    	return recordToLine;
    }
    
    void main()
    {
    	cout << "Please Enter Client Data:\n\n";
    	strClient client = EnterNewClientInfo();
    	cout << "\n\nClient Record For Saving Is:\n";
    	cout << ConvertRecordToLine(client) << endl;
    }
}