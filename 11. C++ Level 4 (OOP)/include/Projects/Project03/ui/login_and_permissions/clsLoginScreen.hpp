#include "Projects/Project03/ui/base/clsScreen.hpp"

namespace Project03 {

    namespace ui {

        namespace login_and_permissions {

            class clsLoginScreen : protected base::clsScreen {

            private:
                static void _Login();

            public:
                static void ShowLoginScreen();
            };

        } // namespace login_and_permissions

    } // namespace ui

} // namespace Project03
