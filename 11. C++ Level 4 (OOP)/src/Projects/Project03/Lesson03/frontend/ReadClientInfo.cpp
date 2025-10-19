#include "Projects/Project03/Lesson03/frontend/BackendConnection.hpp"
#include "Projects/Project03/Lesson03/frontend/ReadClientInfo.hpp"
#include "Global/clsDate.hpp"
#include "Global/clsString.hpp"
#include "Projects/Project02/clsForceInputValid.hpp"
#include "Projects/Project01/clsUtil.hpp"
#include <iostream>
#include <limits>

// Project03: Bank Project
// Lesson03: Add Client
// run.cpp


namespace Project03 {
    namespace Lesson03 {
        namespace frontend {

            clsBankClient ReadClientInfo(std::string AccountNumber, clsBankClient::enMode classMode) {
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


                return clsBankClient (
                    classMode,
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
        }
    }
}

// run.cpp
// Lesson03: Add Client
// Project03: Bank Project