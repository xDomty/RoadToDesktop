#include "../include/PressAnyKeyToContinue.hpp"
#include <iostream>
#include <limits>
#include <climits>
using namespace std;
void PressAnyKeyToContinue()
{
    std::cout << "Press Enter to continue...";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignore any remaining input
    std::cin.get();
}