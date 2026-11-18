// Project 3: clsBankClient
// clsBankClient.hpp
#pragma once
#include "clsPerson.hpp"
#include <cstddef>
#include <vector>

namespace Project03 {
    namespace core {
        // FILE FORMAT:
        /*
            FirstName#//#LastName#//#Age#//#Email#//#PhoneNumber#//#AccountNumber#//#PinCode#//#AccountBalance
            Mohammed#//#Abu-Hadhoud#//#40#//#Mo@gmail.com#//#0799997886#//#A101#//#1234#//#5000.000000
            Khaili#//#Ahmed#//#23#//#KhalilAhmed&gmail.com#//#8928982#//#A102#//#1234#//#8748.000000
        */

        class clsBankClient : public clsPerson {
        public:
            // Lesson01: Find Client
            enum class enSaveMode { EmptyMode,  /*Lesson01: FindClient*/
                                    UpdateMode, /*Lesson01: Find Client*/
                                    AddNewMode /*Lesson03: Add New Client*/ };
            // Lesson02: Update Client
            enum class enSaveResults { svFailedEmptyObj,            /*Lesson02: Update Client*/
                                       svFailedAccountNumberExists, /*Lesson03: Add New Client*/
                                       svSuccess,                   /*Lesson02: Update Client*/
            };

        private:
            // Lesson01: Find Client
            enSaveMode _SaveMode;
            std::string _AccountNumber;
            std::string _PinCode;
            float _AccountBalance;

            static clsBankClient _ConvertLineToClientObj(std::string Line, std::string Seperator = "#//#");
            static std::string _ConvertClientObjToLine(clsBankClient objBankClient, std::string Seperator = "#//#");
            static clsBankClient _GetEmptyClientObj();

            // Lesson02: Update Client
            static std::vector<clsBankClient> _LoadClientsDataFromFile();
            static void _SaveClientsDataToFile(std::vector<clsBankClient> vClients);
            void _Update();

            // Lesson03: Add New Client
            void _AddDataLineToFile(std::string sDataLine);
            void _AddNew();

            // Lesson04: Delete Client
            bool _MarkedToDelete = false;

        public:
            // Lesson01: Find Client
            clsBankClient(enSaveMode SaveMode, std::string FirstName, std::string LastName, unsigned short Age, std::string Email, std::string PhoneNumber, std::string AccountNumber, std::string PinCode, float AccountBalance);

            // Setters
            // Lesson01: Find Client
            void SetPinCode(const std::string PinCode);
            void SetAccountBalance(const size_t AccountBalance);

            // Getters
            // Lesson01: Find Client
            std::string GetPinCode() const;
            std::string GetAccountNumber() const;
            size_t GetAccountBalance() const;

            // Main Functions
            // Lesson01: Find Client
            bool IsEmpty();
            void Print();

            static clsBankClient Find(std::string AccountNumber);
            static clsBankClient Find(std::string AccountNumber, std::string PinCode);

            static bool IsClientExist(std::string AccountNumber);

            // Lesson02: Update Client
            enSaveResults Save(); // -> added lesson(3) edits (see src)

            // Lesson03: Add New Client
            static clsBankClient GetAddNewClientObj(std::string AccountNumber);

            // Lesson04: Delete Client
            bool Delete();

            // Lesson05: Clients List
            static std::vector<core::clsBankClient> GetClientsList();

            // Lesson06: Total Balances
            static double GetTotalBalances();

            // Lesson014: deposit screen
            void Deposit(float Amount);
            bool Withdraw(float Amount);
        }; // clsBankClient
    } // namespace core
} // namespace Project03

// clsBankClient.hpp
// Project 3: clsBankClient
