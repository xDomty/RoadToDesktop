#pragma once
#include "StartMyProgram.hpp"

namespace Start
{
    void Course7()
    {
        List::Print();
        short choose = InputForce::Any<short>("Choose a number from the list: ", "Invalid input. Try again.");
        clearScreen();
        List::Solution solution = static_cast<List::Solution>(InputForce::NumBetween(0, 1, "Choose solution (0 for MySolution, 1 for MrSolution): ", "Invalid input. Try again."));
        clearScreen();
        List::ChooseFromList(solution, choose);
        List::WantToTryAgain();
        clearScreen();
        cout << "\t\t\t\tThanks for using my program :)\n";
        cout << "\t\t\t\t   Made By DOMTY BTW ;)\n\n";
        cout << "\t\t\t\t ";
        PressAnyKeyToContinue();
    }
}