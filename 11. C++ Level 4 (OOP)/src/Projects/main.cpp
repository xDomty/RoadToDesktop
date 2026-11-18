#include "Projects/IncludeAll.hpp"
#include "Projects/Project03/ui/clsMainScreen.hpp"

int main() {

    Global::clsDate CurrentDate;
    CurrentDate.PrintDate();

    Project03::ui::clsMainScreen::ShowMainMenu();
}
