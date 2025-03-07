#pragma once
#include "../../include/StartProgram/StartMyProgram.hpp"

namespace Start
{
    void Course7()
    {
        ProblemsList::Print();
        short choose = Validate::Any<short>("Choose a number from the list: ", "Invalid input. Try again.");
        clearScreen();
        ProblemsList::Solution solution = static_cast<ProblemsList::Solution>(Validate::NumBetween(0, 1, "Choose solution (0 for MySolution, 1 for MrSolution): ", "Invalid input. Try again."));
        clearScreen();
        ProblemsList::ChooseFromList(solution, choose);
        ProblemsList::WantToTryAgain();
        clearScreen();
        cout << "\t\t\t\tThanks for using my program :)\n";
        cout << "\t\t\t\t   Made By DOMTY BTW ;)\n\n";
        cout << "\t\t\t\t ";
        PressAnyKeyToContinue();
    }
}