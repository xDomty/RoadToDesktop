#pragma once
#include "clsPerson.hpp"
#include <vector>

// Project03: Bank Project
	 // Lesson02: Update Client
		 // clsBankClient.hpp

namespace Project03 {

    namespace Lesson02 {
    
		class clsBankClient : public clsPerson {
            public:  
				enum class enMode : short {
					EmptyMode,
					UpdateMode
				};

		    private: // PRIVATE MEMBERS
		        enMode _Mode;
		    	std::string _AccountNumber;
		    	std::string _PinCode;
		    	size_t _AccountBalance;

				static const std::string _FileEncryptionKey; // used to encrypt/decrypt the file data

		    	static clsBankClient _ConvertLineToBankClientObj(const std::string& Line, const std::string &Seperator = "#//#");
		    	static std::string _ConvertBankClientObjToLineENCRYPTED(const clsBankClient& BankClient, const std::string &Seperator = "#//#"); //mhm
		    	static std::vector <clsBankClient> _LoadClientsDataFromFileDECRYPTED(const std::string& FileName = "Clients.txt", const std::string &Seperator = "#//#");
		    	static void _AddBankClientObjToFile(const clsBankClient& BankClient, const std::string& FileName, const std::string &Seperator = "#//#");
				static void _SaveClientsDataToFileENCRYPTED(const std::vector <clsBankClient> &vClients, const std::string &FileName = "Clients.txt", const std::string &Seperator = "#//#");
				static bool _IsFileExists(const std::string& FileName = "Clients.txt");
				static bool _IsFileEmpty(const std::string& FileName = "Clients.txt");
		    	bool _UpdateClient(const std::string& FileName = "Clients.txt", const std::string &Seperator = "#//#");
		    	void _AddDataLineToFile(const std::string &sDataLineENCRYPTED, const std::string& FileName = "Clients.txt");
		    	static clsBankClient _GetEmptyBankClientObj();
				// i am stuck somehow ._. wait give me a second to think about it
		        
				
		    
		    public: // PUBLIC MEMBERS
		    	clsBankClient(const enMode &Mode, const std::string& FirstName, const std::string& LastName,
		    	const unsigned short& Age, const std::string& Email, const std::string& PhoneNumber,
		    	const std::string& AccountNumber, const std::string& PinCode, const size_t AccountBalance);
		    
		    	//Setters
		    	void SetPinCode(const std::string PinCode); 
		    	void SetAccountBalance(const size_t AccountBalance);
		    
		    	// Getters
				std::string GetPinCode() const; 
		    	std::string GetAccountNumber() const; // Read ONLY (okie makes sense)
		    	size_t GetAccountBalance() const; // ok now the idea is clear
				
		        // SAVE
				enum class enSaveResults : short {
					svFailedEmptyObject,
					svSucceeded
				};
				// enSaveResults Save();
				// bool Save(const std::string& FileName = "Clients.txt", const std::string Seperator = "#//#");
				enSaveResults Save(const std::string& FileName = "Clients.txt", const std::string Seperator = "#//#");

				// ASKS
				static bool IsClientExist(std::string AccountNumber, const std::string& FileName = "Clients.txt", const std::string& Seperator = "#//#");
				bool IsEmpty() const;

				// Clients
				static clsBankClient GetClientInfo(std::string AccountNumber, const std::string& FileName = "Clients.txt", const std::string& Seperator = "#//#");

				// Print
				void Print(std::string PinCode);

		}; // class clsBankClient : public clsPerson

    };

} 

// clsBankClient.hpp
  // Lesson02: Update Client
	 // Project03: Bank Project