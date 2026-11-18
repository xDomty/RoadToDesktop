#pragma once
#include "Projects/Project03/ui/base/clsScreen.hpp"

namespace Project03 {
    namespace ui {
        namespace transactions {
            class clsWithdrawScreen : protected base::clsScreen {
            private:
            public:
                static void ShowWithdrawScreen();
            };
        } // namespace transactions
    } // namespace ui
} // namespace Project03
