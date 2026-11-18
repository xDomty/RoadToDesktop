#pragma once
#include "Projects/Project03/ui/base/clsScreen.hpp"

namespace Project03 {
    namespace ui {
        namespace transactions {
            class clsTransactionsScreen : protected ui::base::clsScreen {
            private:
                enum class _enTransactionsMenuOptions {
                    eDeposit = 1,
                    eWithdraw = 2,
                    eShowTotalBalance = 3,
                    eShowMainMenu = 4
                };

                static short _ReadTransactionsMenuOption();
                static void _ShowDepositScreen();
                static void _ShowWithdrawScreen();
                static void _ShowTotalBalancesScreen();
                static void _GoBackToTransactionsMenu();

                static void _PerformTransactionsMenuOption(_enTransactionsMenuOptions TransactionMenuOption);

            public:
                static void ShowTransactionsMenu();
            };

        } // namespace transactions

    } // namespace ui

} // namespace Project03
