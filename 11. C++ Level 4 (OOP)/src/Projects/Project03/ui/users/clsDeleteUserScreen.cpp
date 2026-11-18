#include "Projects/Project03/ui/users/clsDeleteUserScreen.hpp"
#include "Global/clsString.hpp"
#include "Projects/Project03/core/clsUser.hpp"

namespace Project03 {
    namespace ui {
        namespace users {

            // private:
            void clsDeleteUserScreen::_PrintUser(core::clsUser User) {
                std::cout << "\nUser Card:";
                std::cout << "\n___________________";
                std::cout << "\nFirstName   : " << User.GetFirstName();
                std::cout << "\nLastName    : " << User.GetLastName();
                std::cout << "\nFull Name   : " << User.GetFullName();
                std::cout << "\nEmail       : " << User.GetEmail();
                std::cout << "\nPhone       : " << User.GetPhoneNumber();
                std::cout << "\nUser Name   : " << User.GetUserName();
                std::cout << "\nPassword    : " << User.GetPassword();
                std::cout << "\nPermissions : " << User.GetPermissions();
                std::cout << "\n___________________\n";
            }

            // public:
            void clsDeleteUserScreen::ShowDeleteUserScreen() {
                _DrawScreenHeader("\tDelete User Screen");

                std::string UserName = Global::clsString::ReadString("\nPlease Enter UserName: ");

                while (!core::clsUser::IsUserExists(UserName)) {
                    std::string UserName = Global::clsString::ReadString("\nUser is not found, choose another one: ");
                }

                core::clsUser User1 = core::clsUser::Find(UserName);
                _PrintUser(User1);

                std::cout << "\nAre you sure you want to delete this User y/n? ";

                char Answer = 'n';
                std::cin >> Answer;

                if (Answer == 'y' || Answer == 'Y') {

                    if (User1.Delete()) {
                        std::cout << "\nUser Deleted Successfully :)\n";
                        _PrintUser(User1);
                    } else {
                        std::cout << "\nError User Was not Deleted\n";
                    }
                }
            }
        } // namespace users
    } // namespace ui
} // namespace Project03
