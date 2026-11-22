#include "Projects/Project03/ui/clients/clsClientsListScreen.hpp"
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

namespace Project03 {
    namespace ui {
        namespace clients {

            // private:
            void clsClientsListScreen::_PrintClientRecordLine(core::clsBankClient Client) {
                std::cout << std::setw(8) << std::left << "" << "| " << std::setw(15) << std::left << Client.GetAccountNumber();
                std::cout << "| " << std::setw(20) << std::left << Client.GetFullName();
                std::cout << "| " << std::setw(12) << std::left << Client.GetPhoneNumber();
                std::cout << "| " << std::setw(20) << std::left << Client.GetEmail();
                std::cout << "| " << std::setw(10) << std::left << Client.GetPinCode();
                std::cout << "| " << std::setw(12) << std::left << Client.GetAccountBalance();
            }

            // public:
            void clsClientsListScreen::ShowClientsList() {
                if (!_CheckAccessRights(core::clsUser::enPermissions::pListClients))
                    return;

                std::vector<core::clsBankClient> vClients = core::clsBankClient::GetClientsList();
                std::string Title = "\t  Client List Screen";
                std::string SubTitle = "\t    (" + std::to_string(vClients.size()) + ") Client(s).";

                _DrawScreenHeader(Title, SubTitle);

                std::cout << std::setw(8) << std::left << "" << "\n\t_______________________________________________________";
                std::cout << "_________________________________________\n"
                          << std::endl;

                std::cout << std::setw(8) << std::left << "" << "| " << std::left << std::setw(15) << "Accout Number";
                std::cout << "| " << std::left << std::setw(20) << "Client Name";
                std::cout << "| " << std::left << std::setw(12) << "Phone";
                std::cout << "| " << std::left << std::setw(20) << "Email";
                std::cout << "| " << std::left << std::setw(10) << "Pin Code";
                std::cout << "| " << std::left << std::setw(12) << "Balance";
                std::cout << std::setw(8) << std::left << "" << "\n\t_______________________________________________________";
                std::cout << "_________________________________________\n"
                          << std::endl;

                if (vClients.size() == 0)
                    std::cout << "\t\t\t\tNo Clients Available In the System!";
                else

                    for (core::clsBankClient Client : vClients) {

                        _PrintClientRecordLine(Client);
                        std::cout << std::endl;
                    }

                std::cout << std::setw(8) << std::left << "" << "\n\t_______________________________________________________";
                std::cout << "_________________________________________\n"
                          << std::endl;
            }
        } // namespace clients
    } // namespace ui

} // namespace Project03
