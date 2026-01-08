#include "Projects/Project03/Lesson03/frontend/BackendConnection.hpp"
#include "Projects/Project03/Lesson03/frontend/FrontendConnection.hpp"
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
    namespace Lesson04 {
        namespace frontend {

            void AddNewClient() {
                std::string AccountNumber = "";
                AccountNumber = Project01::clsUtil::GenerateWord(23, Project01::clsUtil::enCharType::Digit);

                while (clsBankClient::IsClientExist(AccountNumber)) {
                    AccountNumber = Project01::clsUtil::GenerateWord(23, Project01::clsUtil::enCharType::Digit);
                }

                clsBankClient NewClient = ReadClientInfo(AccountNumber, clsBankClient::enMode::AddNewMode);
                NewClient.Save();
            }

        }
    }
}

// run.cpp
// Lesson03: Add Client
// Project03: Bank Project