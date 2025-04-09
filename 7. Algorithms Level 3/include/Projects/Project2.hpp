#pragma once
#include <iostream>
#include <vector>
using namespace std;

namespace Project2 {

    struct strClient;
    
    enum enMainMenuOptions
    {
    	ListClients = 1, AddNewClient = 2,
    	DeleteClient = 3, UpdateClient = 4,
    	FindClient = 5, Transactions = 6, Exit = 7
    };
    
    enum enTransactionsOptions
    {
    	ShowDeposit = 1, ShowWithdraw = 2,
    	ShowTotalBalances = 3, ShowMainMenu = 4
    };
    
    enum enTransactionsTypes { Deposit, Withdraw };

    vector<strClient> LoadClientsDataFromFile(string fileName);
    
    const string ClientsFileName = "Clients.txt";
    vector<strClient> vClients = LoadClientsDataFromFile(ClientsFileName);
    
    vector<string> SplitString(string text, string delim);
    
    strClient ConvertLinetoRecord(string line, string delim);
    
    string ConvertRecordToLine(strClient& client, string delim);
    
    void PrintClientRecord(strClient& client);
    
    void PrintAllClientsData(vector<strClient>& vClients);
    
    void SaveClientsDataToFile();
    
    vector<strClient> LoadClientsDataFromFile(string fileName);
    
    vector<strClient>::iterator FindClientByAccNum(string accNum);
    
    strClient NewClient();
    
    void DelClientByAccNum(string accNum);
    
    void UpdClientByAccNum(string accNum);
    
    void AddClientsScreen();
    
    void DeleteClientScreen();
    
    void UpdateClientScreen();
    
    void FindClientScreen();
    
    void EndScreen();
    
    void DoTransaction(strClient& client, double amount, enTransactionsTypes transactionType);
    
    void DoTransactionsScreen(enTransactionsTypes transactionType);
    
    void TotalBalancesScreen();
    
    enMainMenuOptions ReadMainMenuOption();
    
    enTransactionsOptions ReadTransactionsOption();
    
    void GoBackToTransactionsMenu();
    
    void GoBackToMainMenu();
    
    void PerfromTranactionsOption(enTransactionsOptions option);
    
    void PerfromMainMenuOption(enMainMenuOptions option);
    
    void TransactionsMenu();

    void MainMenu();
    
    void main();
}