#pragma once
#include "clsPerson.hpp"
#include <vector>

// Project03: Bank Project
  // Lesson04: Encryption & Decryption Modes | Delete Clients
   // clsBankClient.hpp (backend)

namespace Project03 {
    namespace Lesson04 {
		namespace backend {

			class clsBankClient : public clsPerson {

			        public:
					    enum class enEncryptionMode {
						      NoEncryption,
						      Encryption
					    };
			        	enum class enMode : short {
			        		EmptyMode,
			        		UpdateMode,
			        		AddNewMode
			        	};
			        	enum class enSaveResults : short {
			        		svFailedEmptyObject,
			        		svFailedAccountWhichWasRequiredToUpdateNotFound,
					        svFailedClientWhichWasRequiredToAddExists,
			        		svSucceeded
			        	};
			        
			        private: // PRIVATE MEMBERS

					enMode _Mode;
			        std::string _AccountNumber;
			        std::string _PinCode;
			        size_t _AccountBalance;
			        static const std::string _FileEncryptionKey; // used to encrypt/decrypt the file data
                    static clsBankClient _GetEmptyBankClientObj();
			        static clsBankClient _ConvertLineToBankClientObj(const std::string& Line, const std::string& Seperator = "#//#");


                    struct _stEncryptionModeFalse /* here we will just use the normal functions */ {

                    };

					struct _stEncryptionModeTrue /* U need here encrypt & decrypt :) */ /* NEW */ {
					
                        struct stEncrypt /* (write mode) OR (return mode) */ /* NEW */ {
                          // return mode
					         static std::string _ConvertBankClientObjToLine(const clsBankClient& BankClient, const std::string& Seperator); // new

                          // write mode
                             static void _SaveClientsDataToFile(const std::vector <clsBankClient>& vClients, const std::string& FileName = "Clients.txt", const std::string& Seperator = "#//#"); // new
					    };

					    struct stDecrypt /* NEW */ { 
					      static std::vector <clsBankClient> _LoadClientsDataFromFile(const std::string& FileName = "Clients.txt", const std::string& Seperator = "#//#"); // new
			        	  static std::vector <std::string> _LoadClientsAccountsNumbersFromFile(const std::string& FileName = "Clients.txt", const std::string& Seperator = "#//#"); // new
					    };

                        struct stCommands /* for using the Encryption Mode */ /* NEW */ {
                          static void _AddBankClientObjToFile(clsBankClient& BankClient, const std::string& FileName = "Clients.txt", const std::string& Seperator = "#//#");

                        };

					};

					
			        	
			        	bool _IsFileExists(const std::string& FileName = "Clients.txt");
			        	bool _IsFileEmpty(const std::string& FileName = "Clients.txt");
				      	enEncryptionMode _CheckFileEncryptionMode(const std::string& FileName = "Clients.txt"); // new
			        	enSaveResults _UpdateClient(const std::string& FileName = "Clients.txt", const std::string& Seperator = "#//#");
			        	void _AddDataLineToFile(const std::string& sDataLine, const std::string& FileName = "Clients.txt");


			        
			        

			        public:
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
			        
			        	// SAVE
			        
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
               //

            void run(){

            }

		}

    };

} 

// clsBankClient.hpp (backend)
  // Lesson03: Add Client
	// Project03: Bank Project
