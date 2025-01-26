#pragma once
#include "../../include/Problems/ListAllProblems.hpp"

#include "../../include/Problems/Problem10.hpp"
#include "../../include/Problems/Problem13.hpp"

namespace List
{
    void Print()
    {
        cout << "Problem 1 : Write A Program to fill 3x3 matrix with random numbers and print it\n";
        cout << "Problem 2 : Write A Program to fill 3x3 matrix with random numbers and print it then print each row sum\n";
        cout << "Problem 3 : Write A Program to fill 3x3 matrix with random numbers and print it then print each row sum but each row sum is inside an array\n";
        cout << "Problem 4 : Write A Program to fill 3x3 matrix with random numbers and print it then print each col sum\n";
        cout << "Problem 5 : Write A Program to fill 3x3 matrix with random numbers and print it then print each col sum but each col sum is inside an array" << endl;
        cout << "Problem 6 : Write A Program to fill 3x3 matrix with ordered numbers then print it\n";
        cout << "Problem 7 : Write A Program to fill 3x3 matrix with ordered numbers then print it and make another 2d vector to fill it in transposed format\n";
        cout << "Problem 8 : Write A Program to fill 2 (3x3 matrix) with ordered numbers then print it and make another 2d vector to multiply first 2d vector by the second 2d vector\n";
        cout << "Problem 9 : Write A Program to fill 1 (3x3 matrix) and make a function to print specific row and column\n";
        cout << "Problem 10 : Write A Program to fill 1 (3x3 matrix) and make a function to print the sum of the matrix elements" << endl;
        cout << "Problem 11 : Write A Program to fill 2 (3x3 matrix) and make a function to print if the sum of both matrixs are equal or not\n" ;
        cout << "Problem 12 : Write A Program to fill 2 (3x3 matrix) and make a function to print if both matrixs are typical or not\n";
        cout << "Problem 13 : Write A Program to fill 2 (3x3 matrix) and make a function to check if the matrix is identity matrix or not then print the result\n";
        cout << "Problem 14 : Write A Program to fill 2 (3x3 matrix) and make a function to check if the matrix is scalar matrix or not then print the result\n";
        cout << "Problem 15 : Write A Program to fill 2 (3x3 matrix) and make a function to check how many times does the number found" << endl;
        cout << "Problem 16 : Write A Program to fill 2 (3x3 matrix) and make a function to check if the matrix is sparce matrix or not then print the result\n";
    }

    void ChooseFromList(Solution solution, short choose)
    {
        if (solution == Solution::MySolution)
        {
            if (choose > 0 && choose < 17)
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
                        break;
                    case 5:
                        Problem5::MySolution::main();
                        break;
                    case 6:
                        Problem6::MySolution::main();
                        break;
                    case 7:
                        Problem7::MySolution::main();
                        break;
                    case 8:
                        Problem8::MySolution::main();
                        break;
                    case 9:
                        Problem9::MySolution::main();
                        break;
                    case 10:
                        Problem10::MySolution::main();
                        break;
                    case 11:
                        Problem11::MySolution::main();
                        break;
                    case 12:
                        Problem12::MySolution::main();
                        break;
                    case 13:
                        Problem13::MySolution::main();
                        break;
                    case 14:
                        Problem14::MySolution::main();
                        break;
                    case 15:
                        Problem15::MySolution::main();
                        break;
                    case 16:
                        Problem16::MySolution::main();
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
        else if (solution == Solution::MrSolution)
        {
            if (choose > 0 && choose < 17)
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
                    case 4:
                        Problem4::MrSolution::main();
                        break;
                    case 5:
                        Problem5::MrSolution::main();
                        break;
                    case 6:
                        Problem6::MrSolution::main();
                        break;
                    case 7:
                        Problem7::MrSolution::main();
                        break;
                    case 8:
                        Problem8::MrSolution::main();
                        break;
                    case 9:
                        Problem9::MrSolution::main();
                        break;
                    case 10:
                        Problem10::MrSolution::main();
                        break;
                    case 11:
                        Problem11::MrSolution::main();
                        break;
                    case 12:
                        Problem12::MrSolution::main();
                        break;
                    case 13:
                        Problem13::MrSolution::main();
                        break;
                    case 14:
                        Problem14::MrSolution::main();
                        break;
                    case 15:
                        Problem15::MrSolution::main();
                        break;
                    case 16:
                        Problem16::MrSolution::main();
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
