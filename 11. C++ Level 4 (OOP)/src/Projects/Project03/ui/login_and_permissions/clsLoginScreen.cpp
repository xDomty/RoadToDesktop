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
            void clsLoginScreen::_Login() {
                bool LoginFaild = false;

                std::string Username, Password;
                do {

                    if (LoginFaild) {
                        std::cout << "\nInvlaid Username/Password!\n\n";
                    }

                    std::cout << "Enter Username? ";
                    std::cin >> Username;

                    std::cout << "Enter Password? ";
                    std::cin >> Password;

                    core::CurrentUser = core::clsUser::Find(Username, Password);

                    LoginFaild = core::CurrentUser.IsEmpty();

                } while (LoginFaild);
                mainmenu::clsMainMenu::ShowMainMenu();
            }
            // public:

            void clsLoginScreen::ShowLoginScreen() {
                Project01::clsUtil::ClearScreen();
                _DrawScreenHeader("\t  Login Screen");
                _Login();
            }

        } // namespace login_and_permissions
    } // namespace ui
} // namespace Project03
