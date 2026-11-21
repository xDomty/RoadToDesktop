#include "Projects/IncludeAll.hpp"
#include "Projects/Project03/ui/login_and_permissions/clsLoginScreen.hpp"

int main() {

    Global::clsDate CurrentDate;
    CurrentDate.PrintDate();

    Project03::ui::login_and_permissions::clsLoginScreen::ShowLoginScreen();
}
