#pragma once
#include "AllProblemsHeadersInclude.hpp"
#include "Force.hpp"
#include "ClearScreen.hpp"
#include "PressAnyKeyToContinue.hpp"

namespace List
{
    enum Solution { MySolution = 0, MrSolution = 1 };

    void Print();

    void ChooseFromList(Solution solution, short choose);

    void WantToTryAgain();
}
