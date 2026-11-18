#pragma once
#include "Projects/Project03/core/clsBankClient.hpp"
#include "Projects/Project03/ui/base/clsScreen.hpp"

namespace Project03 {
    namespace ui {
        namespace clients {
            class clsUpdateClientScreen : protected base::clsScreen {
            private:
                static void _ReadClientInfo(core::clsBankClient& Client);
                static void _PrintSaveResults(core::clsBankClient::enSaveResults SaveResult);

            public:
                static void ShowUpdateClientScreen();
            };
        } // namespace clients
    } // namespace ui
} // namespace Project03
