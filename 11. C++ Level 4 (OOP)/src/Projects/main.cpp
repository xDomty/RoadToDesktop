#include "Projects/IncludeAll.hpp"
#include "Projects/Project03/ui/mainmenu/clsMainMenu.hpp"

int main() {

    Global::clsDate CurrentDate;
    CurrentDate.PrintDate();

    Project03::ui::mainmenu::clsMainMenu::ShowMainMenu();
}
