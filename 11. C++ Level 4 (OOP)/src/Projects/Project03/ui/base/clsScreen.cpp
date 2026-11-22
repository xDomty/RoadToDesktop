#include "Projects/Project03/ui/base/clsScreen.hpp"
#include "Global/clsDate.hpp"
#include "Projects/Project03/core/CurrentLoggedUser.hpp"
#include <iostream>

namespace Project03 {
    namespace ui {
        namespace base {
            // protected:
            void clsScreen::_DrawScreenHeader(std::string Title, std::string SubTitle) {
                std::cout << "\t\t\t\t\t______________________________________";
                std::cout << "\n\n\t\t\t\t\t" << Title;
                if (SubTitle != "") {
                    std::cout << "\n\t\t\t\t" << SubTitle;
                }
                std::cout << "\n\t\t\t\t\t______________________________________";

                std::cout << "\n\t\t\t\t\t\tUser: " << core::CurrentUser.GetUserName() << "\n";
                Global::clsDate CurrentDate;
                std::cout << "\t\t\t\t\t\tDate: " << CurrentDate.DateToString();

                std::cout << "\n\n";
            }

            bool clsScreen::_CheckAccessRights(core::clsUser::enPermissions Permission) {
                if (!core::CurrentUser.CheckAccessPermission(Permission)) {
                    std::cout << "\t\t\t\t\t______________________________________";
                    std::cout << "\n\n\t\t\t\t\t  Access Denied! Contact your Admin.";
                    std::cout << "\n\t\t\t\t\t______________________________________\n\n";
                    return false;
                } else
                    return true;
            }
        } // namespace base

    } // namespace ui
} // namespace Project03
