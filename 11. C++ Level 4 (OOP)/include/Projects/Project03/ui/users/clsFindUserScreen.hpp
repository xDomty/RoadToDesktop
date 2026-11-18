#include "Projects/Project03/core/clsUser.hpp"
#include "Projects/Project03/ui/base/clsScreen.hpp"

namespace Project03 {

    namespace ui {

        namespace users {
            class clsFindUserScreen : base::clsScreen {

            private:
                static void _PrintUser(core::clsUser User);

            public:
                static void ShowFindUserScreen();
            };

        } // namespace users
    } // namespace ui
} // namespace Project03
