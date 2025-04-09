#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <limits>  // For std::numeric_limits
using namespace std;

namespace Project2 {

    struct strClient;

    enum MainMenuOptions
    {
        LIST_CLIENTS = 1,
        ADD_NEW_CLIENT = 2,
        DELETE_CLIENT = 3,
        UPDATE_CLIENT = 4,
        FIND_CLIENT = 5,
        EXIT = 6
    };

    extern std::string ClientsFileName;
    extern std::vector<strClient> vClients;

    std::vector<std::string> SplitString(std::string text, std::string delim);
    strClient ConvertLinetoRecord(std::string line, std::string delim = "#//#");
    std::string ConvertRecordToLine(const strClient& client, std::string delim = "#//#");
    void PrintClientRecord(const strClient& client);
    void PrintAllClientsData(const std::vector<strClient>& vClients);
    void SaveClientsDataToFile();
    extern std::vector<strClient> LoadClientsDataFromFile(std::string fileName);
    extern std::vector<strClient>::iterator FindClientByAccNum(std::string accNum);
    strClient NewClient();
    void DeleteClientByAccNum(std::string accNum);
    void UpdateClientByAccNum(std::string accNum);
    void AddClientsScreen();
    void DeleteClientScreen();
    void UpdateClientScreen();
    void FindClientScreen();
    void EndScreen();
    MainMenuOptions ReadMainMenuOption();
    void GoBackToMainMenu();
    void PerformMainMenuOption(MainMenuOptions option);
    void MainMenu();
    void InitializeData();

    void ClearScreen();
    bool IsValidAccountNumber(const std::string& accNum);
    bool IsValidPinCode(const std::string& pinCode);
    bool IsValidAccountBalance(double balance);


    void main();
}
