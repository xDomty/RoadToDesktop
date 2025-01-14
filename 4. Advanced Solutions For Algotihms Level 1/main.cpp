#include "include/headerINCLUDE.hpp"
#include "src/srcINCLUDE.cpp"

int main()
{
    clearScreen();
    List::Print();
    short choose = InputForce::NumBetween<short>(1, 50, "Choose a number from the list: ", "Invalid input. Try again.");
    List::ChooseFromList(choose);
    List::WantToTryAgain();
}