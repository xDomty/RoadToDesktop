#ifndef CLSCLIENTSSCREEN_HPP
#define CLSCLIENTSSCREEN_HPP

#include "Projects/Project03/ui/base/clsScreen.hpp"

namespace Project03 {
    namespace ui {
        namespace clients {
            class clsClientsScreen : protected base::clsScreen {
            private:
                enum _enClientsScreenOptions {
                    eListClients,
                    eAddNewClient,
                    eDeleteClient,
                    eFindClient,
                    eUpdateClient
                };
                void _ShowListClientsScreen();
                void _ShowAddNewClientScreen();
                void _ShowDeleteClientScreen();
                void _ShowFindClientScreen();
                void _ShowUpdateClintScreen();

            public:
                void ShowClientsScreen();
            };

        } // namespace clients

    } // namespace ui

} // namespace Project03

#endif /* CLSCLIENTSSCREEN_HPP */
