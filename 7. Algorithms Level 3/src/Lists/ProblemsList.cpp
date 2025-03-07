#pragma once
#include "../../include/Lists/ProblemsList.hpp"
#include "../../include/HeadersBeforeCourse/ClearScreen.hpp"
#include "../../include/HeadersBeforeCourse/PressAnyKeyToContinue.hpp"

namespace ProblemsList
{
    void (*ProblemsArrMySolution[31])() = {  
        Problem1::MySolution::main,
        Problem2::MySolution::main,
        Problem3::MySolution::main,
        Problem4::MySolution::main,
        Problem5::MySolution::main,
        Problem6::MySolution::main,
        Problem7::MySolution::main,
        Problem8::MySolution::main,
        Problem9::MySolution::main,
        Problem10::MySolution::main,
        Problem11::MySolution::main,
        Problem12::MySolution::main,
        Problem13::MySolution::main,
        Problem14::MySolution::main,
        Problem15::MySolution::main,
        Problem16::MySolution::main,
        Problem17::MySolution::main,
        Problem18::MySolution::main,
        Problem19::MySolution::main,
        Problem20::MySolution::main,
        Problem21::MySolution::main,
        Problem22::MySolution::main,
        Problem23::MySolution::main,
        Problem24::MySolution::main,
        Problem25::MySolution::main,
        Problem26::MySolution::main,
        Problem27::MySolution::main,
		Problem28::MySolution::main,
        Problem29::MySolution::main,
        Problem30::MySolution::main,
        Problem31::MySolution::main
    };

    void (*ProblemsArrMrSolution[31])() = {  
        Problem1::MrSolution::main,
        Problem2::MrSolution::main,
        Problem3::MrSolution::main,
        Problem4::MrSolution::main,
        Problem5::MrSolution::main,
        Problem6::MrSolution::main,
        Problem7::MrSolution::main,
        Problem8::MrSolution::main,
        Problem9::MrSolution::main,
        Problem10::MrSolution::main,
        Problem11::MrSolution::main,
        Problem12::MrSolution::main,
        Problem13::MrSolution::main,
        Problem14::MrSolution::main,
        Problem15::MrSolution::main,
        Problem16::MrSolution::main,
        Problem17::MrSolution::main,
        Problem18::MrSolution::main,
        Problem19::MrSolution::main,
        Problem20::MrSolution::main,
        Problem21::MrSolution::main,
        Problem22::MrSolution::main,
        Problem23::MrSolution::main,
        Problem24::MrSolution::main,
        Problem25::MrSolution::main,
        Problem26::MrSolution::main,
        Problem27::MrSolution::main,
        Problem28::MrSolution::main,
        Problem29::MrSolution::main,
		Problem30::MrSolution::main,
        Problem31::MrSolution::main
    };

    void Print()
    {
        std::cout << "Problem 1 : fill 3x3 matrix with random numbers and print it\n";
        std::cout << "Problem 2 : fill 3x3 matrix with random numbers and print it then print each row sum\n";
        std::cout << "Problem 3 : fill 3x3 matrix with random numbers and print it then print each row sum but each row sum is inside an array";
        std::cout << "\nProblem 4 : fill 3x3 matrix with random numbers and print it then print each col sum";
        std::cout << "\nProblem 5 : fill 3x3 matrix with random numbers and print it then print each col sum but each col sum is inside an array";
        std::cout << "\nProblem 6 : print an ordered numbers matrix\n";
        std::cout << "Problem 7 : print an ordered numbers matrix with transposed matrix format\n";
        std::cout << "Problem 8 : fill 2 (3x3 matrix) with ordered numbers then print it and print a third matrix to get the multiplication result\n";
        std::cout << "Problem 9 : fill 1 (3x3 matrix) and make a function to print specific row and column\n\n";
        std::cout << "Problem 10 : print the sum of the matrix elements\n";
        std::cout << "Problem 11 : print if the sum of both matrices are equal or not\n";
        std::cout << "Problem 12 : print if both matrices are typical or not\n";
        std::cout << "Problem 13 : check if the matrix is an identity matrix or not then print the result\n";
        std::cout << "Problem 14 : check if the matrix is a scalar matrix or not then print the result\n";
        std::cout << "Problem 15 : check how many times the number is found\n";
        std::cout << "Problem 16 : check if the matrix is a sparse matrix or not then print the result\n";
        std::cout << "Problem 17 : check if the number you entered is found in the matrix or not\n";
        std::cout << "Problem 18 : check the intersected numbers\n";
        std::cout << "Problem 19 : check the max and the min of the matrix\n\n";
        std::cout << "Problem 20 : check if the matrix is a palindrome or not\n";
        std::cout << "Problem 21 : print a Fibonacci series using for loops\n";
        std::cout << "Problem 22 : print a Fibonacci series using recursion\n";
        std::cout << "Problem 23 : print the first letter of each word\n";
        std::cout << "Problem 24 : enter a text and capitalize the first letter of each word then print the text\n";
        std::cout << "Problem 25 : enter a text and make the first letter of each word lowercase then print the text\n";
        std::cout << "Problem 26 : enter a text then convert it all to uppercase and lowercase\n";
        std::cout << "Problem 27 : enter a char then convert it to upper is it is lower and vice versa\n";
        std::cout << "Problem 28 : invert string case\n";
        std::cout << "Problem 29 : upper lower length count\n";
		std::cout << "Problem 30 : read string and chracter then count the character in the string\n";
		std::cout << "Problem 31 : read string and chracter then count the character in the string and count the char upper and lower together\n";

    }

    void ChooseFromList(Solution solution, short choose)
    {
        if (solution == Solution::MySolution)
        {
            if (choose >= 1 && choose <= 31)  
                ProblemsArrMySolution[choose - 1]();
            else {
                clearScreen();
                std::cout << "Sorry :( , this problem does not exist yet";
                PressAnyKeyToContinue();
            }
        }
        else if (solution == Solution::MrSolution)
        {
            if (choose >= 1 && choose <= 30)
                ProblemsArrMrSolution[choose - 1]();
            else {
                clearScreen();
                std::cout << "Sorry :( , this problem does not exist yet";
                PressAnyKeyToContinue();
            }
        }
    }

    void WantToTryAgain()
    {
        std::cout << "\n\n";
        bool tryAgain = Validate::NumBetween(0, 1, "Do you want to try something else? (1 for Yes, 0 for No): ", "Invalid input. Try again.");
        while (tryAgain)
        {
            clearScreen();
            Print();
            short choose = Validate::Any<short>("Choose a number from the list: ", "Invalid input. Try again.");
            clearScreen();
            Solution solution = static_cast<Solution>(Validate::NumBetween(0, 1, "Choose solution (0 for MySolution, 1 for MrSolution): ", "Invalid input. Try again."));
            clearScreen();
            ChooseFromList(solution, choose);
            PressAnyKeyToContinue();
            clearScreen();
            tryAgain = Validate::NumBetween(0, 1, "Do you want to try something else? (1 for Yes, 0 for No): ", "Invalid input. Try again.");
        }
    }
}
