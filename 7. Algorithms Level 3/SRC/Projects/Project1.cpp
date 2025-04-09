#include "../../Include/Projects/Project1.hpp"
#include <algorithm>
#include <iostream>
#include <fstream>

namespace Project1 {

    // Define the global vector
    std::vector<strClient> vClients;

    // Function definitions
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
                // You need to implement a function to parse the line into strClient
                // For example:
                strClient client;
                // Parse line into client (e.g., using your `ConvertLinetoRecord` method)
                // client = ConvertLinetoRecord(line);
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
                // Call SaveClientsDataToFile to persist changes
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

                // Save changes to file here
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
        std::cout << "Enter Pin Code: ";
        std::cin >> newClient.PinCode;
        std::cout << "Enter Name: ";
        std::cin.ignore();
        std::getline(std::cin, newClient.Name);
        std::cout << "Enter Phone: ";
        std::cin >> newClient.Phone;
        std::cout << "Enter Account Balance: ";
        std::cin >> newClient.AccountBalance;

        vClients.push_back(newClient);
        std::cout << "\nClient Added Successfully!\n";
        // Call SaveClientsDataToFile to persist new client
    }

    void DeleteClientScreen() {
        std::string accNum;
        std::cout << "\nEnter Account Number of Client to Delete: ";
        std::cin >> accNum;
        DeleteClientByAccNum(accNum);
    }

    void UpdateClientScreen() {
        std::string accNum;
        std::cout << "\nEnter Account Number of Client to Update: ";
        std::cin >> accNum;
        UpdateClientByAccNum(accNum);
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
    }

    void EndScreen() {
        std::cout << "\n\nThanks for using the system!" << std::endl;
    }

    void MainMenu() {
        int choice;
        do {
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
            case 1: AddClientsScreen(); break;
            case 2: DeleteClientScreen(); break;
            case 3: UpdateClientScreen(); break;
            case 4: FindClientScreen(); break;
            case 5: PrintAllClientsData(vClients); break;
            case 6: EndScreen(); break;
            default: std::cout << "\nInvalid choice!\n"; break;
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
