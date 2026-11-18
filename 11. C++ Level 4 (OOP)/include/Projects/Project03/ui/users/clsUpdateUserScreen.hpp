#include "Projects/Project03/core/clsUser.hpp"
#include "Projects/Project03/ui/base/clsScreen.hpp"

namespace Project03 {

    namespace ui {

        namespace users {

            // العالم مش هيقول عني الا فاشل لانهم لديهم النظره السطحيه للثانويه العامه
            // هثبتلهم انهم كلهم غلط

            class clsUpdateUserScreen : base::clsScreen {
            private:
                static void _ReadUserInfo(core::clsUser& User);
                static short _ReadPermissions();
                static void _PrintUser(core::clsUser User);

            public:
                static void ShowUpdateUserScreen();
            };
        } // namespace users
    } // namespace ui
} // namespace Project03
