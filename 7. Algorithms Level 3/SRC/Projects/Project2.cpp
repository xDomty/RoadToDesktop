#include "../../include/Projects/Project2.hpp"
#include <iomanip>
#include <fstream>
#include <string>
#include <limits>
#include <algorithm>

namespace Project2 {

    struct strClient
    {
        string AccountNumber;
        string PinCode;
        string Name;
        string Phone;
        double AccountBalance;
    };

    string ClientsFileName = "Clients.txt";
    std::vector<strClient> vClients;

    vector<string> SplitString(string text, string delim)
    {
        string sWord;
        vector<string> words;
        short pos;

        while ((pos = text.find(delim)) != string::npos)
        {
            sWord = text.substr(0, pos);
            if (sWord != "") words.push_back(sWord);
            text.erase(0, pos + delim.length());
        }
        if (text != "") words.push_back(text);
        return words;
    }

    strClient ConvertLinetoRecord(string line, string delim)
    {
        vector<string> vClientData = SplitString(line, delim);
        strClient client;
        client.AccountNumber = vClientData[0];
        client.PinCode = vClientData[1];
        client.Name = vClientData[2];
        client.Phone = vClientData[3];
        client.AccountBalance = stod(vClientData[4]);
        return client;
    }

    string ConvertRecordToLine(const strClient& client, string delim)
    {
        string recordToLine =
            client.AccountNumber + delim
            + client.PinCode + delim
            + client.Name + delim
            + client.Phone + delim
            + to_string(client.AccountBalance);
        return recordToLine;
    }

    void PrintClientRecord(const strClient& client)
    {
        cout << "\nThe Following Are The Client Details:\n";
        cout << "------------------------------------";
        cout << "\nAccount Number  : " << client.AccountNumber;
        cout << "\nPin Code        : " << client.PinCode;
        cout << "\nName            : " << client.Name;
        cout << "\nPhone           : " << client.Phone;
        cout << "\nAccount Balance : " << client.AccountBalance;
        cout << "\n------------------------------------\n";
    }

    void PrintAllClientsData(const vector<strClient>& vClients)
    {
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

        for (const strClient& client : vClients)
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
        ofstream outFile(ClientsFileName, ios::trunc);
        if (!outFile.is_open())
        {
            cerr << "Error opening file for writing!" << endl;
            return;
        }

        for (const strClient& client : vClients)
        {
            outFile << ConvertRecordToLine(client) << endl;
        }

        outFile.close();
    }

    vector<strClient> LoadClientsDataFromFile(string fileName)
    {
        vector<strClient> vClients;
        ifstream inFile(fileName);

        if (inFile.is_open())
        {
            string line;
            while (getline(inFile, line))
            {
                strClient client = ConvertLinetoRecord(line);
                vClients.push_back(client);
            }

            inFile.close();
        }
        else
        {
            cerr << "Error opening file for reading!" << endl;
        }

        return vClients;
    }

    vector<strClient>::iterator FindClientByAccNum(string accNum)
    {
        return find_if(vClients.begin(), vClients.end(),
            [&accNum](const strClient& client) { return client.AccountNumber == accNum; });
    }

    strClient NewClient()
    {
        strClient client;

        cout << "Adding New Client:\n\n";
        cout << "Enter Account Number: ";
        cin >> client.AccountNumber;

        while (FindClientByAccNum(client.AccountNumber) != vClients.end() || !IsValidAccountNumber(client.AccountNumber))
        {
            cout << "Invalid or existing Account Number (" << client.AccountNumber << "). Enter a valid Account Number: ";
            cin >> client.AccountNumber;
        }

        cout << "Enter Pin Code: ";
        cin >> client.PinCode;
        while (!IsValidPinCode(client.PinCode))
        {
            cout << "Invalid Pin Code. Enter a valid Pin Code: ";
            cin >> client.PinCode;
        }

        cout << "Enter Name: ";
        cin.ignore();
        getline(cin, client.Name);
        cout << "Enter Phone: ";
        cin >> client.Phone;
        cout << "Enter Account Balance: ";
        while (!(cin >> client.AccountBalance) || !IsValidAccountBalance(client.AccountBalance))
        {
            cout << "Invalid Balance. Please enter a valid Account Balance: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        return client;
    }

    bool IsValidAccountNumber(const string& accNum)
    {
        // Basic check for account number (length should be at least 4 digits)
        return accNum.length() >= 4;
    }

    bool IsValidPinCode(const string& pinCode)
    {
        // Basic check for pin code (length should be exactly 4 digits)
        return pinCode.length() == 4 && all_of(pinCode.begin(), pinCode.end(), ::isdigit);
    }

    bool IsValidAccountBalance(double balance)
    {
        return balance >= 0;
    }

    void ClearScreen()
    {
#ifdef _WIN32
        system("cls");
#else
        system("clear");
#endif
    }

    void DeleteClientByAccNum(string accNum)
    {
        auto iter = FindClientByAccNum(accNum);
        if (iter != vClients.end())
        {
            PrintClientRecord(*iter);
            char confirmDel;
            cout << "\nAre You Sure You Want To Delete This Client [y/n]? ";
            cin >> confirmDel;

            if (tolower(confirmDel) == 'y')
            {
                vClients.erase(iter);
                SaveClientsDataToFile();
                cout << "\nClient Deleted Successfully.\n";
            }
        }
        else
        {
            cout << "\nThe Client With Account Number (" << accNum << ") Is Not Found.\n";
        }
    }

    void UpdateClientByAccNum(string accNum)
    {
        auto iter = FindClientByAccNum(accNum);
        if (iter != vClients.end())
        {
            PrintClientRecord(*iter);
            char confirmUpd;
            cout << "\nAre You Sure You Want To Update This Client [y/n]? ";
            cin >> confirmUpd;

            if (tolower(confirmUpd) == 'y')
            {
                cout << "\nEnter Pin Code: ";
                cin >> iter->PinCode;
                cout << "Enter Name: ";
                cin.ignore();
                getline(cin, iter->Name);
                cout << "Enter Phone: ";
                cin >> iter->Phone;
                cout << "Enter Account Balance: ";
                cin >> iter->AccountBalance;

                SaveClientsDataToFile();
                cout << "\nClient Updated Successfully.\n";
            }
        }
        else
        {
            cout << "\nThe Client With Account Number (" << accNum << ") Is Not Found.\n";
        }
    }

    void AddClientsScreen()
    {
        char addMore;
        do
        {
            ClearScreen();
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
        DeleteClientByAccNum(accNum);
    }

    void UpdateClientScreen()
    {
        string accNum;
        cout << "-----------------------------------\n";
        cout << "\tUpdate Client Info Screen";
        cout << "\n-----------------------------------\n";
        cout << "\nEnter Account Number: ";
        cin >> accNum;
        UpdateClientByAccNum(accNum);
    }

    void FindClientScreen()
    {
        string accNum;
        cout << "-----------------------------------\n";
        cout << "\tFind Client Screen";
        cout << "\n-----------------------------------\n";
        cout << "\nEnter Account Number: ";
        cin >> accNum;
        auto iter = FindClientByAccNum(accNum);
        if (iter != vClients.end())
            PrintClientRecord(*iter);
        else
            cout << "\nThe Client With Account Number (" << accNum << ") Is Not Found.\n";
    }

    void EndScreen()
    {
        cout << "\n\nThanks for using the system!";
    }

    MainMenuOptions ReadMainMenuOption()
    {
        int option;
        cout << "\nMain Menu\n";
        cout << "1. List Clients\n";
        cout << "2. Add New Client\n";
        cout << "3. Delete Client\n";
        cout << "4. Update Client\n";
        cout << "5. Find Client\n";
        cout << "6. Exit\n";
        cout << "Enter your option: ";
        cin >> option;

        return static_cast<MainMenuOptions>(option);
    }

    void GoBackToMainMenu()
    {
        char goBack;
        cout << "\nPress any key to go back to the Main Menu...";
        cin >> goBack;
    }

    void PerformMainMenuOption(MainMenuOptions option)
    {
        switch (option)
        {
        case LIST_CLIENTS:
            PrintAllClientsData(vClients);
            break;
        case ADD_NEW_CLIENT:
            AddClientsScreen();
            break;
        case DELETE_CLIENT:
            DeleteClientScreen();
            break;
        case UPDATE_CLIENT:
            UpdateClientScreen();
            break;
        case FIND_CLIENT:
            FindClientScreen();
            break;
        case EXIT:
            EndScreen();
            break;
        default:
            cout << "\nInvalid option, please try again.\n";
        }
    }

    void MainMenu()
    {
        bool exit = false;
        while (!exit)
        {
            MainMenuOptions option = ReadMainMenuOption();
            if (option == EXIT)
            {
                exit = true;
            }
            else
            {
                PerformMainMenuOption(option);
            }
        }
    }

    void InitializeData()
    {
        vClients = LoadClientsDataFromFile(ClientsFileName);
    }

    void main()
    {
        InitializeData();
        MainMenu();
    }
}
