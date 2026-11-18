#include "Projects/Project03/core/clsUser.hpp"
#include "Projects/Project03/ui/base/clsScreen.hpp"

namespace Project03 {
    namespace ui {
        namespace users {
            class clsAddNewUserScreen : private base::clsScreen {
            private:
                static void _ReadUserInfo(core::clsUser& objUser);
                static void _PrintUserCard(core::clsUser objUser);
                static short _ReadPermissionsToSET();

            public:
                static void ShowAddNewUserScreen();
            };
        } // namespace users
    } // namespace ui
} // namespace Project03
