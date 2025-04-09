#ifndef PROJECT1_HPP
#define PROJECT1_HPP

#include <string>
#include <vector>
#include <iostream>
#include <fstream>
#include <iomanip>

namespace Project1 {

    // Define the structure for a client record
    struct strClient {
        std::string AccountNumber;
        std::string PinCode;
        std::string Name;
        std::string Phone;
        double AccountBalance;
    };

    // Global vector for holding client records
    extern std::vector<strClient> vClients;

    // Function declarations
    void PrintClientRecord(const strClient& client);
    void PrintAllClientsData(const std::vector<strClient>& vClients);
    std::vector<strClient> LoadClientsDataFromFile(const std::string& fileName);
    std::vector<strClient>::iterator FindClientByAccNum(const std::string& accNum);
    void DeleteClientByAccNum(const std::string& accNum);
    void UpdateClientByAccNum(const std::string& accNum);
    void AddClientsScreen();
    void DeleteClientScreen();
    void UpdateClientScreen();
    void FindClientScreen();
    void EndScreen();
    void MainMenu();
    void InitializeData();
    void main();
}

#endif // PROJECT1_HPP
