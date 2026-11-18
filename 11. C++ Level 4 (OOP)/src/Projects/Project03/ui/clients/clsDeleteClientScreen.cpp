#include "Projects/Project03/ui/clients/clsDeleteClientScreen.hpp"
#include "Global/clsString.hpp"
#include "Projects/Project03/core/clsBankClient.hpp"
#include <string>

namespace Project03 {
    namespace ui {
        namespace clients {
            // public:
            void clsDeleteClientScreen::ShowDeleteClientScreen() {
                _DrawScreenHeader("\t Delete Client Screen");
                std::string sAccountNumber;
                sAccountNumber = Global::clsString::ReadString("Please enter client account number? ");

                while (!core::clsBankClient::IsClientExist(sAccountNumber)) {
                    std::cout << "ERROR: CLIENT ALREADY EXISTS!\n";
                    sAccountNumber = Global::clsString::ReadString("Please enter client account number? ");
                }

                core::clsBankClient objBankClient = core::clsBankClient::Find(sAccountNumber);
                objBankClient.Print();

                char chAnswer;
                std::cout << "Are u sure u want to delete this client? (y/n) ";
                std::cin >> chAnswer;

                if (chAnswer == 'Y' || chAnswer == 'y') {
                    if (objBankClient.Delete()) {
                        std::cout << "Client Deleted!\n";
                        objBankClient.Print();
                    } else {
                        std::cout << "ERROR: client not deleted\n";
                    }
                }
            }
        } // namespace clients
    } // namespace ui
} // namespace Project03
