#pragma once
#include "Projects/Project03/core/clsUser.hpp"
#include "Projects/Project03/ui/base/clsScreen.hpp"

namespace Project03 {
    namespace ui {
        namespace users {
            class clsDeleteUserScreen : private base::clsScreen {
            private:
                static void _PrintUser(core::clsUser User);

            public:
                static void ShowDeleteUserScreen();
            };
        } // namespace users
    } // namespace ui
} // namespace Project03