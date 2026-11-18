#include "Projects/Project03/ui/clients/clsFindClientScreen.hpp"
#include "Global/clsString.hpp"
#include "Projects/Project03/core/clsBankClient.hpp"
#include <string>

namespace Project03 {
    namespace ui {
        namespace clients {
            // public:
            void clsFindClientScreen::ShowFindClientScreen() {
                _DrawScreenHeader("\t Find Client Screen");
                std::string AccountNumber;
                AccountNumber = Global::clsString::ReadString("\nPlease Enter Account Number: ");
                while (!core::clsBankClient::IsClientExist(AccountNumber)) {
                    AccountNumber = Global::clsString::ReadString("\nAccount number is not found, choose another one: ");
                }

                core::clsBankClient Client1 = core::clsBankClient::Find(AccountNumber);

                if (!Client1.IsEmpty()) {
                    std::cout << "\nClient Found :-)\n";
                } else {
                    std::cout << "\nClient Was not Found :-(\n";
                }

                Client1.Print();
            }
        } // namespace clients
    } // namespace ui

} // namespace Project03
