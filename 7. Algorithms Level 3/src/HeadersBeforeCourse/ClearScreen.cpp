#pragma once
#include "../../include/HeadersBeforeCourse/ClearScreen.hpp"

void clearScreen() {
#ifdef _WIN32
    system("cls");
#elif __linux__
    system("clear");
#endif
}
