#include "Projects/Project03/ui/base/clsScreen.hpp"

namespace Project03 {
    namespace ui {
        namespace base {
            void clsScreen::_DrawScreenHeader(std::string Title, std::string SubTitle) {
                std::cout << "\t\t\t\t\t______________________________________";
                std::cout << "\n\n\t\t\t\t\t  " << Title;
                if (SubTitle != "") {
                    std::cout << "\n\t\t\t\t\t  " << SubTitle;
                }
                std::cout << "\n\t\t\t\t\t______________________________________\n\n";
            }
        } // namespace base

    } // namespace ui
} // namespace Project03
