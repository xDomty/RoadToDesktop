// Project 03: Bank Client
// clsMainScreen.cpp (backend)
// NOTE this file created in lesson07

#include "Projects/Project03/ui/mainmenu/clsMainMenu.hpp"
#include "Projects/Project01/clsUtil.hpp"
#include "Projects/Project02/clsForceInputValid.hpp"
#include "Projects/Project03/ui/clients/clsAddNewClientScreen.hpp"
#include "Projects/Project03/ui/clients/clsClientsListScreen.hpp"
#include "Projects/Project03/ui/clients/clsDeleteClientScreen.hpp"
#include "Projects/Project03/ui/clients/clsFindClientScreen.hpp"
#include "Projects/Project03/ui/clients/clsUpdateClientScreen.hpp"
#include "Projects/Project03/ui/transactions/clsTransactionsScreen.hpp"
#include "Projects/Project03/ui/users/clsManageUsersScreen.hpp"
#include <iomanip>

namespace Project03 {
    namespace ui {
        namespace mainmenu {
            // private:
            short clsMainMenu::_ReadMainMenuOption() {
                std::cout << '\n'
                          << std::setw(37) << std::left << "";
                short choice = Project02::clsForceInputValid::NumberBetween("enter your choice? [1 -> 8] : ", 1, 8, "");
                return choice;
            }

            void clsMainMenu::_GoBackToMainMenu() {
                std::cout << std::setw(37);
                Project01::clsUtil::pressAnyKeyToContinue("Press Any Key To Go Back To Main Menu... ");
                ShowMainMenu();
            }

            void clsMainMenu::_ShowAllClientsScreen() {
                // std::cout << "\nClient List Screen Will be here...\n";
                // Lesson08
                clients::clsClientsListScreen::ShowClientsList();
            }

            void clsMainMenu::_ShowAddNewClientsScreen() {
                // std::cout << "\nAdd New Client Screen Will be here...\n";
                // Lesson09
                clients::clsAddNewClientScreen::ShowAddNewClientScreen();
            }

            void clsMainMenu::_ShowDeleteClientScreen() {
                // std::cout << "\nDelete Client Screen Will be here...\n";
                // Lesson10
                clients::clsDeleteClientScreen::ShowDeleteClientScreen();
            }
            void clsMainMenu::_ShowUpdateClientScreen() {
                // std::cout << "\nUpdate Client Screen Will Be Here\n";
                // Lesson11
                clients::clsUpdateClientScreen::ShowUpdateClientScreen();
            }
            void clsMainMenu::_ShowFindClientScreen() {
                // std::cout << "\nFind Client Screen Will be here...\n";
                // Lesson12
                clients::clsFindClientScreen::ShowFindClientScreen();
            }
            void clsMainMenu::_ShowTransactionsMenu() {
                // std::cout << "\nTransactions Menu Will be here...\n";
                // Lesson13
                transactions::clsTransactionsScreen::ShowTransactionsMenu();
            }
            void clsMainMenu::_ShowManageUsersMenu() {
                // std::cout << "\nUsers Menu Will be here...\n";
                users::clsManageUsersScreen::ShowManageUsersMenu();
            }
            void clsMainMenu::_ShowEndScreen() {
                std::cout << "\nEnd Screen Will Be Here...\n";
            }
            void clsMainMenu::_PerformMainMenuOption(enMainMenuOptions MainMenuOption) {
                switch (MainMenuOption) {
                case enMainMenuOptions::eListClients:
                    Project01::clsUtil::ClearScreen();
                    _ShowAllClientsScreen();
                    _GoBackToMainMenu();
                    break;
                case enMainMenuOptions::eAddNewClient:
                    Project01::clsUtil::ClearScreen();
                    _ShowAddNewClientsScreen();
                    _GoBackToMainMenu();
                    break;
                case enMainMenuOptions::eDeleteClient:
                    Project01::clsUtil::ClearScreen();
                    _ShowDeleteClientScreen();
                    _GoBackToMainMenu();
                    break;

                case enMainMenuOptions::eUpdateClient:
                    Project01::clsUtil::ClearScreen();
                    _ShowUpdateClientScreen();
                    _GoBackToMainMenu();
                    break;

                case enMainMenuOptions::eFindClient:
                    Project01::clsUtil::ClearScreen();
                    _ShowFindClientScreen();
                    _GoBackToMainMenu();
                    break;

                case enMainMenuOptions::eShowTransactionsMenue:
                    Project01::clsUtil::ClearScreen();
                    _ShowTransactionsMenu();
                    _GoBackToMainMenu();
                    break;

                case enMainMenuOptions::eManageUsers:
                    Project01::clsUtil::ClearScreen();
                    _ShowManageUsersMenu();
                    _GoBackToMainMenu();
                    break;

                case enMainMenuOptions::eExit:
                    Project01::clsUtil::ClearScreen();
                    _ShowEndScreen();
                    _GoBackToMainMenu();

                    // login()

                    break;
                }
            }

            // public:
            void clsMainMenu::ShowMainMenu() {
                Project01::clsUtil::ClearScreen();
                _DrawScreenHeader("\t\tMain Screen");

                std::cout << std::setw(37) << std::left << "" << "===========================================\n";
                std::cout << std::setw(37) << std::left << "" << "\t\t\tMain Menu\n";
                std::cout << std::setw(37) << std::left << "" << "===========================================\n";
                std::cout << std::setw(37) << std::left << "" << "\t[1] Show Client List.\n";
                std::cout << std::setw(37) << std::left << "" << "\t[2] Add New Client.\n";
                std::cout << std::setw(37) << std::left << "" << "\t[3] Delete Client.\n";
                std::cout << std::setw(37) << std::left << "" << "\t[4] Update Client Info.\n";
                std::cout << std::setw(37) << std::left << "" << "\t[5] Find Client.\n";
                std::cout << std::setw(37) << std::left << "" << "\t[6] Transactions.\n";
                std::cout << std::setw(37) << std::left << "" << "\t[7] Manage Users.\n";
                std::cout << std::setw(37) << std::left << "" << "\t[8] Logout.\n";
                std::cout << std::setw(37) << std::left << "" << "===========================================\n";

                _PerformMainMenuOption((enMainMenuOptions)_ReadMainMenuOption());
            }
        } // namespace mainmenu

    } // namespace ui

    // NOTE this file created in lesson07
    // clsMainScreen.cpp (backend)
    // Project 03: Bank Client
} // namespace Project03
