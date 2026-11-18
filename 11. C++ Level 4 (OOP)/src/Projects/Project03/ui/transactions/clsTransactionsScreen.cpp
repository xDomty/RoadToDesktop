#include "Projects/Project03/ui/transactions/clsTransactionsScreen.hpp"
#include "Projects/Project01/clsUtil.hpp"
#include "Projects/Project02/clsForceInputValid.hpp"
#include "Projects/Project03/ui/transactions/clsDepositScreen.hpp"
#include "Projects/Project03/ui/transactions/clsTotalBalancesScreen.hpp"
#include "Projects/Project03/ui/transactions/clsWithdrawScreen.hpp"
#include <iomanip>

namespace Project03 {
    namespace ui {
        namespace transactions {

            // private:

            short clsTransactionsScreen::_ReadTransactionsMenuOption() {
                std::cout << std::setw(37) << std::left << "" << "Choose what do u want to do? [1 -> 4]? ";
                short Choice = Project02::clsForceInputValid::NumberBetween("", 1, 4, "");
                return Choice;
            }

            void clsTransactionsScreen::_ShowDepositScreen() {
                // std::cout << "deposit screen";
                clsDepositScreen::ShowDepositScreen();
            }
            void clsTransactionsScreen::_ShowWithdrawScreen() {
                // std::cout << "Witdraw screen";
                clsWithdrawScreen::ShowWithdrawScreen();
            }
            void clsTransactionsScreen::_ShowTotalBalancesScreen() {
                // std::cout << "balances screen";
                clsTotalBalancesScreen::ShowTotalBalances();
            }
            void clsTransactionsScreen::_GoBackToTransactionsMenu() {
                std::cout << std::endl
                          << "\n";
                Project01::clsUtil::pressAnyKeyToContinue("Press Any Key To Go Back To TRANSACTIONS MENU");
                ShowTransactionsMenu();
            }

            void clsTransactionsScreen::_PerformTransactionsMenuOption(_enTransactionsMenuOptions TransactionsMenuOption) {
                switch (TransactionsMenuOption) {
                case _enTransactionsMenuOptions::eDeposit:
                    Project01::clsUtil::ClearScreen();
                    _ShowDepositScreen();
                    _GoBackToTransactionsMenu();
                    break;
                case _enTransactionsMenuOptions::eWithdraw:
                    Project01::clsUtil::ClearScreen();
                    _ShowWithdrawScreen();
                    _GoBackToTransactionsMenu();
                    break;
                case _enTransactionsMenuOptions::eShowTotalBalance:
                    Project01::clsUtil::ClearScreen();
                    _ShowTotalBalancesScreen();
                    _GoBackToTransactionsMenu();
                    break;
                case _enTransactionsMenuOptions::eShowMainMenu:
                    break; // do nothing bcs it will handle it automatically!
                }
            }

            // public:
            void clsTransactionsScreen::ShowTransactionsMenu() {
                Project01::clsUtil::ClearScreen();
                _DrawScreenHeader("\t  Transactions Screen");

                std::cout << std::setw(37) << std::left << "" << "===========================================\n";
                std::cout << std::setw(37) << std::left << "" << "\t\t  Transactions Menue\n";
                std::cout << std::setw(37) << std::left << "" << "===========================================\n";
                std::cout << std::setw(37) << std::left << "" << "\t[1] Deposit.\n";
                std::cout << std::setw(37) << std::left << "" << "\t[2] Withdraw.\n";
                std::cout << std::setw(37) << std::left << "" << "\t[3] Total Balances.\n";
                std::cout << std::setw(37) << std::left << "" << "\t[4] Main Menue.\n";
                std::cout << std::setw(37) << std::left << "" << "===========================================\n";

                _PerformTransactionsMenuOption((_enTransactionsMenuOptions)_ReadTransactionsMenuOption());
            }
        } // namespace transactions
    } // namespace ui
} // namespace Project03
