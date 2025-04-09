#pragma once
#include <iostream>
#include <vector>
using namespace std;

namespace Project1 {

    struct strClient;
    
    enum enMainMenuOptions
    {
    	ListClients = 1, AddNewClient = 2,
    	DeleteClient = 3, UpdateClient = 4,
    	FindClient = 5, Exit = 6
    };
    
    const string ClientsFileName;
    vector<strClient> vClients;
    
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
    
    enMainMenuOptions ReadMainMenuOption();
    
    void GoBackToMainMenu();
    
    void PerfromMainMenuOption(enMainMenuOptions option);
    
    void MainMenu();
    
    void main();

}