#pragma once
#include "../../include/Problems/ListAllProblems.hpp"

namespace List
{
    void Print()
    {
        cout << "Problem 1 : Write A Program to fill 3x3 matrix with random numbers and print it\n";
        cout << "Problem 2 : Write A Program to fill 3x3 matrix with random numbers and print it then print each row sum\n";
        cout << "Problem 3 : Write A Program to fill 3x3 matrix with random numbers and print it then print each row sum but each row sum is inside an array\n";
        cout << "Problem 4 : Write A Program to fill 3x3 matrix with random numbers and print it then print each col sum but each col sum is inside an array\n";
    }

    void ChooseFromList(Solution solution, short choose)
    {
        if (solution == Solution::MySolution)
        {
            if (choose > 0 && choose < 5)
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
                    case 4:
                        Problem4::MySolution::main();
                }
            }
            else
            {
                clearScreen();
                cout << "Sorry :( , this problem does not exist yet";
                PressAnyKeyToContinue();
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
            else
            {
                clearScreen();
                cout << "Sorry :( , this problem does not exist yet";
                PressAnyKeyToContinue();
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
            clearScreen();
            Solution solution = static_cast<Solution>(InputForce::NumBetween(0, 1, "Choose solution (0 for MySolution, 1 for MrSolution): ", "Invalid input. Try again."));
            clearScreen();
            ChooseFromList(solution, choose);
            PressAnyKeyToContinue();
            clearScreen();
            tryAgain = InputForce::NumBetween(0, 1, "Do you want to try something else? (1 for Yes, 0 for No): ", "Invalid input. Try again.");
        }
    }
}
