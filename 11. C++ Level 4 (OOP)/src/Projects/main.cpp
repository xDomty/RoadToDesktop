#include "Projects/IncludeAll.hpp"
#include "Projects/Project03/ui/login_and_permissions/clsLoginScreen.hpp"

int main() {

    while (true) {
        if (!Project03::ui::login_and_permissions::clsLoginScreen::ShowLoginScreen()) {
            break;
        }
    }
}
