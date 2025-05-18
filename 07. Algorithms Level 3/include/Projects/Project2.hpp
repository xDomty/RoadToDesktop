#ifndef PROJECT2_HPP
#define PROJECT2_HPP

#include <iostream>
#include <string>
#include <vector>

// Structure to store client information


namespace Project2 {

    struct strClient;
    // Declare the global vector to hold clients
    extern std::vector<strClient> vClients;
    
    // Function declarations
    void clearScreen();
    void pressAnyKeyToContinue();
    bool isValidIntegerInput(const std::string& input);
    bool isNotEmpty(const std::string& input);
    bool validateAccountNumber(const std::string& accountNumber);
    bool validatePinCode(const std::string& pinCode);
    bool validatePhoneNumber(const std::string& phone);
    bool validateAccountBalance(double balance);

    void SaveClientsDataToFile(const std::string& fileName);
    std::vector<strClient> LoadClientsDataFromFile(const std::string& fileName);
    void PrintClientRecord(const strClient& client);
    void PrintAllClientsData(const std::vector<strClient>& vClients);
    std::vector<strClient>::iterator FindClientByAccNum(const std::string& accNum);

    void DeleteClientByAccNum(const std::string& accNum);
    void UpdateClientByAccNum(const std::string& accNum);
    void AddClientsScreen();
    void DeleteClientScreen();
    void UpdateClientScreen();
    void FindClientScreen();
    void TransactionScreen();
    void EndScreen();
    void MainMenu();

    void InitializeData();
    void main();
}

#endif // PROJECT2_HPP
