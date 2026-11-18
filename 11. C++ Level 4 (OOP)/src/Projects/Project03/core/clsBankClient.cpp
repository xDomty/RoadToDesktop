// Project 03: Bank Client
// clsBankClient.cpp (backend)

#include "Projects/Project03/core/clsBankClient.hpp"
#include "Global/clsString.hpp"
#include <fstream>
#include <string>
#include <vector>

namespace Project03 {
    namespace core {
        // clsBankClient Definition Start

        // FILE FORMAT:
        /*
            FirstName#//#LastName#//#Age#//#Email#//#PhoneNumber#//#AccountNumber#//#PinCode#//#AccountBalance
            Mohammed#//#Abu-Hadhoud#//#40#//#Mo@gmail.com#//#0799997886#//#A101#//#1234#//#5000.000000
            Khaili#//#Ahmed#//#23#//#KhalilAhmed&gmail.com#//#8928982#//#A102#//#1234#//#8748.000000
        */

        // private:
        // Lesson01: Find Client
        clsBankClient clsBankClient::_ConvertLineToClientObj(std::string Line, std::string Seperator) {
            std::vector<std::string> vClientData;
            vClientData = Global::clsString::SplitString(Line, Seperator);

            return clsBankClient(enSaveMode::UpdateMode,
                                 vClientData[0] /*First Name*/,
                                 vClientData[1] /*Last Name*/,
                                 std::stoi(vClientData[2]) /*Age*/,
                                 vClientData[3] /*Email*/,
                                 vClientData[4] /*Phone Number*/,
                                 vClientData[5] /*Account Number*/,
                                 vClientData[6] /*Pin Code*/,
                                 std::stof(vClientData[7]) /*Account Balance*/
            );
        }
        std::string clsBankClient::_ConvertClientObjToLine(clsBankClient objBankClient, std::string Seperator) {
            std::string sClientRecord = "";
            sClientRecord += objBankClient.GetFirstName() + Seperator;
            sClientRecord += objBankClient.GetLastName() + Seperator;
            sClientRecord += std::to_string(objBankClient.GetAge()) + Seperator;
            sClientRecord += objBankClient.GetEmail() + Seperator;
            sClientRecord += objBankClient.GetPhoneNumber() + Seperator;
            sClientRecord += objBankClient.GetAccountNumber() + Seperator;
            sClientRecord += objBankClient.GetPinCode() + Seperator;
            sClientRecord += std::to_string(objBankClient.GetAccountBalance());

            return sClientRecord;
        }
        clsBankClient clsBankClient::_GetEmptyClientObj() {
            return clsBankClient(enSaveMode::EmptyMode, "", "", 0, "", "", "", "", 0);
        }

        // Lesson02: Update Client
        std::vector<clsBankClient> clsBankClient::_LoadClientsDataFromFile() {
            std::vector<clsBankClient> vClients;

            std::fstream ClientsFile;
            ClientsFile.open("Clients.txt", std::ios::in); // read mode

            if (ClientsFile.is_open()) {
                std::string Line;

                while (std::getline(ClientsFile, Line)) {
                    clsBankClient objClient = _ConvertLineToClientObj(Line);
                    vClients.push_back(objClient);
                }
            }
            return vClients;
        }
        void clsBankClient::_SaveClientsDataToFile(std::vector<clsBankClient> vClients) {
            std::fstream ClientsFile;
            ClientsFile.open("Clients.txt", std::ios::out); // overwrite

            std::string DataLine;
            if (ClientsFile.is_open()) {
                for (clsBankClient C : vClients) {
                    if (C._MarkedToDelete != true) { /*Lesson04: Delete Client*/
                        DataLine = _ConvertClientObjToLine(C);
                        ClientsFile << DataLine << std::endl;
                    }
                }

                ClientsFile.close();
            }
        }

        void clsBankClient::_Update() {
            std::vector<clsBankClient> vClients;
            vClients = _LoadClientsDataFromFile();

            for (clsBankClient& C : vClients) {
                if (C.GetAccountNumber() == _AccountNumber) {
                    C = *this;
                    break;
                }
            }
            _SaveClientsDataToFile(vClients);
        }

        // Lesson03: Add New Client
        void clsBankClient::_AddDataLineToFile(std::string sDataLine) {
            std::fstream ClientsFile;
            ClientsFile.open("Clients.txt", std::ios::out | std::ios::app); // append mode
            if (ClientsFile.is_open()) {
                ClientsFile << sDataLine;
                ClientsFile.close();
            }
        }
        void clsBankClient::_AddNew() {
            _AddDataLineToFile(_ConvertClientObjToLine(*this));
        }

        // public:
        clsBankClient::clsBankClient(enSaveMode SaveMode, std::string FirstName, std::string LastName, unsigned short Age, std::string Email, std::string PhoneNumber, std::string AccountNumber, std::string PinCode, float AccountBalance) : clsPerson(FirstName, LastName, Age, Email, PhoneNumber) {
            _SaveMode = SaveMode;
            _PinCode = PinCode;
            _AccountNumber = AccountNumber;
            _AccountBalance = AccountBalance;
        }

        // Setters
        // Lesson01: Find Client
        void clsBankClient::SetPinCode(const std::string PinCode) {
            _PinCode = PinCode;
        }
        void clsBankClient::SetAccountBalance(const size_t AccountBalance) {
            _AccountBalance = AccountBalance;
        }

        // Getters
        // Lesson01: Find Client

        std::string clsBankClient::GetPinCode() const {
            return _PinCode;
        }
        std::string clsBankClient::GetAccountNumber() const {
            return _AccountNumber;
        }
        size_t clsBankClient::GetAccountBalance() const {
            return _AccountBalance;
        }

        // Main Functions
        // Lesson01: Find Client
        bool clsBankClient::IsEmpty() {
            return (_SaveMode == enSaveMode::EmptyMode);
        }

        void clsBankClient::Print() {
            std::cout << "\nClient Card:";
            std::cout << "\n___________________";
            std::cout << "\nFirstName   : " << GetFirstName();
            std::cout << "\nLastName    : " << GetLastName();
            std::cout << "\nFull Name   : " << GetFullName();
            std::cout << "\nAge         : " << GetAge();
            std::cout << "\nEmail       : " << GetEmail();
            std::cout << "\nPhone       : " << GetPhoneNumber();
            std::cout << "\nAcc. Number : " << _AccountNumber;
            std::cout << "\nPassword    : " << _PinCode;
            std::cout << "\nBalance     : " << _AccountBalance;
            std::cout << "\n___________________\n";
        }

        clsBankClient clsBankClient::Find(std::string AccountNumber) {
            std::fstream ClientsFile;
            ClientsFile.open("Clients.txt", std::ios::in); // read mode

            if (ClientsFile.is_open()) {
                std::string Line;
                while (getline(ClientsFile, Line)) {
                    clsBankClient objClient = _ConvertLineToClientObj(Line);
                    if (objClient.GetAccountNumber() == AccountNumber) {
                        ClientsFile.close();
                        return objClient;
                    }
                }
            }
            return _GetEmptyClientObj();
        }
        clsBankClient clsBankClient::Find(std::string AccountNumber, std::string PinCode) {
            std::fstream ClientsFile;
            ClientsFile.open("Clients.txt", std::ios::in); // read mode

            if (ClientsFile.is_open()) {
                std::string Line;
                while (getline(ClientsFile, Line)) {
                    clsBankClient objClient = _ConvertLineToClientObj(Line);
                    if (objClient.GetAccountNumber() == AccountNumber && objClient.GetPinCode() == PinCode) {
                        ClientsFile.close();
                        return objClient;
                    }
                }
                ClientsFile.close();
            }
            return _GetEmptyClientObj();
        }

        bool clsBankClient::IsClientExist(std::string AccountNumber) {
            clsBankClient BankClient = clsBankClient::Find(AccountNumber);
            return !BankClient.IsEmpty();
        }

        // Lesson02: Update Client
        clsBankClient::enSaveResults clsBankClient::Save() {
            switch (_SaveMode) {
            case enSaveMode::EmptyMode: /*Lesson02: Update Client*/
                return enSaveResults::svFailedEmptyObj;
                break;
            case enSaveMode::UpdateMode: /*Lesson02: Update Client*/
                _Update();
                return enSaveResults::svSuccess;
                break;
            case enSaveMode::AddNewMode: /*Lesson03: Add New Mode*/
                if (clsBankClient::IsClientExist(_AccountNumber))
                    return enSaveResults::svFailedAccountNumberExists;
                else {
                    _AddNew();

                    _SaveMode = enSaveMode::UpdateMode;
                    return enSaveResults::svSuccess;
                }
            }
        }

        // Lesson03: Add New Client
        clsBankClient clsBankClient::GetAddNewClientObj(std::string AccountNumber) {
            return clsBankClient(enSaveMode::AddNewMode, "", "", 0, "", "", AccountNumber, "", 0);
        }

        // Lesson04: Delete Client
        bool clsBankClient::Delete() {
            std::vector<clsBankClient> vClients;
            vClients = _LoadClientsDataFromFile();

            for (clsBankClient& C : vClients) {
                if (C.GetAccountNumber() == _AccountNumber) {
                    C._MarkedToDelete = true;
                    break;
                }
            }
            _SaveClientsDataToFile(vClients);
            *this = _GetEmptyClientObj();
            return true;
        }

        // Lesson05: Clients List
        std::vector<core::clsBankClient> core::clsBankClient::GetClientsList() {
            return _LoadClientsDataFromFile();
        }

        // Lesson06: Total Balances
        double clsBankClient::GetTotalBalances() {
            std::vector<clsBankClient> vClients = clsBankClient::GetClientsList();
            double TotalBalances = 0;
            for (clsBankClient& C : vClients) {
                TotalBalances += C.GetAccountBalance();
            }
            return TotalBalances;
        }

        // Lesson014: Deposit Screen
        void clsBankClient::Deposit(float Amount) {
            _AccountBalance += Amount;
            Save();
        }
        bool clsBankClient::Withdraw(float Amount) {
            if (Amount > _AccountBalance)
                return false;
            else {
                _AccountBalance -= Amount;
                Save();
                return true;
            }
        }

        // clsBankClient Definition End
    } // namespace core
} // namespace Project03

// clsBankClient.cpp (backend)
// Project 03: Bank Client
