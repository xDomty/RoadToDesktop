#pragma once
#include "Projects/Project03/ui/base/clsScreen.hpp"

namespace Project03 {
    namespace ui {
        namespace users {
            class clsManageUsersScreen : protected base::clsScreen {
            private:
                enum class _enManageUsersMenuOptions {
                    eListUsers = 1,
                    eAddNewUser = 2,
                    eDeleteUser = 3,
                    eUpdateUser = 4,
                    eFindUser = 5,
                    eMainMenu = 6
                };

                static short _ReadManageUsersMenuOption();
                static void _GoBackToManageUsersMenu();
                static void _ShowListUsersScreen();
                static void _ShowAddNewUserScreen();
                static void _ShowDeleteUserScreen();
                static void _ShowUpdateUserScreen();
                static void _ShowFindUserScreen();
                static void _PerformManageUsersMenuOption(_enManageUsersMenuOptions ManageUsersMenuOption);

            public:
                static void ShowManageUsersMenu();
            };

        } // namespace users
    } // namespace ui

} // namespace Project03
