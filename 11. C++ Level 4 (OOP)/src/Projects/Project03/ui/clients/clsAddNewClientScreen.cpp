#include "Projects/Project03/ui/clients/clsAddNewClientScreen.hpp"
#include "Global/clsString.hpp"
#include <string>

namespace Project03 {
    namespace ui {
        namespace clients {

            // private:
            void clsAddNewClientScreen::_ReadClientInfo(core::clsBankClient& objBankClient) {
                objBankClient.SetFirstName(Global::clsString::ReadString("First Name? "));
                objBankClient.SetLastName(Global::clsString::ReadString("Last Name? "));
                objBankClient.SetAge(std::stoi(Global::clsString::ReadString("Age? ")));
                objBankClient.SetEmail(Global::clsString::ReadString("Email? "));
                objBankClient.SetPhoneNumber(Global::clsString::ReadString("Phone Number? "));
                objBankClient.SetPinCode(Global::clsString::ReadString("Pin Code? "));
                objBankClient.SetAccountBalance(std::stoi(Global::clsString::ReadString("Account Balance? ")));
            }
            void clsAddNewClientScreen::_PrintSaveResults(core::clsBankClient::enSaveResults SaveResult) {
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
            void clsAddNewClientScreen::ShowAddNewClientScreen() {
                if (!_CheckAccessRights(core::clsUser::enPermissions::pAddNewClient))
                    return;

                _DrawScreenHeader("\t Add New Client Screen");
                std::string sAccountNumber;
                sAccountNumber = Global::clsString::ReadString("Please enter client account number? ");

                while (core::clsBankClient::IsClientExist(sAccountNumber)) {
                    std::cout << "ERROR: ACCOUNT NUMBER IS ALREADY USED!\n";
                    sAccountNumber = Global::clsString::ReadString("Please enter client account number? ");
                }

                core::clsBankClient objNewClient = core::clsBankClient::GetAddNewClientObj(sAccountNumber);
                _ReadClientInfo(objNewClient);

                core::clsBankClient::enSaveResults SaveResult;
                SaveResult = objNewClient.Save();

                _PrintSaveResults(SaveResult);
            }
        } // namespace clients

    } // namespace ui

} // namespace Project03
