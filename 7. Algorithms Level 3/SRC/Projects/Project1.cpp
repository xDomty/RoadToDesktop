#include "../../include/Projects/Project1.hpp"
#include <iostream>
#include <iomanip>
#include <fstream>
#include <algorithm>
#include <limits>
#include <cstdlib>
#include <string>
#include <sstream>
using namespace std;

namespace Project1 {

    // Define the global vector to hold clients
    vector<strClient> vClients;  // Declare the global vector of clients

    // Function to clear the console screen (cross-platform for both Windows and Linux)
    void clearScreen() {
        #ifdef _WIN32
                system("cls");
        #else
                system("clear");
        #endif
    }

    // Function to pause the program and wait for user to press any key
    void pressAnyKeyToContinue() {
        cout << "\nPress any key to continue... ";
        cin.get();  // Wait for user to press a key
        cin.ignore();  // Ignore the newline character
    }

    // Function to validate if the input is a valid integer
    bool isValidIntegerInput(const string& input) {
        for (char ch : input) {
            if (!isdigit(ch)) {
                return false;
            }
        }
        return true;
    }

    // Function to check if input is not empty
    bool isNotEmpty(const string& input) {
        return !input.empty();
    }

    // Validation functions for different fields
    bool validateAccountNumber(const string& accountNumber) {
        return isNotEmpty(accountNumber) && isValidIntegerInput(accountNumber);
    }

    bool validatePinCode(const string& pinCode) {
        return isNotEmpty(pinCode) && pinCode.length() == 4 && isValidIntegerInput(pinCode);
    }

    bool validatePhoneNumber(const string& phone) {
        return isNotEmpty(phone) && phone.length() == 10 && isValidIntegerInput(phone);
    }

    bool validateAccountBalance(double balance) {
        return balance >= 0.0;
    }

    // Function to save the client data to a file
    void SaveClientsDataToFile(const string& fileName) {
        ofstream outFile(fileName);
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
            cerr << "Error opening file for writing!" << endl;
        }
    }

    // Function definitions for client record operations

    void PrintClientRecord(const strClient& client) {
        cout << "\nThe Following Are The Client Details:\n";
        cout << "------------------------------------";
        cout << "\nAccount Number  : " << client.AccountNumber;
        cout << "\nPin Code       : " << client.PinCode;
        cout << "\nName           : " << client.Name;
        cout << "\nPhone          : " << client.Phone;
        cout << "\nAccount Balance: " << client.AccountBalance;
        cout << "\n------------------------------------\n";
    }

    void PrintAllClientsData(const vector<strClient>& vClients) {
        cout << "\n\t\t\t\tClient List (" << vClients.size() << ") Client(s).";
        cout << "\n____________________________________________________";
        cout << "____________________________________________\n" << endl;
        cout << "| " << left << setw(15) << "Account Number";
        cout << "| " << left << setw(10) << "Pin Code";
        cout << "| " << left << setw(40) << "Client Name";
        cout << "| " << left << setw(12) << "Phone";
        cout << "| " << left << setw(12) << "Balance";
        cout << "\n____________________________________________________";
        cout << "____________________________________________\n" << endl;

        for (const strClient& client : vClients) {
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

    vector<strClient> LoadClientsDataFromFile(const string& fileName) {
        vector<strClient> vClients;
        ifstream inFile(fileName);

        if (inFile.is_open()) {
            string line;
            while (getline(inFile, line)) {
                // Parse each line to fill a strClient struct
                strClient client;
                stringstream ss(line);
                getline(ss, client.AccountNumber, ',');
                getline(ss, client.PinCode, ',');
                getline(ss, client.Name, ',');
                getline(ss, client.Phone, ',');
                ss >> client.AccountBalance;

                vClients.push_back(client);
            }
            inFile.close();
        }
        else {
            cerr << "Error opening file for reading!" << endl;
        }

        return vClients;
    }

    vector<strClient>::iterator FindClientByAccNum(const string& accNum) {
        return find_if(vClients.begin(), vClients.end(),
            [&accNum](const strClient& client) { return client.AccountNumber == accNum; });
    }

    void DeleteClientByAccNum(const string& accNum) {
        auto iter = FindClientByAccNum(accNum);
        if (iter != vClients.end()) {
            PrintClientRecord(*iter);
            char confirmDel;
            cout << "\nAre You Sure You Want To Delete This Client [y/n]? ";
            cin >> confirmDel;
            if (tolower(confirmDel) == 'y') {
                vClients.erase(iter);
                SaveClientsDataToFile("Clients.txt");  // Persist changes
            }
        }
        else {
            cout << "\nThe Client With Account Number (" << accNum << ") Is Not Found.\n";
        }
    }

    void UpdateClientByAccNum(const string& accNum) {
        auto iter = FindClientByAccNum(accNum);
        if (iter != vClients.end()) {
            PrintClientRecord(*iter);
            char confirmUpd;
            cout << "\nAre You Sure You Want To Update This Client [y/n]? ";
            cin >> confirmUpd;
            if (tolower(confirmUpd) == 'y') {
                cout << "\nEnter Pin Code: ";
                cin >> iter->PinCode;
                cout << "Enter Name: ";
                cin.ignore();
                getline(cin, iter->Name);
                cout << "Enter Phone: ";
                cin >> iter->Phone;
                cout << "Enter Account Balance: ";
                cin >> iter->AccountBalance;

                SaveClientsDataToFile("Clients.txt");  // Persist changes
            }
        }
        else {
            cout << "\nThe Client With Account Number (" << accNum << ") Is Not Found.\n";
        }
    }

    void AddClientsScreen() {
        strClient newClient;
        cout << "\nEnter Account Number: ";
        cin >> newClient.AccountNumber;
        while (!validateAccountNumber(newClient.AccountNumber)) {
            cout << "Invalid Account Number! Please enter a valid one: ";
            cin >> newClient.AccountNumber;
        }

        cout << "Enter Pin Code: ";
        cin >> newClient.PinCode;
        while (!validatePinCode(newClient.PinCode)) {
            cout << "Invalid Pin Code! Please enter a valid one: ";
            cin >> newClient.PinCode;
        }

        cout << "Enter Name: ";
        cin.ignore();
        getline(cin, newClient.Name);
        while (!isNotEmpty(newClient.Name)) {
            cout << "Name cannot be empty! Please enter a valid name: ";
            getline(cin, newClient.Name);
        }

        cout << "Enter Phone: ";
        cin >> newClient.Phone;
        while (!validatePhoneNumber(newClient.Phone)) {
            cout << "Invalid Phone Number! Please enter a valid one: ";
            cin >> newClient.Phone;
        }

        cout << "Enter Account Balance: ";
        cin >> newClient.AccountBalance;
        while (!validateAccountBalance(newClient.AccountBalance)) {
            cout << "Account Balance cannot be negative! Please enter a valid balance: ";
            cin >> newClient.AccountBalance;
        }

        vClients.push_back(newClient);
        SaveClientsDataToFile("Clients.txt");  // Persist new client
        cout << "\nClient Added Successfully!\n";
        pressAnyKeyToContinue();  // Wait for user to press any key to continue
    }

    void DeleteClientScreen() {
        string accNum;
        cout << "\nEnter Account Number of Client to Delete: ";
        cin >> accNum;
        DeleteClientByAccNum(accNum);
        pressAnyKeyToContinue();  // Wait for user to press any key to continue
    }

    void UpdateClientScreen() {
        string accNum;
        cout << "\nEnter Account Number of Client to Update: ";
        cin >> accNum;
        UpdateClientByAccNum(accNum);
        pressAnyKeyToContinue();  // Wait for user to press any key to continue
    }

    void FindClientScreen() {
        string accNum;
        cout << "\nEnter Account Number of Client to Find: ";
        cin >> accNum;

        auto iter = FindClientByAccNum(accNum);
        if (iter != vClients.end()) {
            PrintClientRecord(*iter);
        }
        else {
            cout << "\nThe Client With Account Number (" << accNum << ") Is Not Found.\n";
        }
        pressAnyKeyToContinue();  // Wait for user to press any key to continue
    }

    void EndScreen() {
        cout << "\n\nThanks for using the system!" << endl;
        pressAnyKeyToContinue();  // Wait for user to press any key to exit
    }

    void MainMenu() {
        int choice;
        do {
            clearScreen();  // Clear the screen each time
            cout << "\nMain Menu\n";
            cout << "1. Add Client\n";
            cout << "2. Delete Client\n";
            cout << "3. Update Client\n";
            cout << "4. Find Client\n";
            cout << "5. Print All Clients\n";
            cout << "6. End\n";
            cout << "Enter your choice: ";
            cin >> choice;

            switch (choice) {
            case 1: clearScreen(); AddClientsScreen(); break;
            case 2: clearScreen(); PrintAllClientsData(vClients); DeleteClientScreen(); break;
            case 3: clearScreen(); PrintAllClientsData(vClients); UpdateClientScreen(); break;
            case 4: clearScreen(); PrintAllClientsData(vClients); FindClientScreen();  break;
            case 5: clearScreen(); PrintAllClientsData(vClients); pressAnyKeyToContinue(); break;
            case 6: EndScreen(); break;
            default: cout << "\nInvalid choice!\n"; pressAnyKeyToContinue(); break;
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
