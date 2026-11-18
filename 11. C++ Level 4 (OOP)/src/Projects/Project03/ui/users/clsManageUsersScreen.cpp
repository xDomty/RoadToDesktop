#include "Projects/Project03/ui/users/clsManageUsersScreen.hpp"
#include "Projects/Project01/clsUtil.hpp"
#include "Projects/Project02/clsForceInputValid.hpp"
#include "Projects/Project03/ui/users/clsListUsersScreen.hpp"
#include <iomanip>
#include <iostream>

namespace Project03 {
    namespace ui {
        namespace users {
            // private:
            short clsManageUsersScreen::_ReadManageUsersMenuOption() {
                std::cout << std::setw(37) << std::left << "" << "Choose what do you want to do? [1 to 6]? ";
                short choice = Project02::clsForceInputValid::NumberBetween("", 1, 6, "");
                return choice;
            }
            void clsManageUsersScreen::_GoBackToManageUsersMenu() {
                Project01::clsUtil::pressAnyKeyToContinue("Press Any Key To Go Back To Manage Users Menu...");
                ShowManageUsersMenu();
            }
            void clsManageUsersScreen::_ShowListUsersScreen() {
                // std::cout << "\nList Users Screen Will Be Here!\n";
                clsListUsersScreen::ShowUsersList();
            }
            void clsManageUsersScreen::_ShowAddNewUserScreen() {
                // std::cout << "\nAdd New User Screen Will Be Here!\n";
            }
            void clsManageUsersScreen::_ShowDeleteUserScreen() {
                std::cout << "\nDelete User Screen Will Be Here!\n";
            }
            void clsManageUsersScreen::_ShowUpdateUserScreen() {
                std::cout << "\nUpdate User Screen Will Be Here!\n";
            }
            void clsManageUsersScreen::_ShowFindUserScreen() {
                std::cout << "\nFind User Screen Will Be Here!\n";
            }
            void clsManageUsersScreen::_PerformManageUsersMenuOption(_enManageUsersMenuOptions ManageUsersMenuOption) {
                switch (ManageUsersMenuOption) {
                case _enManageUsersMenuOptions::eListUsers:
                    Project01::clsUtil::ClearScreen();
                    _ShowListUsersScreen();
                    _GoBackToManageUsersMenu();
                    break;
                case _enManageUsersMenuOptions::eAddNewUser:
                    Project01::clsUtil::ClearScreen();
                    _ShowAddNewUserScreen();
                    _GoBackToManageUsersMenu();
                    break;
                case _enManageUsersMenuOptions::eDeleteUser:
                    Project01::clsUtil::ClearScreen();
                    _ShowDeleteUserScreen();
                    _GoBackToManageUsersMenu();
                    break;
                case _enManageUsersMenuOptions::eUpdateUser:
                    Project01::clsUtil::ClearScreen();
                    _ShowUpdateUserScreen();
                    _GoBackToManageUsersMenu();
                    break;
                case _enManageUsersMenuOptions::eFindUser:
                    Project01::clsUtil::ClearScreen();
                    _ShowFindUserScreen();
                    _GoBackToManageUsersMenu();
                    break;
                case _enManageUsersMenuOptions::eMainMenu:
                    // do nothing it will handle it!
                    break;
                }
            }
            // public:
            void clsManageUsersScreen::ShowManageUsersMenu() {
                Project01::clsUtil::ClearScreen();
                _DrawScreenHeader("\t Manage Users Screen");

                std::cout << std::setw(37) << std::left << "" << "===========================================\n";
                std::cout << std::setw(37) << std::left << "" << "\t\t  Manage Users Menue\n";
                std::cout << std::setw(37) << std::left << "" << "===========================================\n";
                std::cout << std::setw(37) << std::left << "" << "\t[1] List Users.\n";
                std::cout << std::setw(37) << std::left << "" << "\t[2] Add New User.\n";
                std::cout << std::setw(37) << std::left << "" << "\t[3] Delete User.\n";
                std::cout << std::setw(37) << std::left << "" << "\t[4] Update User.\n";
                std::cout << std::setw(37) << std::left << "" << "\t[5] Find User.\n";
                std::cout << std::setw(37) << std::left << "" << "\t[6] Main Menue.\n";
                std::cout << std::setw(37) << std::left << "" << "===========================================\n";

                _PerformManageUsersMenuOption((_enManageUsersMenuOptions)_ReadManageUsersMenuOption());
            }
        } // namespace users
    } // namespace ui
} // namespace Project03
