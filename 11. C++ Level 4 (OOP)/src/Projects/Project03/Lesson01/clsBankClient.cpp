#include "Projects/Project03/Lesson01/clsBankClient.hpp"
#include <string>
#include <vector>
#include <fstream> // this is for file opeations shit XD

// Project03: Bank Project
//    Lesson01: Find Person
//        clsBankClient.cpp

namespace Project03 {

    namespace Lesson01 {


        // Clients.txt file format:

		/* 
		   		FirstName#//#LastName#//#Age#//#Email#//#PhoneNumber#//#AccountNumber#//#PinCode#//#AccountBalance

				Example:
		        Mohammed#//#Abu-Hadhoud#//#40#//#Mo@gmail.com#//#0799997886#//#A101#//#1234#//#5000.000000 
                Khaili#//#Ahmed#//#23#//#KhalilAhmed&gmail.com#//#8928982#//#A102#//#1234#//#8748.000000
		
		*/ // ok that's enough for now

		// clsBankClient class Definition Starts Here
		 
		   // PRIVATE:

		      clsBankClient clsBankClient::_ConvertLineToBankClientObj(const std::string& Line, const std::string Seperator) {
		          std::vector <std::string> vClientData;
                  vClientData = Global::clsString::SplitString(Line, Seperator); // idk if this can be used in the other one

                  return clsBankClient(enMode::UpdateMode,            /*current mode*/
					                   vClientData[0],                 /*first name*/
									   vClientData[1],                 /*last name*/
					                   std::stoi(vClientData[2]),      /*age*/  
					                   vClientData[3],                 /*email*/
					                   vClientData[4],                 /*Phone number*/
									   vClientData[5],                 /*Account Number*/
					                   vClientData[6],                 /*PinCode*/
                                       std::stoi(vClientData[7])       /*Account Balance*/
				                       );           
				  
		      }

			  std::string clsBankClient::_ConvertBankClientObjToLine(const clsBankClient& BankClient, const std::string Seperator) {
				    // so bassically this function will do the opposite of the above function

					std::string sClientRecord = ""; // s stands for string ... st stands for structure
					
				// this is so important	// FirstName#//#LastName#//#Age#//#Email#//#PhoneNumber#//#AccountNumber#//#PinCode#//#AccountBalance

					sClientRecord += BankClient.GetFirstName() + Seperator;
					sClientRecord += BankClient.GetLastName()  + Seperator;
                    sClientRecord += std::to_string(BankClient.GetAge()) + Seperator; // bcs this was an unsigned short
					sClientRecord += BankClient.GetEmail() + Seperator;
					sClientRecord += BankClient.GetPhoneNumber() + Seperator; // fixed
					sClientRecord += BankClient.GetAccountNumber() + Seperator;
					sClientRecord += BankClient.GetPinCode() + Seperator; 
					sClientRecord += std::to_string(BankClient.GetAccountBalance());
					return sClientRecord;

			  }

		      void clsBankClient::_Update() {
		      
		      }

		   // PUBLIC:
              clsBankClient::clsBankClient(const enMode& Mode, const std::string& FirstName, const std::string& LastName,
		                                  const unsigned short& Age, const std::string& Email, const std::string& PhoneNumber,
		                                  const std::string& AccountNumber, const std::string& PinCode, const size_t AccountBalance)
		                                  : clsPerson(FirstName, LastName, Age, Email, PhoneNumber) {
		                                          _Mode = Mode;
		                                          _AccountNumber = AccountNumber;
		                                          _PinCode = PinCode;
		                                          _AccountBalance = AccountBalance;
			  						       } 


			// Setters
			    void clsBankClient::SetPinCode(const std::string PinCode) {
			        _PinCode = PinCode; // ok that's litterally a glitch it's not a error
			    } 
				void clsBankClient::SetAccountBalance(const size_t AccountBalance) {
			        _AccountBalance = AccountBalance;
			    }

			// Getters
				std::string clsBankClient::GetPinCode() const {
			        return _PinCode; //
				}
				std::string clsBankClient::GetAccountNumber() const {
			        return _AccountNumber; // Read ONLY (okie makes sense)
				}
				size_t clsBankClient::GetAccountBalance() const {
			        return _AccountBalance; 
				} 

			// FIND
			   // we will do it later

				




			 

		 
		// clsBankClient class Definition Ends Here



	} // namespace Lesson01

    void run() /*that's temporary to test*/{

		Lesson01::clsBankClient client(Lesson01::clsBankClient::enMode::UpdateMode, "Mohammed", "Abu-Hadhoud", 40, "Hyaaa@gmail.com", "0555555555", "A101", "1234", 5000);

		
	}   // ok amazing for now... the things that starts with _ it can't be used outside the class so since that we are outside it so it will give error if we used it

} // namespace Project03


// clsBankClient.hpp
//    Lesson01: Find Person
//       Project03: Bank Project