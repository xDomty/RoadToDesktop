#pragma once
#include "clsPerson.hpp"
#include <vector>

namespace Project03 {

    namespace Lesson01 {
    
		class clsBankClient : public clsPerson {
            public: enum enMode { EmptyMode, UpdateMode }; 

		    private: // PRIVATE MEMBERS
		        enMode _Mode;
		    	std::string _AccountNumber = "";
		    	std::string _PinCode = "";
		    	size_t _AccountBalance = 0;

				static const std::string _FileEncryptionKey; // used to encrypt/decrypt the file data

		    	static clsBankClient _ConvertLineToBankClientObj(const std::string& Line, const std::string Seperator = "#//#");
		    	static std::string _ConvertBankClientObjToLineENCRYPTED(const clsBankClient& BankClient, const std::string Seperator = "#//#"); //mhm
		    	static std::vector <clsBankClient> _LoadClientsDataFromFileDECRYPTED(const std::string& FileName = "Clients.txt", const std::string Seperator = "#//#");
		    	static void _AddBankClientObjToFile(const clsBankClient& BankClient, const std::string& FileName, const std::string Seperator = "#//#");
				static void _SaveClientsDataToFile(std::vector <clsBankClient> vClients, const std::string &FileName = "Clients.txt", const std::string &Seperator = "#//#");
		    	void _UpdateClient(const std::string& FileName = "Clients.txt", const std::string &Seperator = "#//#");
		    	void _AddDataLineToFile(std::string sDataLineENCRYPTED, const std::string& FileName = "Clients.txt");
		    	static clsBankClient _GetEmptyBankClientObj();
				// i am stuck somehow ._. wait give me a second to think about it
		        
				
		    
		    public: // PUBLIC MEMBERS
		        
		    	clsBankClient(const enMode& Mode, const std::string& FirstName, const std::string& LastName,
		    	const unsigned short& Age, const std::string& Email, const std::string& PhoneNumber,
		    	const std::string& AccountNumber, const std::string& PinCode, const size_t AccountBalance);
		    
		    	//Setters
		    	void SetPinCode(const std::string PinCode); 
		    	void SetAccountBalance(const size_t AccountBalance);
		    
		    	// Getters
				std::string GetPinCode() const; 
		    	std::string GetAccountNumber() const; // Read ONLY (okie makes sense)
		    	size_t GetAccountBalance() const; // ok now the idea is clear
				
		    
		    	// Clients
		    	static bool IsClientExist(std::string AccNumber, const std::string &FileName = "Clients.txt", const std::string &Seperator = "#//#");
		        static clsBankClient GetClientInfo(std::string AccNumber, std::string )
				
		        // SAVE
				enum enSaveResults {svFailedEmptyObject,svSucceeded};
				enSaveResults Save();

				// ASKS
				static bool IsClientExist(std::string AccountNumber);
				bool IsEmpty() const;

				// Print
				void Print();

		}; // class clsBankClient : public clsPerson

    };

} 