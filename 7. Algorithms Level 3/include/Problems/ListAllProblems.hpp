#pragma once
#include "AllProblemsHeadersInclude.hpp"
#include "../HeadersBeforeCourse/Force.hpp"
#include "../HeadersBeforeCourse/ClearScreen.hpp"
#include "../HeadersBeforeCourse/PressAnyKeyToContinue.hpp"

namespace List
{
    enum Solution { MySolution = 0, MrSolution = 1 };

    void Print();

    void ChooseFromList(Solution solution, short choose);

    void WantToTryAgain();
}
