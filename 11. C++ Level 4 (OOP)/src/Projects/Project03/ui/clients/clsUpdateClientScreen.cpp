#include "Projects/Project03/ui/clients/clsUpdateClientScreen.hpp"
#include "Global/clsString.hpp"
#include <string>

namespace Project03 {
    namespace ui {
        namespace clients {

            // private:
            void clsUpdateClientScreen::_ReadClientInfo(core::clsBankClient& objBankClient) {
                objBankClient.SetFirstName(Global::clsString::ReadString("First Name? "));
                objBankClient.SetLastName(Global::clsString::ReadString("Last Name? "));
                objBankClient.SetAge(std::stoi(Global::clsString::ReadString("Age? ")));
                objBankClient.SetEmail(Global::clsString::ReadString("Email? "));
                objBankClient.SetPhoneNumber(Global::clsString::ReadString("Phone Number? "));
                objBankClient.SetPinCode(Global::clsString::ReadString("Pin Code? "));
                objBankClient.SetAccountBalance(std::stoi(Global::clsString::ReadString("Account Balance? ")));
            }
            void clsUpdateClientScreen::_PrintSaveResults(core::clsBankClient::enSaveResults SaveResult) {
                switch (SaveResult) {
                case core::clsBankClient::enSaveResults::svFailedEmptyObj: /*Lesson02: Update Client*/
                    std::cout << "\nERROR: SAVE FAILED (EMPTY OBJ)\n";
                    break;
                case core::clsBankClient::enSaveResults::svFailedAccountNumberExists:
                    std::cout << "\nERROR: SAVE FAILED (ACCOUNT ALREADY EXISTS)\n"; /*Lesson03: Add New Mode**/
                    break;
                case core::clsBankClient::enSaveResults::svSuccess: /*Lesson02: Update Client*/
                    std::cout << "\nSUCCESS: FILE SAVED :D\n";
                    break;
                }
            }

            // public:
            void clsUpdateClientScreen::ShowUpdateClientScreen() {
                _DrawScreenHeader("\t Update Client Screen");
                std::string AccountNumber = "";
                AccountNumber = Global::clsString::ReadString("Please enter client account number? ");

                while (!core::clsBankClient::IsClientExist(AccountNumber)) {
                    AccountNumber = Global::clsString::ReadString("Account number not found... pls enter another one? ");
                }

                core::clsBankClient Client1 = core::clsBankClient::Find(AccountNumber);
                Client1.Print();

                std::cout << "Update Client Info!\n";
                _ReadClientInfo(Client1);

                core::clsBankClient::enSaveResults SaveResult;
                SaveResult = Client1.Save();

                _PrintSaveResults(SaveResult);
            }
        } // namespace clients
    } // namespace ui
} // namespace Project03
