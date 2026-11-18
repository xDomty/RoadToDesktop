#include "Projects/Project03/ui/transactions/clsTotalBalancesScreen.hpp"
#include "Global/clsString.hpp"
#include "Projects/Project03/core/clsBankClient.hpp"
#include <iomanip>
#include <vector>

namespace Project03 {
    namespace ui {
        namespace transactions {
            // private:
            void clsTotalBalancesScreen::_PrintClientRecordBalanceLine(core::clsBankClient BankClient) {
                std::cout << std::setw(25) << std::left << "" << "| " << std::setw(15) << std::left << BankClient.GetAccountNumber();
                std::cout << "| " << std::setw(40) << std::left << BankClient.GetFullName();
                std::cout << "| " << std::setw(12) << std::left << BankClient.GetAccountBalance();
            }

            // public:
            void clsTotalBalancesScreen::ShowTotalBalances() {
                std::vector<core::clsBankClient> vClients = core::clsBankClient::GetClientsList();

                std::string Title = "\t  Balances List Screen";
                std::string SubTitle = "\t    (" + std::to_string(vClients.size()) + ") Client(s).";

                _DrawScreenHeader(Title, SubTitle);

                std::cout << std::setw(25) << std::left << "" << "\n\t\t_______________________________________________________";
                std::cout << "__________________________\n"
                          << std::endl;

                std::cout << std::setw(25) << std::left << "" << "| " << std::left << std::setw(15) << "Account Number";
                std::cout << "| " << std::left << std::setw(40) << "Client Name";
                std::cout << "| " << std::left << std::setw(12) << "Balance";
                std::cout << std::setw(25) << std::left << "" << "\t\t_______________________________________________________";
                std::cout << "__________________________\n"
                          << std::endl;

                double TotalBalances = core::clsBankClient::GetTotalBalances();

                if (vClients.size() == 0)
                    std::cout << "\t\t\t\tNo Clients Available In the System!";
                else

                    for (core::clsBankClient Client : vClients) {
                        _PrintClientRecordBalanceLine(Client);
                        std::cout << std::endl;
                    }

                std::cout << std::setw(25) << std::left << "" << "\n\t\t_______________________________________________________";
                std::cout << "__________________________\n"
                          << std::endl;

                std::cout << std::setw(8) << std::left << "" << "\t\t\t\t\t\t\t     Total Balances = " << TotalBalances << std::endl;
                std::cout << std::setw(8) << std::left << "" << "\t\t\t\t  ( " << Global::clsString::NumberToText(TotalBalances) << ")";
            }

        } // namespace transactions

    } // namespace ui
} // namespace Project03
