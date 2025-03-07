#pragma once
#include "../ConnectHeaders/ProblemsInclude.hpp"

namespace ProblemsList
{
    enum Solution { MySolution = 0, MrSolution = 1 };

    void Print();

    void ChooseFromList(Solution solution, short choose);

    void WantToTryAgain();
}
