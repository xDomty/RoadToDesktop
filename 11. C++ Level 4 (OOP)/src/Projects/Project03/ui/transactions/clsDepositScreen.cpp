#include "Projects/Project03/ui/transactions/clsDepositScreen.hpp"
#include "Global/clsString.hpp"
#include "Projects/Project01/clsUtil.hpp"
#include "Projects/Project02/clsForceInputValid.hpp"
#include "Projects/Project03/core/clsBankClient.hpp"

namespace Project03 {
    namespace ui {
        namespace transactions {
            // private:
            // public:

            void clsDepositScreen::ShowDepositScreen() {
                _DrawScreenHeader("\t   DEPOSIT SCREEN");
                std::string sAccountNumber = Global::clsString::ReadString("Please enter account number? ");

                while (!core::clsBankClient::IsClientExist(sAccountNumber)) {
                    std::cout << "\nClient doesn't exist...\n\n";
                    sAccountNumber = Global::clsString::ReadString("Please enter account number? ");
                }

                core::clsBankClient BankClient = core::clsBankClient::Find(sAccountNumber);
                BankClient.Print();

                float Amount = 0;
                Amount = Project02::clsForceInputValid::Number("\nPlease enter deposit amount? ", "not a valid deposit amount number!");

                bool IsConfirmed = Project01::clsUtil::AreUSure();

                if (IsConfirmed) {
                    BankClient.Deposit(Amount);
                    std::cout << "\nAmount Deposited Successfully!\n";
                    std::cout << "\nNew Balance Is: " << BankClient.GetAccountBalance();
                } else
                    std::cout << "Operation was cancelled!.\n";
            }

        } // namespace transactions
    } // namespace ui
} // namespace Project03
