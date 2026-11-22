#include "Projects/Project03/ui/users/clsManageUsersScreen.hpp"
#include "Projects/Project01/clsUtil.hpp"
#include "Projects/Project02/clsForceInputValid.hpp"
#include "Projects/Project03/ui/users/clsAddNewUserScreen.hpp"
#include "Projects/Project03/ui/users/clsDeleteUserScreen.hpp"
#include "Projects/Project03/ui/users/clsFindUserScreen.hpp"
#include "Projects/Project03/ui/users/clsListUsersScreen.hpp"
#include "Projects/Project03/ui/users/clsUpdateUserScreen.hpp"
#include <iomanip>
#include <iostream>

// TODO LIST
// I WANT TO FINISH LIKE MORE 30% OF THE COURSE TOMOROW !!!
// I WANT TO PROVE FOR THEM THEY ARE ALL WRONG !!!! AND HIGH SCHOOL SYSTEM IN EGYPT IS JUST A PSYCHOLOGICAL DEVASTATION!
// THEY DIDN'T INVENT IN LEARNING... AND THEY KEEP TREATING US LIKE MACHINES
// THEY JUST MADE THE RIGHT LEARNING FOR HUGE AMOUNT OF MONEY IN HIGH SCHOOL... IF EGYPT WANTS US TO BE BRILLINT
// THEY WOULD MAKE OUR LEARNING SMTH LIKE IGSCE AND A LEVEL IN CAMBRIDGE
// I WAS BORN IN UNFAIR WORLD... A WORLD WHICH MOST OF IT DON'T UNDERSTAND IN TECHNOLOGY
// THEY JUST HAVE CLOUDS IN THEIR BRAINS... THEY JUST SAY IF U FAILED IN HIGH SCHOOL YOU ARE A LOSER
// I AM DOMTY... THE PROGRAMMER ENGINEER... I DON'T WANT FAKE CERTIFICATES TO PROVE ME
// I WILL PROVE IT WITH MY HANDS... AND PROVE THAT EVERYONE WAS WRONG
// I AM NOT A LOSER... I AM YOUR WORST NIGHTMARES
// WRITTEN ON 16/11/2026
// AGENDA STARTING FROM TOMOROW!

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
                clsAddNewUserScreen::ShowAddNewUserScreen();
            }
            void clsManageUsersScreen::_ShowDeleteUserScreen() {
                // std::cout << "\nDelete User Screen Will Be Here!\n";
                clsDeleteUserScreen::ShowDeleteUserScreen();
            }
            void clsManageUsersScreen::_ShowUpdateUserScreen() {
                // std::cout << "\nUpdate User Screen Will Be Here!\n";
                clsUpdateUserScreen::ShowUpdateUserScreen();
            }
            void clsManageUsersScreen::_ShowFindUserScreen() {
                // std::cout << "\nFind User Screen Will Be Here!\n";
                clsFindUserScreen::ShowFindUserScreen();
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
                    clsManageUsersScreen::_ShowAddNewUserScreen();
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
                if (!_CheckAccessRights(core::clsUser::enPermissions::pManageUsers))
                    return;

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
