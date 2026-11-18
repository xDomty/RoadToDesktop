#include "Projects/Project03/ui/users/clsAddNewUserScreen.hpp"
#include "Global/clsString.hpp"
#include "Projects/Project02/clsForceInputValid.hpp"
#include <iostream>

namespace Project03 {
    namespace ui {
        namespace users {

            void clsAddNewUserScreen::_ReadUserInfo(core::clsUser& User) {
                User.SetFirstName(Global::clsString::ReadString("Enter First Name? "));
                User.SetLastName(Global::clsString::ReadString("Enter Last Name? "));
                User.SetAge(Project02::clsForceInputValid::NumberBetween("enter your age? ", 18, 100, "age"));
                User.SetEmail(Global::clsString::ReadString("Enter Email? "));
                User.SetPhoneNumber(Global::clsString::ReadString("Enter Phone Number? "));
                User.SetPassword(Global::clsString::ReadString("Enter Password? "));

                std::cout << "\nEnter Permissions:\n";
                User.SetPermissions(_ReadPermissions());
            }

            void clsAddNewUserScreen::_PrintUser(core::clsUser User) {
                std::cout << "\nUser Card:";
                std::cout << "\n___________________";
                std::cout << "\nFirstName   : " << User.GetFirstName();
                std::cout << "\nLastName    : " << User.GetLastName();
                std::cout << "\nFull Name   : " << User.GetFullName();
                std::cout << "\nAge         : " << User.GetAge();
                std::cout << "\nEmail       : " << User.GetEmail();
                std::cout << "\nPhone       : " << User.GetPhoneNumber();
                std::cout << "\nUser Name   : " << User.GetUserName();
                std::cout << "\nPassword    : " << User.GetPassword();
                std::cout << "\nPermissions : " << User.GetPermissions();
                std::cout << "\n___________________\n";
            }
            short clsAddNewUserScreen::_ReadPermissions() {
                short Permissions = 0;
                char Answer = 'n';
                std::cout << "Do you want to have full access? (y/n) ";
                std::cin >> Answer;
                if (Answer == 'y' || Answer == 'Y')
                    return -1;

                std::cout << "Do you want to give access to the following:\n\n";
                std::cout << "List Clients Access? ";
                std::cin >> Answer;
                if (Answer == 'y' || Answer == 'Y')
                    Permissions += core::clsUser::enPermissions::pListClients;
                std::cout << "Add New Clients Access? ";
                std::cin >> Answer;
                if (Answer == 'y' || Answer == 'Y')
                    Permissions += core::clsUser::enPermissions::pAddNewClient;
                std::cout << "Delete Clients Access? ";
                std::cin >> Answer;
                if (Answer == 'y' || Answer == 'Y')
                    Permissions += core::clsUser::enPermissions::pDeleteClient;
                std::cout << "Update Clients Access? ";
                std::cin >> Answer;
                if (Answer == 'y' || Answer == 'Y')
                    Permissions += core::clsUser::enPermissions::pUpdateClients;
                std::cout << "Find Clients Access? ";
                std::cin >> Answer;
                if (Answer == 'y' || Answer == 'Y')
                    Permissions += core::clsUser::enPermissions::pFindClient;
                std::cout << "Manage Users Access? ";
                std::cin >> Answer;
                if (Answer == 'y' || Answer == 'Y')
                    Permissions += core::clsUser::enPermissions::pManageUsers;

                return Permissions;
            }

            // public:
            void clsAddNewUserScreen::ShowAddNewUserScreen() {

                _DrawScreenHeader("\t  Add New User Screen");

                std::string UserName = "";

                UserName = Global::clsString::ReadString("\nPlease Enter UserName? ");
                while (core::clsUser::IsUserExists(UserName)) {
                    UserName = Global::clsString::ReadString("\nUserName Is Already Used, Choose another one? ");
                }

                core::clsUser NewUser = core::clsUser::GetAddNewUserObj(UserName);

                _ReadUserInfo(NewUser);

                core::clsUser::enSaveResults SaveResult;

                SaveResult = NewUser.Save();

                switch (SaveResult) {
                case core::clsUser::enSaveResults::svSucceeded: {
                    std::cout << "\nUser Addeded Successfully :-)\n";
                    _PrintUser(NewUser);
                    break;
                }
                case core::clsUser::enSaveResults::svFailedEmptyObj: {
                    std::cout << "\nError User was not saved because it's Empty";
                    break;
                }
                case core::clsUser::enSaveResults::svFailedUserExists: {
                    std::cout << "\nError User was not saved because UserName is used!\n";
                    break;
                }
                }
            }

        } // namespace users
    } // namespace ui
}; // namespace Project03
