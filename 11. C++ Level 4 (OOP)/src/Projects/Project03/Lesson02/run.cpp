#include "Projects/Project03/Lesson02/clsBankClient.hpp" // clsBankClient.hpp
#include "Projects/Project03/Lesson02/run.hpp"
#include "Global/clsDate.hpp"
#include "Global/clsString.hpp"
#include "Projects/Project02/clsForceInputValid.hpp"
#include <iostream>
#include <limits>

// Project03: Bank Project
    // Lesson02: Update Client
       // run.cpp
       
namespace Project03 {

    namespace Lesson02 {

        /*
        clsBankClient::clsBankClient(const std::string& FirstName, const std::string& LastName,
                                   const unsigned short& Age, const std::string& Email, const std::string& PhoneNumber,
                                   const std::string& AccountNumber, const std::string& PinCode, const size_t AccountBalance)
                                   : clsPerson(FirstName, LastName, Age, Email, PhoneNumber)
        */

        void pressAnyKeyToContinue() {
           std::cout << "\nPress any key to continue... ";
           std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Clear input buffer
           std::cin.get();  // Wait for user to press a key
        }

        clsBankClient ReadClientInfo(std::string AccountNumber) {
            std::string FirstName; 
            std::string LastName;
            unsigned short Age;
            std::string Email;
            std::string PhoneNumber;
            std::string PinCode;
            
            std::cout << "Welcome Client :D\n";
            std::cout << "Can u please enter your info??\n\n";

            FirstName = Global::clsString::ReadString("First Name? ");
            LastName = Global::clsString::ReadString("Last Name? ");
            Age = Project02::clsForceInputValid::NumberBetween("PLEASE ENTER A VALID AGE: ", 18, 100, "age");
            Email = Project02::clsForceInputValid::Email("Email? ");
            PhoneNumber = Project02::clsForceInputValid::PhoneNumber("Phone Number? ");
            PinCode = Global::clsString::ReadString("PinCode? ");
            std::cout << std::endl;

            std::cout << "Welcome " << FirstName << " :D\n";
            std::cout << "Your account has been saved to our database (˶˃ ᵕ ˂˶)\n\n";

            std::cout << "Your acc num is: " << AccountNumber << std::endl;
            std::cout << "And of course your balance is: 0 AED (>_<)\n\n";
            pressAnyKeyToContinue();


			clsBankClient::enMode Mode = clsBankClient::enMode::UpdateMode;

            return clsBankClient(
                 clsBankClient::enMode::UpdateMode,
                 FirstName,
                 LastName,
                 Age,
                 Email,
                 PhoneNumber,
                 AccountNumber,
                 PinCode,
                 0
            );

        }
        /*
        
void UpdateClient()
{
    string AccountNumber = "";

    cout << "\nPlease Enter client Account Number: ";
    AccountNumber = clsInputValidate::ReadString();
    
    while (!clsBankClient::IsClientExist(AccountNumber))
    {
        cout << "\nAccount number is not found, choose another one: ";
        AccountNumber = clsInputValidate::ReadString();
    }

    clsBankClient Client1 = clsBankClient::Find(AccountNumber);
    Client1.Print();

    cout << "\n\nUpdate Client Info:";
    cout << "\n____________________\n";

  
    ReadClientInfo(Client1);

    clsBankClient::enSaveResults SaveResult;

    SaveResult = Client1.Save();

    switch (SaveResult)
    {
    case  clsBankClient::enSaveResults::svSucceeded:
    {
        cout << "\nAccount Updated Successfully :-)\n";
        Client1.Print();
        break;
    }
    case clsBankClient::enSaveResults::svFaildEmptyObject:
    {
        cout << "\nError account was not saved because it's Empty";
        break;

    }

    }
}

        */


        bool UpdateClient(const std::string& FileName = "Clients.txt", const std::string& Seperator = "#//#") {
            std::string ClientAccNUM;
            bool found = false;
            do {
                std::cout << "Enter Client Acc NUM: ";
                std::cin >> ClientAccNUM;

                if (!clsBankClient::IsClientExist(ClientAccNUM, FileName, Seperator)) {
                    std::cout << "The client u want to update his info NOT FOUND!\n";
                    std::cout << "Do u want to continue? (1 for y/0 for no) : ";
                    bool Choice = 0; std::cin >> Choice;
                    if (Choice == 0) return false;
                    std::cout << std::endl;
                }
                else {
                    found = true;
                }
            } while (!found);

            std::cout << "\nClient Found (^_^) \n";
            clsBankClient Client = clsBankClient::GetClientInfo(ClientAccNUM, FileName, Seperator);
            std::string PinCode = Global::clsString::ReadString("Please enter the client PinCode to be able to update his info: ");
            unsigned short counter = 0, Attempts = 3;

            while (PinCode != Client.GetPinCode()) {
                counter++;
                if (counter > Attempts) {
                    std::cout << "\nYou have exceeded the maximum number of attempts. Access denied.\n";
                    return false;
                }
                std::cout << "\nIncorrect PinCode. Please try again (" << counter << "/" << Attempts << "): ";
                std::cin >> PinCode;
            }

            std::cout << "\nPinCode is correct (^_^) \n";
            std::cout << "\nClient Current Info: \n";
            Client.Print(PinCode);

            std::cout << "\nPlease enter the new data: \n\n";
            clsBankClient TempClient = ReadClientInfo(ClientAccNUM);

            std::cout << "\nNew Client Info: \n";
            TempClient.Print(TempClient.GetPinCode());

            std::cout << "\nAre u sure u want to update the client info? (1 for y/0 for no) : ";
            bool Choice = 0; std::cin >> Choice;

            if (Choice == 0) std::cout << "USER ABORTED!"; return false;
            clsBankClient::enSaveResults SaveResult = TempClient.Save();


            switch (SaveResult)
            {
                 case clsBankClient::enSaveResults::svFailedEmptyObject:
                 {
                     std::cout << "\nError account was not saved because it's Empty";
                     return false;
                 }
                 case clsBankClient::enSaveResults::svSucceeded:
                 {
                     
                     std::cout << "\nAccount Updated Successfully :-)\n";
                     Client = TempClient;
                     Client.Print(PinCode);
                     return true;
                 }
            }
        }

        void run() {            
            UpdateClient();
        }
        
    }

}

// run.cpp
   // Lesson02: Update Client
      // Project03: Bank Project