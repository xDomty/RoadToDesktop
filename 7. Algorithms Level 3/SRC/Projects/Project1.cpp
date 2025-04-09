#include "../../include/Projects/Project1.hpp"
#include <iomanip>
#include <fstream>
#include <string>
#include <limits>

namespace Project1{
    
    struct strClient
    {
    	string AccountNumber;
    	string PinCode;
    	string Name;
    	string Phone;
    	double AccountBalance;
    };
    
    const string ClientsFileName = "Clients.txt";
    vector<strClient> vClients = LoadClientsDataFromFile(ClientsFileName);
    
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
    
    string ConvertRecordToLine(strClient& client, string delim = "#//#")
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
    	cout << "------------------------------------";
    	cout << "\nAccout Number  : " << client.AccountNumber;
    	cout << "\nPin Code       : " << client.PinCode;
    	cout << "\nName           : " << client.Name;
    	cout << "\nPhone          : " << client.Phone;
    	cout << "\nAccount Balance: " << client.AccountBalance;
    	cout << "\n------------------------------------\n";
    }
    
    void PrintAllClientsData(vector<strClient>& vClients)
    {
    	cout << "\n\t\t\t\tClient List (3) Client(s).";
    	cout << "\n____________________________________________________";
    	cout << "____________________________________________\n" << endl;
    	cout << "| " << left << setw(15) << "Accout Number";
    	cout << "| " << left << setw(10) << "Pin Code";
    	cout << "| " << left << setw(40) << "Client Name";
    	cout << "| " << left << setw(12) << "Phone";
    	cout << "| " << left << setw(12) << "Balance";
    	cout << "\n____________________________________________________";
    	cout << "____________________________________________\n" << endl;
    
    	for (strClient& client : vClients)
    	{
    		cout << "| " << setw(15) << left << client.AccountNumber;
    		cout << "| " << setw(10) << left << client.PinCode;
    		cout << "| " << setw(40) << left << client.Name;
    		cout << "| " << setw(12) << left << client.Phone;
    		cout << "| " << setw(12) << left << client.AccountBalance;
    		cout << endl;
    	}
    
    	cout << "____________________________________________________";
    	cout << "____________________________________________\n";
    }
    
    void SaveClientsDataToFile()
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
    
    vector<strClient>::iterator FindClientByAccNum(string accNum)
    {
    	vector<strClient>::iterator iter;
    	for (iter = vClients.begin(); iter != vClients.end(); iter++)
    		if (iter->AccountNumber == accNum) break;
    	return iter;
    }
    
    strClient NewClient()
    {
    	strClient client;
    
    	cout << "Adding New Client:\n\n";
    	cout << "Enter Account Number: ";
    	cin >> ws >> client.AccountNumber;
    	while (FindClientByAccNum(client.AccountNumber) != vClients.end())
    	{
    		cout << "Client with account number (" << client.AccountNumber << ") already exists!\n";
    		cout << "Enter Account Number: ";
    		cin >> client.AccountNumber;
    	}
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
    
    void DelClientByAccNum(string accNum)
    {
    	vector<strClient>::iterator iter = FindClientByAccNum(accNum);
    	char confirmDel;
    
    	if (iter != vClients.end())
    	{
    		PrintClientRecord(*iter);
    		cout << "\nAre You Sure You Want To Delete This Client [y/n]? ";
    		cin >> confirmDel;
    		if (tolower(confirmDel) == 'y')
    		{
    			vClients.erase(iter);
    			SaveClientsDataToFile();
    			cout << "\nClient Deleted Successfully.\n";
    		}
    	}
    	else cout << "\nThe Client With Account Number (" << accNum << ") Is Not Found.\n";
    }
    
    void UpdClientByAccNum(string accNum)
    {
    	vector<strClient>::iterator iter = FindClientByAccNum(accNum);
    	char confirmUpd;
    
    	if (iter != vClients.end())
    	{
    		PrintClientRecord(*iter);
    		cout << "\nAre You Sure You Want To Update This Client [y/n]? ";
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
    
    			SaveClientsDataToFile();
    			cout << "\nClient Updated Successfully.\n";
    		}
    	}
    	else cout << "\nThe Client With Account Number (" << accNum << ") Is Not Found.\n";
    }
    
    void AddClientsScreen()
    {
    	strClient client;
    	char addMore;
    
    	do
    	{
    		system("cls");
    		cout << "-----------------------------------\n";
    		cout << "      Add New Clients Screen";
    		cout << "\n-----------------------------------\n";
    		vClients.push_back(NewClient());
    		cout << "\nClient added successfully, do you want to add more clients [y/n]? ";
    		cin >> addMore;
    	} while (tolower(addMore) == 'y');
    
    	SaveClientsDataToFile();
    }
    
    void DeleteClientScreen()
    {
    	string accNum;
    	cout << "-----------------------------------\n";
    	cout << "\tDelete Client Screen";
    	cout << "\n-----------------------------------\n";
    	cout << "\nEnter Account Number: ";
    	cin >> accNum;
    	DelClientByAccNum(accNum);
    }
    
    void UpdateClientScreen()
    {
    	string accNum;
    	cout << "-----------------------------------\n";
    	cout << "\tUpdate Client Info Screen";
    	cout << "\n-----------------------------------\n";
    	cout << "\nEnter Account Number: ";
    	cin >> accNum;
    	UpdClientByAccNum(accNum);
    }
    
    void FindClientScreen()
    {
    	string accNum;
    	vector<strClient>::iterator iter;
    	cout << "-----------------------------------\n";
    	cout << "\tFind Client Screen";
    	cout << "\n-----------------------------------\n";
    	cout << "\nEnter Account Number: ";
    	cin >> accNum;
    	iter = FindClientByAccNum(accNum);
    	if (iter != vClients.end()) PrintClientRecord(*iter);
    	else cout << "\nThe Client With Account Number (" << accNum << ") Is Not Found.\n";
    }
    
    void EndScreen()
    {
    	cout << "-----------------------------------\n";
    	cout << "\tProgram Ends :-)";
    	cout << "\n-----------------------------------\n";
    }
    
    enMainMenuOptions ReadMainMenuOption()
    {
    	cout << "Choose what do you want to do [1 to 6]: ";
    	short option;
    	cin >> option;
    	while (cin.fail() || option < 1 || option > 6)
    	{
    		cin.clear();
    		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    		cout << "Invalid option! Enter a valid option  : ";
    		cin >> option;
    	}
    	return (enMainMenuOptions)option;
    }
    
    void GoBackToMainMenu()
    {
    	cout << "\n\nPress any key to go back to main menu...";
    	system("pause>0");
    	MainMenu();
    }
    
    void PerfromMainMenuOption(enMainMenuOptions option)
    {
    	system("cls");
    
    	switch (option)
    	{
    	case enMainMenuOptions::ListClients:
    	{
    		PrintAllClientsData(vClients);
    		GoBackToMainMenu();
    		break;
    	}
    	case enMainMenuOptions::AddNewClient:
    		AddClientsScreen();
    		GoBackToMainMenu();
    		break;
    	case enMainMenuOptions::DeleteClient:
    		DeleteClientScreen();
    		GoBackToMainMenu();
    		break;
    	case enMainMenuOptions::UpdateClient:
    		UpdateClientScreen();
    		GoBackToMainMenu();
    		break;
    	case enMainMenuOptions::FindClient:
    		FindClientScreen();
    		GoBackToMainMenu();
    		break;
    	case enMainMenuOptions::Exit:
    		EndScreen();
    		break;
    	}
    }
    
    void MainMenu()
    {
    	system("cls");
    	cout << "=========================================\n";
    	cout << "\t    Main Menu Screen\n";
    	cout << "=========================================\n";
    	cout << "\t[1] Show Clients List.\n";
    	cout << "\t[2] Add New Client.\n";
    	cout << "\t[3] Delete Client.\n";
    	cout << "\t[4] Update Client Info.\n";
    	cout << "\t[5] Find Client.\n";
    	cout << "\t[6] Exit.\n";
    	cout << "=========================================\n";
    	PerfromMainMenuOption(ReadMainMenuOption());
    }
    
    void main()
    {
    	MainMenu();
    }

}