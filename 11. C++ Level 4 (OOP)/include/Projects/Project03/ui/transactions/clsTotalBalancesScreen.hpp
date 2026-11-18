#pragma once
#include "Projects/Project03/core/clsBankClient.hpp"
#include "Projects/Project03/ui/base/clsScreen.hpp"

namespace Project03 {
    namespace ui {
        namespace transactions {
            class clsTotalBalancesScreen : protected base::clsScreen {
            private:
                static void _PrintClientRecordBalanceLine(core::clsBankClient BankClient);

            public:
                static void ShowTotalBalances();
            };
        } // namespace transactions
    } // namespace ui
} // namespace Project03
