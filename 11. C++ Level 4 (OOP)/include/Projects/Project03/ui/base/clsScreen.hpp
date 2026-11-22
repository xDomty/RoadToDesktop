#pragma once
#include "Projects/Project03/core/clsUser.hpp"

namespace Project03 {
    namespace ui {
        namespace base {
            class clsScreen {
            protected:
                static void _DrawScreenHeader(std::string Title, std::string SubTitle = "");
                static bool _CheckAccessRights(core::clsUser::enPermissions Permission);
            };
        } // namespace base
    } // namespace ui
} // namespace Project03
