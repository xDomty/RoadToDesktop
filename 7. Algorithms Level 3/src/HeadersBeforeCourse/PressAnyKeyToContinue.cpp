#include "../../include/HeadersBeforeCourse/PressAnyKeyToContinue.hpp"

void PressAnyKeyToContinue()
{
    std::cout << "Press Enter to continue...";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignore any remaining input
    std::cin.get();
}
