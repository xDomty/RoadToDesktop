#pragma once
#include "StartMyProgram.hpp"

namespace Start
{
    void Course4()
    {
        clearScreen();
        List::Print();
        short choose = InputForce::NumBetween<short>(1, 50, "Choose a number from the list: ", "Invalid input. Try again.");
        List::ChooseFromList(choose);
        List::WantToTryAgain();
		//If The Program Reached Here So The User Wants To Exit
		clearScreen();
        cout << endl << endl;
		cout << "\t\t\t\tThanks For Using My Program :)\n";
        cout << "\t\t\t\tMade by Adam Ahmed ";
        cout << endl << endl << endl << endl;
        cout << "\t\t\t\t";
		PressAnyKeyToContinue();
        clearScreen();
    }
}