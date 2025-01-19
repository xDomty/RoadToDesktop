#pragma once
#include "../../include/Problems/ListAllProblems.hpp"

namespace List
{
    void Print()
    {
        // Implementation of Print function
    }

    void ChooseFromList(Solution solution, short choose)
    {
        if (solution == Solution::MySolution)
        {
            if (choose > 0 && choose < 4)
            {
                switch (choose)
                {
                    case 1:
                        Problem1::MySolution::main();
                        break;
                    case 2:
                        Problem2::MySolution::main();
                        break;
                    case 3:
                        Problem3::MySolution::main();
                        break;
                }
            }
        }
        else if (solution == Solution::MrSolution)
        {
            if (choose > 0 && choose < 4)
            {
                switch (choose)
                {
                    case 1:
                        Problem1::MrSolution::main();
                        break;
                    case 2:
                        Problem2::MrSolution::main();
                        break;
                    case 3:
                        Problem3::MrSolution::main();
                        break;
                }
            }
        }
    }

    void WantToTryAgain()
    {
        std::cout << std::endl << std::endl;
        bool tryAgain = InputForce::NumBetween(0, 1, "Do you want to try something else? (1 for Yes, 0 for No): ", "Invalid input. Try again.");
        while (tryAgain)
        {
            clearScreen();
            Print();
            short choose = InputForce::Any<short>("Choose a number from the list: ", "Invalid input. Try again.");
            Solution solution = static_cast<Solution>(InputForce::NumBetween(0, 1, "Choose solution (0 for MySolution, 1 for MrSolution): ", "Invalid input. Try again."));
            ChooseFromList(solution, choose);
            PressAnyKeyToContinue();
            clearScreen();
            tryAgain = InputForce::NumBetween(0, 1, "Do you want to try something else? (1 for Yes, 0 for No): ", "Invalid input. Try again.");
        }
    }
}
