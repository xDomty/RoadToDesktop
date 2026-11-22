#include "Projects/Project03/ui/login_and_permissions/clsLoginScreen.hpp"
#include "Projects/Project01/clsUtil.hpp"
#include "Projects/Project03/core/CurrentLoggedUser.hpp"
#include "Projects/Project03/core/clsUser.hpp"
#include "Projects/Project03/ui/mainmenu/clsMainMenu.hpp"
#include <string>

namespace Project03 {

    namespace ui {

        namespace login_and_permissions {

            // private:
            bool clsLoginScreen::_Login() {
                bool LoginFailed = false;
                short FailedLoginCount = 0;
                std::string Username, Password;
                do {

                    if (LoginFailed) {
                        FailedLoginCount++;

                        std::cout << "\nInvlaid Username/Password!";
                        std::cout << "\nYou have " << (3 - FailedLoginCount)
                                  << " Trial(s) to login.\n\n";
                    }

                    if (FailedLoginCount == 3) {
                        std::cout << "\nYour are Locked after 3 faild trails \n\n";
                        return false;
                    }

                    std::cout << "Enter Username? ";
                    std::cin >> Username;

                    std::cout << "Enter Password? ";
                    std::cin >> Password;

                    core::CurrentUser = core::clsUser::Find(Username, Password);

                    LoginFailed = core::CurrentUser.IsEmpty();

                } while (LoginFailed);
                mainmenu::clsMainMenu::ShowMainMenu();
                return true;
            }
            // public:

            bool clsLoginScreen::ShowLoginScreen() {
                Project01::clsUtil::ClearScreen();
                _DrawScreenHeader("\t  Login Screen");
                return _Login();
            }

        } // namespace login_and_permissions
    } // namespace ui
} // namespace Project03
