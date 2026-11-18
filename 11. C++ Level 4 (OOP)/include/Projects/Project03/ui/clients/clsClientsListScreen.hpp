#pragma once
#include "Projects/Project03/core/clsBankClient.hpp"
#include "Projects/Project03/ui/base/clsScreen.hpp"

namespace Project03 {
    namespace ui {
        namespace clients {
            class clsClientsListScreen : protected base::clsScreen {
            private:
                static void _PrintClientRecordLine(core::clsBankClient Client);

            public:
                static void ShowClientsList();
            };
        } // namespace clients
    } // namespace ui
} // namespace Project03
