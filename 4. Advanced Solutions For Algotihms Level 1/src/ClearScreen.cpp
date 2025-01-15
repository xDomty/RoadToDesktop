#pragma once
#include "../include/ClearScreen.hpp"
#include <cstdlib>

void clearScreen() {
#ifdef _WIN32
    system("cls");
#elif __linux__
    system("clear");
#endif
}