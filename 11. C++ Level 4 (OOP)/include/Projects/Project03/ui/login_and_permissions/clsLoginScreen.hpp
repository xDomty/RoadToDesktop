#include "Projects/Project03/ui/base/clsScreen.hpp"

namespace Project03 {

    namespace ui {

        namespace login_and_permissions {

            class clsLoginScreen : protected base::clsScreen {

            private:
                static bool _Login();

            public:
                static bool ShowLoginScreen();
            };

        } // namespace login_and_permissions

    } // namespace ui

} // namespace Project03
