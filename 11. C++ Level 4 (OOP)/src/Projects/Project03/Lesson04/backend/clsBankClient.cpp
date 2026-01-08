#include "Projects/Project03/Lesson04/backend/clsBankClient.hpp"
#include "Global/clsString.hpp"
#include "Projects/Project01/clsUtil.hpp"
#include <fstream>
using namespace Project01;


// Project03: Bank Project
//    Lesson04: (NoEncryption & Encryption) Save modes & delete client
//        clsBankClient.cpp

namespace Project03 {
    namespace Lesson04 {
        namespace backend {

            // FILE FORMAT:
            /*
                FirstName#//#LastName#//#Age#//#Email#//#PhoneNumber#//#AccountNumber#//#PinCode#//#AccountBalance
                Mohammed#//#Abu-Hadhoud#//#40#//#Mo@gmail.com#//#0799997886#//#A101#//#1234#//#5000.000000
                Khaili#//#Ahmed#//#23#//#KhalilAhmed&gmail.com#//#8928982#//#A102#//#1234#//#8748.000000
            */

            // PRIVATE:
            const std::string clsBankClient::_FileEncryptionKey = "1234"; // used to encrypt/decrypt the file data

            clsBankClient clsBankClient::_GetEmptyBankClientObj() {
                return clsBankClient(enMode::EmptyMode, "", "", 0, "", "", "", "", 0);
             }
            
            clsBankClient clsBankClient::_ConvertLineToBankClientObj(const std::string& Line, const std::string& Seperator) /* moved up */ {
                std::vector<std::string> vClientData = Global::clsString::SplitString(Line, Seperator);
 
                // Validation: Must have exactly 8 fields
                if (vClientData.size() != 8) {
                    std::cerr << "[clsBankClient::_ConvertLineToBankClientObj] Data error: Invalid client record format. Skipping line.\n";
                    return _GetEmptyBankClientObj();
                }

                return clsBankClient(
                    enMode::UpdateMode,
                    vClientData[0], // first name
                    vClientData[1], // last name
                    static_cast<unsigned short>(std::stoi(vClientData[2])), // age
                    vClientData[3], // email
                    vClientData[4], // phone number
                    vClientData[5], // account number
                    vClientData[6], // pin code
                    static_cast<size_t>(std::stoull(vClientData[7])) // account balance
                );
            }



            // struct _stEncryptionMODE /* U need here encrypt & decrypt :) */ /* NEW */ {
             
               // struct stEncrypt /* NEW */{ 


                  std::string clsBankClient::_stEncryptionModeTrue::stEncrypt::_ConvertBankClientObjToLine(const clsBankClient& BankClient, const std::string& Seperator) /*old but new inside struct*/ {

                     std::string sClientRecord = ""; // s stands for string ... st stands for structure

                      // this is so important // FirstName#//#LastName#//#Age#//#Email#//#PhoneNumber#//#AccountNumber#//#PinCode#//#AccountBalance

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

                  void clsBankClient::_stEncryptionModeTrue::stEncrypt::_SaveClientsDataToFile(const std::vector<clsBankClient>& vClients, const std::string& FileName, const std::string& Seperator) {
                      std::fstream ClientsFile(FileName, std::ios::out);
                      if (ClientsFile.is_open()) {
                          for (const clsBankClient& C : vClients) {
                              std::string sDataLine = clsBankClient::_stEncryptionModeTrue::stEncrypt::_ConvertBankClientObjToLine(C,Seperator);
                              ClientsFile << sDataLine << std::endl;
                          }
                          ClientsFile.close();
                      }
                      else {
                          std::cerr << "[clsBankClient::_SaveClientsDataToFileENCRYPTED] File error: Unable to open file for writing.\n";
                      }
                  }


               // } // stEncrypt


               // stDecrypt /* NEW */

                  std::vector <clsBankClient> clsBankClient::_stEncryptionModeTrue::stDecrypt::_LoadClientsDataFromFile(const std::string& FileName, const std::string& Seperator){
                      std::vector<clsBankClient> vClients;
                      std::fstream ClientsFile(FileName, std::ios::in);

                      if (ClientsFile.is_open()) {
                          std::string Line;
                          while (getline(ClientsFile, Line)) {
                              std::string decryptedLine = clsUtil::DecryptString(Line, _FileEncryptionKey);
                              clsBankClient BankClient = _ConvertLineToBankClientObj(decryptedLine, Seperator);
                              if (!BankClient.IsEmpty()) {
                                  vClients.push_back(BankClient);
                              }
                          } ClientsFile.close();
                      }

                      return vClients;
                  }
                 
                  std::vector <std::string> clsBankClient::_stEncryptionModeTrue::stDecrypt::_LoadClientsAccountsNumbersFromFile(const std::string& FileName, const std::string& Seperator) {
                      std::vector<std::string> vAccountNumbers;
                      std::fstream ClientsFile(FileName, std::ios::in);
                      if (ClientsFile.is_open()) {
                          std::string Line;
                          while (getline(ClientsFile, Line)) {
                              std::string decryptedLine = clsUtil::DecryptString(Line, _FileEncryptionKey);
                              std::vector<std::string> vClientData = Global::clsString::SplitString(decryptedLine, Seperator);
                              if (vClientData.size() != 8) {
                                  std::cerr << "[clsBankClient::_LoadClientsAccountsNumbersFromFileDECRYPTED] Data error: Invalid client record format. Skipping line.\n";
                                  continue;
                              }
                              vAccountNumbers.push_back(vClientData[5]);
                          }
                          ClientsFile.close();
                      }
                      return vAccountNumbers;
                  }

               // } // stDecrypt

               // stCommands {

                void clsBankClient::_stEncryptionModeTrue::stCommands::_AddBankClientObjToFile(clsBankClient& BankClient,const std::string& FileName, const std::string& Seperator) /* new */ {
                     std::string ClientDataLine = clsBankClient::_stEncryptionModeTrue::stEncrypt::_ConvertBankClientObjToLine(Seperator);
                     std::fstream ClientsFile(FileName, std::ios::out | std::ios::app);
                     if (ClientsFile.is_open()) {
                         ClientsFile << ClientDataLine << std::endl;
                         ClientsFile.close();
                     }
                     else {
                         std::cerr << "[clsBankClient::_AddBankClientObjToFile] File error: Unable to open file for appending.\n";
                     }
                }

               // }

            
            /* std::string clsBankClient::_ConvertBankClientObjToLineENCRYPTED(const std::string& Seperator) {
                std::string sClientRecord;
                sClientRecord += GetFirstName() + Seperator;
                sClientRecord += GetLastName() + Seperator;
                sClientRecord += std::to_string(GetAge()) + Seperator;
                sClientRecord += GetEmail() + Seperator;
                sClientRecord += GetPhoneNumber() + Seperator;
                sClientRecord += GetAccountNumber() + Seperator;
                sClientRecord += GetPinCode() + Seperator;
                sClientRecord += std::to_string(GetAccountBalance());
                return clsUtil::EncryptString(sClientRecord, _FileEncryptionKey);
            } */ // DELETED

            /* std::string clsBankClient::_ConvertBankClientObjToLineENCRYPTED(const clsBankClient& BankClient, const std::string& Seperator) {
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
            } */ // DELETED

           /* std::vector<clsBankClient> clsBankClient::_LoadClientsDataFromFileDECRYPTED(const std::string& FileName, const std::string& Seperator) {
                std::vector<clsBankClient> vClients;
                std::fstream ClientsFile(FileName, std::ios::in);

                if (ClientsFile.is_open()) {
                    std::string Line;
                    while (getline(ClientsFile, Line)) {
                        std::string decryptedLine = clsUtil::DecryptString(Line, _FileEncryptionKey);
                        clsBankClient BankClient = _ConvertLineToBankClientObj(decryptedLine, Seperator);
                        if (!BankClient.IsEmpty()) {
                            vClients.push_back(BankClient);
                        }
                    }
                    ClientsFile.close();
                }

                return vClients;
            } */ // DELETED


            /*std::vector <std::string> clsBankClient::_LoadClientsAccountsNumbersFromFileDECRYPTED(const std::string& FileName, const std::string& Seperator) {
                std::vector<std::string> vAccountNumbers;
                std::fstream ClientsFile(FileName, std::ios::in);
                if (ClientsFile.is_open()) {
                    std::string Line;
                    while (getline(ClientsFile, Line)) {
                        std::string decryptedLine = clsUtil::DecryptString(Line, _FileEncryptionKey);
                        std::vector<std::string> vClientData = Global::clsString::SplitString(decryptedLine, Seperator);
                        if (vClientData.size() != 8) {
                            std::cerr << "[clsBankClient::_LoadClientsAccountsNumbersFromFileDECRYPTED] Data error: Invalid client record format. Skipping line.\n";
                            continue;
                        }
                        vAccountNumbers.push_back(vClientData[5]);
                    }
                    ClientsFile.close();
                }
                return vAccountNumbers;
            }*/ // DELETED

           /* void clsBankClient::_SaveClientsDataToFileENCRYPTED(const std::vector<clsBankClient>& vClients, const std::string& FileName, const std::string& Seperator) {
                std::fstream ClientsFile(FileName, std::ios::out);
                if (ClientsFile.is_open()) {
                    for (const clsBankClient& C : vClients) {
                        std::string DataLineENCRYPTED = _ConvertBankClientObjToLineENCRYPTED(C,Seperator);
                        ClientsFile << DataLineENCRYPTED << std::endl;
                    }
                    ClientsFile.close();
                }
                else {
                    std::cerr << "[clsBankClient::_SaveClientsDataToFileENCRYPTED] File error: Unable to open file for writing.\n";
                }
            } */ // DELETED

            bool clsBankClient::_IsFileExists(const std::string& FileName) {
                std::fstream File(FileName, std::ios::in);
                if (File.is_open()) {
                    File.close();
                    return true;
                }
                return false;
            }

            bool clsBankClient::_IsFileEmpty(const std::string& FileName) {
                std::fstream File(FileName, std::ios::in);
                if (File.is_open()) {
                    std::string Line;
                    if (getline(File, Line)) {
                        File.close();
                        return false;
                    }
                    File.close();
                    return true;
                }
                return true;
            }

            clsBankClient::enSaveResults clsBankClient::_UpdateClient(const std::string& FileName, const std::string& Seperator) {
                std::vector<clsBankClient> _vClients = clsBankClient::_stEncryptionModeTrue::stDecrypt::_LoadClientsDataFromFile(FileName, Seperator); // new

                if (_vClients.empty()) {
                    std::cout << "No clients found in the file!" << std::endl;
                    return enSaveResults::svFailedAccountWhichWasRequiredToUpdateNotFound;
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
                    clsBankClient::_stEncryptionModeTrue::stEncrypt::_SaveClientsDataToFile(_vClients, FileName, Seperator);
                    return enSaveResults::svSucceeded;
                }
                return enSaveResults::svFailedAccountWhichWasRequiredToUpdateNotFound;
            }

            void clsBankClient::_AddDataLineToFile(const std::string& sDataLine, const std::string& FileName) {
                std::fstream ClientsFile(FileName, std::ios::out | std::ios::app);
                if (ClientsFile.is_open()) {
                    ClientsFile << sDataLine << std::endl;
                    ClientsFile.close();
                }
                else {
                    std::cerr << "[clsBankClient::_AddDataLineToFile] File error: Unable to open file for appending.\n";
                }
            } 

            void clsBankClient::_AddNewClientToFile(const std::string FileName, const std::string Seperator) {
                _AddDataLineToFile(clsBankClient::_stEncryptionModeTrue::stEncrypt::_ConvertBankClientObjToLine(Seperator), FileName);
            }

            // PUBLIC:

            clsBankClient::clsBankClient(const enMode& Mode, const std::string& FirstName, const std::string& LastName,
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
            std::string clsBankClient::GetAccountNumber() const {
                return _AccountNumber;
            }
            size_t clsBankClient::GetAccountBalance() const {
                return _AccountBalance;
            }

            // Save
            clsBankClient::enSaveResults clsBankClient::Save(const std::string& FileName, const std::string Seperator) {
                switch (_Mode) {
                     case enMode::EmptyMode:
                         return enSaveResults::svFailedEmptyObject;
                         break;
                     case enMode::UpdateMode:
                         return _UpdateClient(FileName, Seperator);
                         break;
                     case enMode::AddNewMode:
                         if (IsClientExist(_AccountNumber, FileName, Seperator))
                             return enSaveResults::svFailedClientWhichWasRequiredToAddExists;
                         else {
                             _AddNewClientToFile(FileName, Seperator);
                             return enSaveResults::svSucceeded;
                         } break;


                }
            }

            // Asks
            bool clsBankClient::IsClientExist(std::string AccNumber, const std::string& FileName, const std::string& Seperator) {
                std::vector<clsBankClient> vClients = _LoadClientsDataFromFileDECRYPTED(FileName, Seperator);
                for (const clsBankClient& C : vClients) {
                    if (C.GetAccountNumber() == AccNumber) return true;
                }
                return false;
            }
            bool clsBankClient::IsEmpty() const {
                return (_Mode == enMode::EmptyMode);
            }

            // Clients
            clsBankClient clsBankClient::GetClientInfo(std::string AccNumber, const std::string& FileName, const std::string& Seperator) {
                std::vector<clsBankClient> vClients = _LoadClientsDataFromFileDECRYPTED(FileName, Seperator);
                for (const clsBankClient& C : vClients) {
                    if (C.GetAccountNumber() == AccNumber) return C;
                }
                return _GetEmptyBankClientObj();
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
                else {
                    std::cerr << "[clsBankClient::Print] Invalid Pin Code!" << std::endl;
                }
            }

        } // namespace backend
    } // namespace Lesson04
} // namespace Project03
