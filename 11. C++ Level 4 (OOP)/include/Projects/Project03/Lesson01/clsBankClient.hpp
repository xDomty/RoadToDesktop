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
		    
		    	static clsBankClient _ConvertLineToBankClientObj(const std::string& Line, const std::string Seperator = "#//#");
		    	static std::string _ConvertBankClientObjToLine(const clsBankClient& BankClient, const std::string Seperator = "#//#"); //mhm
		    	static std::vector <clsBankClient> _ConvertFileIntoBankClientObjVector(const std::string& FileName, const std::string Seperator = "#//#");
		    	static void _WriteBankClientObjToFile(const clsBankClient& BankClient, const std::string& FileName, const std::string Seperator = "#//#");
		    	void _Update();
		    	void _AddDataLineToFile(const std::string& FileName, const std::string Seperator = "#//#") const;
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
				
		    
		    	// FIND
		    	static clsBankClient Find(std::string AccNumber);
		    	static clsBankClient Find(std::string AccNumber, std::string PinCode);
		    
		        // SAVE
				enum enSaveResults {svFailedEmptyObject,svSucceeded};
				enSaveResults Save();

				// ASKS
				static bool IsClientExist(std::string AccountNumber);
				bool IsEmpty() const;


		}; // class clsBankClient : public clsPerson

    };

} 