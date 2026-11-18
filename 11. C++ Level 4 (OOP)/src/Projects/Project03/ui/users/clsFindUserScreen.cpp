#include "Projects/Project03/ui/users/clsFindUserScreen.hpp"
#include "Global/clsString.hpp"

namespace Project03 {

    namespace ui {

        namespace users {
            // private:
            void clsFindUserScreen::_PrintUser(core::clsUser User) {
                std::cout << "\nUser Card:";
                std::cout << "\n___________________";
                std::cout << "\nFirstName   : " << User.GetFirstName();
                std::cout << "\nLastName    : " << User.GetLastName();
                std::cout << "\nFull Name   : " << User.GetFullName();
                std::cout << "\nAge         : " << User.GetAge();
                std::cout << "\nEmail       : " << User.GetEmail();
                std::cout << "\nPhone       : " << User.GetPhoneNumber();
                std::cout << "\nUser Name   : " << User.GetUserName();
                std::cout << "\nPassword    : " << User.GetPassword();
                std::cout << "\nPermissions : " << User.GetPermissions();
                std::cout << "\n___________________\n";
            }

            // public:
            void clsFindUserScreen::ShowFindUserScreen() {
                _DrawScreenHeader("\tFind User Screen");

                std::string UserName = Global::clsString::ReadString("\nPlease Enter UserName: ");

                while (!core::clsUser::IsUserExists(UserName)) {
                    std::string UserName = Global::clsString::ReadString("\nUser is not found, choose another one: ");
                }

                core::clsUser User1 = core::clsUser::Find(UserName);

                if (!User1.IsEmpty()) {
                    std::cout << "\nUser Found :-)\n";
                } else {
                    std::cout << "\nUser Was not Found :-(\n";
                }

                _PrintUser(User1);
            }
        } // namespace users
    } // namespace ui
} // namespace Project03
