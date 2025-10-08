#include "Projects/Project03/Lesson02/clsBankClient.hpp"
#include "Projects/Project01/clsUtil.hpp" // for Project01::clsUtil:: (DecryptString | EncryptString)
#include <fstream>
#include <iostream>

using namespace Project01;

// Project03: Bank Project
//    Lesson02: Update Client
//        clsBankClient.cpp

namespace Project03 {

    namespace Lesson02 {

        // Clients.txt file format:

		/* FirstName#//#LastName#//#Age#//#Email#//#PhoneNumber#//#AccountNumber#//#PinCode#//#AccountBalance
           Mohammed#//#Abu-Hadhoud#//#40#//#Mo@gmail.com#//#0799997886#//#A101#//#1234#//#5000.000000 
           Khaili#//#Ahmed#//#23#//#KhalilAhmed&gmail.com#//#8928982#//#A102#//#1234#//#8748.000000
		*/ 

		// clsBankClient class Definition Starts Here
   
           // PUBLIC:
              // following is in the header btw
                /*
                
                   enum class enMode : short {
					   EmptyMode,
					   UpdateMode
			       };

                */

           // PRIVATE:
          
              clsBankClient::enMode _Mode;
              std::string _AccountNumber = "";
              std::string _PinCode = "";
              size_t _AccountBalance = 0;

              const std::string clsBankClient::_FileEncryptionKey = "1234"; // used to encrypt/decrypt the file data

              clsBankClient clsBankClient::_ConvertLineToBankClientObj(const std::string& Line, const std::string& Seperator) {
                  std::vector <std::string> vClientData;
                        vClientData = Global::clsString::SplitString(Line, Seperator);
             
                        // Validation: Must have exactly 8 fields
                        if (vClientData.size() != 8) {
                            std::cerr << "Data error: Invalid client record format. Skipping line.\n";
                            return _GetEmptyBankClientObj();
                        }
                        
             
                        return clsBankClient(
                            enMode::UpdateMode,
                            vClientData[0],                 /*first name*/
                            vClientData[1],                 /*last name*/
                            static_cast<unsigned short>(std::stoi(vClientData[2])),      /*age*/  
                            vClientData[3],                 /*email*/
                            vClientData[4],                 /*Phone number*/
                            vClientData[5],                 /*Account Number*/
                            vClientData[6],                 /*PinCode*/
                            static_cast<size_t>(std::stoull(vClientData[7]))       /*Account Balance*/
                        );
              }

              std::string clsBankClient::_ConvertBankClientObjToLineENCRYPTED(const clsBankClient& BankClient, const std::string &Seperator) {
	  	       			std::string sClientRecord = ""; // s stands for string ... st stands for structure
	  	       			
	  	       			// this is so important	// FirstName#//#LastName#//#Age#//#Email#//#PhoneNumber#//#AccountNumber#//#PinCode#//#AccountBalance
              
	  	       			sClientRecord += BankClient.GetFirstName() + Seperator;
	  	       			sClientRecord += BankClient.GetLastName() + Seperator;
	  	       			sClientRecord += std::to_string(BankClient.GetAge()) + Seperator;
	  	       			sClientRecord += BankClient.GetEmail() + Seperator;
	  	       			sClientRecord += BankClient.GetPhoneNumber() + Seperator;
	  	       			sClientRecord += BankClient.GetAccountNumber() + Seperator;
	  	       			sClientRecord += BankClient.GetPinCode() + Seperator;
	  	       			sClientRecord += std::to_string(BankClient.GetAccountBalance());
	  	       			// Encrypt the line with the PinCode
	  	       			return clsUtil::EncryptString(sClientRecord, _FileEncryptionKey);
              }

              std::vector <clsBankClient> clsBankClient::_LoadClientsDataFromFileDECRYPTED(const std::string& FileName, const std::string &Seperator ){
	  	       		std::vector <clsBankClient> vClients;
	  	       		std::fstream ClientsFile;
	  	       		ClientsFile.open(FileName, std::ios::in);
              
	  	       		if (ClientsFile.is_open()){
                             std::string Line;
	  	       			while (getline(ClientsFile,Line)){
                                 std::string decryptedLine;
                                 decryptedLine = clsUtil::DecryptString(Line,_FileEncryptionKey);
                                 clsBankClient BankClient = _ConvertLineToBankClientObj(decryptedLine, Seperator);
                                 if (!BankClient.IsEmpty()) {
                                     vClients.push_back(BankClient);
                                 }
	  	       			}
	  	       			ClientsFile.close();
	  	       		}

	  	       		return vClients; 
              } 
              
              void clsBankClient::_AddBankClientObjToFile(const clsBankClient& BankClient, const std::string& FileName, const std::string &Seperator) {
                   std::string ClientDataLineENCRYPTED = _ConvertBankClientObjToLineENCRYPTED(BankClient, Seperator);
                   
                   std::fstream ClientsFile;
                   ClientsFile.open(FileName, std::ios::out | std::ios::app); // append mode
                   
                   if (ClientsFile.is_open()) {
                       ClientsFile << ClientDataLineENCRYPTED << std::endl;
                       ClientsFile.close();
                   } else {
                        std::cerr << "File error: Unable to open file for appending.\n";
                   }
              }
              
              void clsBankClient::_SaveClientsDataToFileENCRYPTED(const std::vector <clsBankClient> &vClients, const std::string &FileName, const std::string &Seperator) {
                  std::fstream ClientsFile;
                  ClientsFile.open(FileName, std::ios::out); // open in write mode (this will overwrite the file)
                  
                  if (ClientsFile.is_open()) {

                       for (const clsBankClient& C : vClients) {
                           std::string DataLineENCRYPTED = _ConvertBankClientObjToLineENCRYPTED(C, Seperator);
                           ClientsFile << DataLineENCRYPTED << std::endl; // write the data line to the file
                       }
                       ClientsFile.close();

                  } else {
                       std::cerr << "File error: Unable to open file for writing.\n";
                  }
              }
              
              bool clsBankClient::_IsFileExists(const std::string& FileName) { 
                  std::fstream File;
                  File.open(FileName, std::ios::in);
                  if (File.is_open()) {
                      File.close();
                      return true; // file exists
                  } 
                  else {
                      return false; // file does not exist
                  }
              };

              bool clsBankClient::_IsFileEmpty(const std::string& FileName) {
                  std::fstream File; 
                  File.open(FileName, std::ios::in);

                  if (File.is_open()) {
                       std::string Line;

                       if (getline(File, Line)) {
                          File.close();
                          return false; // file is not empty
                       }

                       else {
                          File.close();
                          return true; // file is empty
                       }
                  } return true; //yah  

              }

             bool clsBankClient::_UpdateClient(const std::string& FileName, const std::string &Seperator) {
                  std::vector <clsBankClient> _vClients;
                  _vClients = _LoadClientsDataFromFileDECRYPTED(FileName, Seperator);

                  if (_vClients.empty()) {
                      std::cout << "No clients found in the file!" << std::endl; return false;
                  }

                  bool updated = false;

                  for (clsBankClient& C : _vClients) {
                      if (C.GetAccountNumber() == GetAccountNumber()) {
                           C = *this; 
                           updated = true;
                           break;
                      }
                  } 

                  if (updated) {
                     _SaveClientsDataToFileENCRYPTED(_vClients, FileName, Seperator); // save the updated clients data to the file
                  } else {
                     std::cerr << "Update error: Account number not found for update.\n";
                  } return updated;
             }
         
             void clsBankClient::_AddDataLineToFile(const std::string &sDataLineENCRYPTED, const std::string& FileName) {
                  std::fstream ClientsFile;
                  ClientsFile.open(FileName, std::ios::out | std::ios::app); // open in append mode
                  
                  if (ClientsFile.is_open()) {
                      ClientsFile << sDataLineENCRYPTED << std::endl; // write the data line to the file
                      ClientsFile.close();
                  } else {
                      std::cerr << "File error: Unable to open file for appending.\n";
                  }
             };

             clsBankClient clsBankClient::_GetEmptyBankClientObj() {
                  return clsBankClient(enMode::EmptyMode,"", "", 0 , "", "", "", "", 0);
             };

     // PUBLIC:
             
             clsBankClient::clsBankClient(const enMode &Mode,const std::string& FirstName, const std::string& LastName,
                                   const unsigned short& Age, const std::string& Email, const std::string& PhoneNumber,
                                   const std::string& AccountNumber, const std::string& PinCode, const size_t AccountBalance)
                                   : clsPerson(FirstName, LastName, Age, Email, PhoneNumber) {
                      _AccountNumber = AccountNumber;
                      _PinCode = PinCode;
                      _AccountBalance = AccountBalance;
					  _Mode = Mode;
             }

			// Setters
             void clsBankClient::SetPinCode(const std::string PinCode) {
                 _PinCode = PinCode;
             } 
		     void clsBankClient::SetAccountBalance(const size_t AccountBalance) {
                 _AccountBalance = AccountBalance;
             }

			// Getters
	         std::string clsBankClient::GetPinCode() const {
                return _PinCode; 
	    	 }
	    	 std::string clsBankClient::GetAccountNumber() const { // Read ONLY FUNCTION :D
                return _AccountNumber; 
	    	 }
	    	 size_t clsBankClient::GetAccountBalance() const {
                return _AccountBalance; 
	    	 } 

             // following is in the header btw
             /*
                  static enum class enSaveResults : short {
				    	svFailedEmptyObject,
				    	svSucceeded
				  };
             */

             clsBankClient::enSaveResults clsBankClient::Save(const std::string& FileName, const std::string Seperator)
             {
                 switch (_Mode)
                 {
                 case enMode::EmptyMode:
                 {
                     return enSaveResults::svFailedEmptyObject;
                 }

                 case enMode::UpdateMode:
                 {
					 _UpdateClient(FileName,Seperator);
                     return enSaveResults::svSucceeded;
                 }
                 }
			 }

            // Asks
             bool clsBankClient::IsClientExist(std::string AccNumber, const std::string& FileName, const std::string& Seperator) {
                  std::vector <clsBankClient> vClients = _LoadClientsDataFromFileDECRYPTED(FileName,Seperator);
                  for (const clsBankClient& C : vClients) {
                      if (C.GetAccountNumber() == AccNumber) return true; // found
                  }
                  return false; // not found
             }
             bool clsBankClient::IsEmpty() const{
                  return (_Mode == enMode::EmptyMode);
             }
 
            // Clients
            clsBankClient clsBankClient::GetClientInfo(std::string AccNumber, const std::string &FileName, const std::string &Seperator) {
                  std::vector <clsBankClient> vClients = _LoadClientsDataFromFileDECRYPTED(FileName,Seperator);
                  for (const clsBankClient& C : vClients) {
                      if (C.GetAccountNumber() == AccNumber) return C; // found
                  }
                  return _GetEmptyBankClientObj(); // not found
            }

            // Print
            void clsBankClient::Print(std::string PinCode) {
                  if (PinCode == _PinCode) {
                   std::cout << "First Name: " << GetFirstName() << std::endl;
                   std::cout << "Last Name: " << GetLastName() << std::endl;
                   std::cout << "Full Name: " << GetFullName() << std::endl;
                   std::cout << "Age: " << GetAge() << std::endl;
                   std::cout << "Email: " << GetEmail() << std::endl;
                   std::cout << "Phone Number: " << GetPhoneNumber() << std::endl;
                   std::cout << "Account Number: " << GetAccountNumber() << std::endl;
                   std::cout << "Pin Code: " << GetPinCode() << std::endl;
                   std::cout << "Account Balance: " << GetAccountBalance() << std::endl;
                  }
                  else { std::cout << "Invalid Pin Code!" << std::endl; }
            }
      

		// clsBankClient class Definition Ends Here

	} // namespace Lesson01

} // namespace Project03        



// clsBankClient.hpp
  // Lesson02: Update Client
     // Project03: Bank Project