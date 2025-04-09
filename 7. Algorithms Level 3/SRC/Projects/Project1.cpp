#include "../../Include/Projects/Project1.hpp"
#include <iostream>
#include <iomanip>
#include <fstream>
#include <algorithm>
#include <limits>
#include <cstdlib>
#include <string>
#include <sstream>

namespace Project1 {

    // Define the global vector to hold clients
    std::vector<strClient> vClients;  // Declare the global vector of clients

    // Function to clear the console screen (cross-platform for both Windows and Linux)
    void clearScreen() {
#ifdef _WIN32
        std::system("cls");
#else
        std::system("clear");
#endif
    }

    // Function to pause the program and wait for user to press any key
    void pressAnyKeyToContinue() {
        std::cout << "\nPress any key to continue... ";
        std::cin.get();  // Wait for user to press a key
        std::cin.ignore();  // Ignore the newline character
    }

    // Function to validate if the input is a valid integer
    bool isValidIntegerInput(const std::string& input) {
        for (char ch : input) {
            if (!isdigit(ch)) {
                return false;
            }
        }
        return true;
    }

    // Function to check if input is not empty
    bool isNotEmpty(const std::string& input) {
        return !input.empty();
    }

    // Validation functions for different fields
    bool validateAccountNumber(const std::string& accountNumber) {
        return isNotEmpty(accountNumber) && isValidIntegerInput(accountNumber);
    }

    bool validatePinCode(const std::string& pinCode) {
        return isNotEmpty(pinCode) && pinCode.length() == 4 && isValidIntegerInput(pinCode);
    }

    bool validatePhoneNumber(const std::string& phone) {
        return isNotEmpty(phone) && phone.length() == 10 && isValidIntegerInput(phone);
    }

    bool validateAccountBalance(double balance) {
        return balance >= 0.0;
    }

    // Function to save the client data to a file
    void SaveClientsDataToFile(const std::string& fileName) {
        std::ofstream outFile(fileName);
        if (outFile.is_open()) {
            for (const strClient& client : vClients) {
                outFile << client.AccountNumber << ","
                    << client.PinCode << ","
                    << client.Name << ","
                    << client.Phone << ","
                    << client.AccountBalance << "\n";
            }
            outFile.close();
        }
        else {
            std::cerr << "Error opening file for writing!" << std::endl;
        }
    }

    // Function definitions for client record operations

    void PrintClientRecord(const strClient& client) {
        std::cout << "\nThe Following Are The Client Details:\n";
        std::cout << "------------------------------------";
        std::cout << "\nAccount Number  : " << client.AccountNumber;
        std::cout << "\nPin Code       : " << client.PinCode;
        std::cout << "\nName           : " << client.Name;
        std::cout << "\nPhone          : " << client.Phone;
        std::cout << "\nAccount Balance: " << client.AccountBalance;
        std::cout << "\n------------------------------------\n";
    }

    void PrintAllClientsData(const std::vector<strClient>& vClients) {
        std::cout << "\n\t\t\t\tClient List (" << vClients.size() << ") Client(s).";
        std::cout << "\n____________________________________________________";
        std::cout << "____________________________________________\n" << std::endl;
        std::cout << "| " << std::left << std::setw(15) << "Account Number";
        std::cout << "| " << std::left << std::setw(10) << "Pin Code";
        std::cout << "| " << std::left << std::setw(40) << "Client Name";
        std::cout << "| " << std::left << std::setw(12) << "Phone";
        std::cout << "| " << std::left << std::setw(12) << "Balance";
        std::cout << "\n____________________________________________________";
        std::cout << "____________________________________________\n" << std::endl;

        for (const strClient& client : vClients) {
            std::cout << "| " << std::setw(15) << std::left << client.AccountNumber;
            std::cout << "| " << std::setw(10) << std::left << client.PinCode;
            std::cout << "| " << std::setw(40) << std::left << client.Name;
            std::cout << "| " << std::setw(12) << std::left << client.Phone;
            std::cout << "| " << std::setw(12) << std::left << client.AccountBalance;
            std::cout << std::endl;
        }

        std::cout << "____________________________________________________";
        std::cout << "____________________________________________\n";
    }

    std::vector<strClient> LoadClientsDataFromFile(const std::string& fileName) {
        std::vector<strClient> vClients;
        std::ifstream inFile(fileName);

        if (inFile.is_open()) {
            std::string line;
            while (getline(inFile, line)) {
                // Parse each line to fill a strClient struct
                strClient client;
                std::stringstream ss(line);
                std::getline(ss, client.AccountNumber, ',');
                std::getline(ss, client.PinCode, ',');
                std::getline(ss, client.Name, ',');
                std::getline(ss, client.Phone, ',');
                ss >> client.AccountBalance;

                vClients.push_back(client);
            }
            inFile.close();
        }
        else {
            std::cerr << "Error opening file for reading!" << std::endl;
        }

        return vClients;
    }

    std::vector<strClient>::iterator FindClientByAccNum(const std::string& accNum) {
        return std::find_if(vClients.begin(), vClients.end(),
            [&accNum](const strClient& client) { return client.AccountNumber == accNum; });
    }

    void DeleteClientByAccNum(const std::string& accNum) {
        auto iter = FindClientByAccNum(accNum);
        if (iter != vClients.end()) {
            PrintClientRecord(*iter);
            char confirmDel;
            std::cout << "\nAre You Sure You Want To Delete This Client [y/n]? ";
            std::cin >> confirmDel;
            if (tolower(confirmDel) == 'y') {
                vClients.erase(iter);
                SaveClientsDataToFile("Clients.txt");  // Persist changes
            }
        }
        else {
            std::cout << "\nThe Client With Account Number (" << accNum << ") Is Not Found.\n";
        }
    }

    void UpdateClientByAccNum(const std::string& accNum) {
        auto iter = FindClientByAccNum(accNum);
        if (iter != vClients.end()) {
            PrintClientRecord(*iter);
            char confirmUpd;
            std::cout << "\nAre You Sure You Want To Update This Client [y/n]? ";
            std::cin >> confirmUpd;
            if (tolower(confirmUpd) == 'y') {
                std::cout << "\nEnter Pin Code: ";
                std::cin >> iter->PinCode;
                std::cout << "Enter Name: ";
                std::cin.ignore();
                std::getline(std::cin, iter->Name);
                std::cout << "Enter Phone: ";
                std::cin >> iter->Phone;
                std::cout << "Enter Account Balance: ";
                std::cin >> iter->AccountBalance;

                SaveClientsDataToFile("Clients.txt");  // Persist changes
            }
        }
        else {
            std::cout << "\nThe Client With Account Number (" << accNum << ") Is Not Found.\n";
        }
    }

    void AddClientsScreen() {
        strClient newClient;
        std::cout << "\nEnter Account Number: ";
        std::cin >> newClient.AccountNumber;
        while (!validateAccountNumber(newClient.AccountNumber)) {
            std::cout << "Invalid Account Number! Please enter a valid one: ";
            std::cin >> newClient.AccountNumber;
        }

        std::cout << "Enter Pin Code: ";
        std::cin >> newClient.PinCode;
        while (!validatePinCode(newClient.PinCode)) {
            std::cout << "Invalid Pin Code! Please enter a valid one: ";
            std::cin >> newClient.PinCode;
        }

        std::cout << "Enter Name: ";
        std::cin.ignore();
        std::getline(std::cin, newClient.Name);
        while (!isNotEmpty(newClient.Name)) {
            std::cout << "Name cannot be empty! Please enter a valid name: ";
            std::getline(std::cin, newClient.Name);
        }

        std::cout << "Enter Phone: ";
        std::cin >> newClient.Phone;
        while (!validatePhoneNumber(newClient.Phone)) {
            std::cout << "Invalid Phone Number! Please enter a valid one: ";
            std::cin >> newClient.Phone;
        }

        std::cout << "Enter Account Balance: ";
        std::cin >> newClient.AccountBalance;
        while (!validateAccountBalance(newClient.AccountBalance)) {
            std::cout << "Account Balance cannot be negative! Please enter a valid balance: ";
            std::cin >> newClient.AccountBalance;
        }

        vClients.push_back(newClient);
        SaveClientsDataToFile("Clients.txt");  // Persist new client
        std::cout << "\nClient Added Successfully!\n";
        pressAnyKeyToContinue();  // Wait for user to press any key to continue
    }

    void DeleteClientScreen() {
        std::string accNum;
        std::cout << "\nEnter Account Number of Client to Delete: ";
        std::cin >> accNum;
        DeleteClientByAccNum(accNum);
        pressAnyKeyToContinue();  // Wait for user to press any key to continue
    }

    void UpdateClientScreen() {
        std::string accNum;
        std::cout << "\nEnter Account Number of Client to Update: ";
        std::cin >> accNum;
        UpdateClientByAccNum(accNum);
        pressAnyKeyToContinue();  // Wait for user to press any key to continue
    }

    void FindClientScreen() {
        std::string accNum;
        std::cout << "\nEnter Account Number of Client to Find: ";
        std::cin >> accNum;

        auto iter = FindClientByAccNum(accNum);
        if (iter != vClients.end()) {
            PrintClientRecord(*iter);
        }
        else {
            std::cout << "\nThe Client With Account Number (" << accNum << ") Is Not Found.\n";
        }
        pressAnyKeyToContinue();  // Wait for user to press any key to continue
    }

    void EndScreen() {
        std::cout << "\n\nThanks for using the system!" << std::endl;
        pressAnyKeyToContinue();  // Wait for user to press any key to exit
    }

    void MainMenu() {
        int choice;
        do {
            clearScreen();  // Clear the screen each time
            std::cout << "\nMain Menu\n";
            std::cout << "1. Add Client\n";
            std::cout << "2. Delete Client\n";
            std::cout << "3. Update Client\n";
            std::cout << "4. Find Client\n";
            std::cout << "5. Print All Clients\n";
            std::cout << "6. End\n";
            std::cout << "Enter your choice: ";
            std::cin >> choice;

            switch (choice) {
            case 1: clearScreen(); AddClientsScreen(); break;
            case 2: clearScreen(); DeleteClientScreen(); break;
            case 3: clearScreen(); UpdateClientScreen(); break;
            case 4: clearScreen(); FindClientScreen(); break;
            case 5: clearScreen(); PrintAllClientsData(vClients); pressAnyKeyToContinue(); break;
            case 6: EndScreen(); break;
            default: std::cout << "\nInvalid choice!\n"; pressAnyKeyToContinue(); break;
            }
        } while (choice != 6);
    }

    void InitializeData() {
        vClients = LoadClientsDataFromFile("Clients.txt");
    }

    void main() {
        InitializeData();
        MainMenu();
    }
}
