#pragma once

#include "Projects/Project03/core/clsUser.hpp"
#include "Projects/Project03/ui/base/clsScreen.hpp"

namespace Project03 {
    namespace ui {
        namespace users {
            class clsListUsersScreen : protected base::clsScreen {
            private:
                static void _PrintUserRecordLine(core::clsUser User);

            public:
                static void ShowUsersList();
            };
        } // namespace users
    } // namespace ui
} // namespace Project03
