// this file created

#pragma once
#include "Projects/Project03/ui/base/clsScreen.hpp"

namespace Project03 {
    namespace ui {
        namespace mainmenu {

            class clsMainMenu : protected base::clsScreen {
            public:
                enum class enMainMenuOptions { eListClients = 1,
                                               eAddNewClient = 2,
                                               eDeleteClient = 3,
                                               eUpdateClient = 4,
                                               eFindClient = 5,
                                               eShowTransactionsMenue = 6,
                                               eManageUsers = 7,
                                               eExit = 8 };

            private:
                static short _ReadMainMenuOption();
                static void _GoBackToMainMenu();
                static void _ShowAllClientsScreen();
                static void _ShowAddNewClientsScreen();
                static void _ShowDeleteClientScreen();
                static void _ShowUpdateClientScreen();
                static void _ShowFindClientScreen();
                static void _ShowTransactionsMenu();
                static void _ShowManageUsersMenu();
                static void _ShowEndScreen();
                static void _PerformMainMenuOption(enMainMenuOptions MainMenuOption);

            public:
                static void ShowMainMenu();
            };
        } // namespace mainmenu
    } // namespace ui
} // namespace Project03
