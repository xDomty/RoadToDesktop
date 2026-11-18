#include "Projects/Project03/ui/users/clsAddNewUserScreen.hpp"
#include "Projects/Project02/clsForceInputValid.hpp"
#include <iostream>

namespace Projects {
    namespace Project03 {
        namespace ui {
            namespace users {
                static short _ReadPermissions() {
                    short Permissions = 0;
                    char Answer = 'n';
                    std::cout << "Do you want to have full access? (y/n) ";
                    std::cin >> Answer;
                    if (Answer == 'y' || Answer == 'Y')
                        return -1;

                    std::cout << "Do you want to give access to the following:\n\n";
                    std::cout << "List Clients Access? ";
                    std::cin >> Answer;
                    if (Answer == 'y' || Answer == 'Y')
                        Permissions += Projects::Project03::core::clsUsers
                    std::cout << "Add New Clients Access? ";
                    std::cin >> Answer;
                    if (Answer == 'y' || Answer == 'Y')
                        Permissions += 2;
                    std::cout << "Delete Clients Access? ";
                    std::cin >> Answer;
                    if (Answer == 'y' || Answer == 'Y')
                        Permissions += 4;
                    std::cout << "Update Clients Access? ";
                    std::cin >> Answer;
                    if (Answer == 'y' || Answer == 'Y') {

                    }
                }

            } // namespace users
        } // namespace ui
    }; // namespace Project03
} // namespace Projects
