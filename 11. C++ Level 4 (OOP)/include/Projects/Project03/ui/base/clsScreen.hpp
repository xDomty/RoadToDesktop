#pragma once
#include <iostream>

namespace Project03 {
    namespace ui {
        namespace base {
            class clsScreen {
            protected:
                static void _DrawScreenHeader(std::string Title, std::string SubTitle = "");
            };
        } // namespace base
    } // namespace ui
} // namespace Project03
