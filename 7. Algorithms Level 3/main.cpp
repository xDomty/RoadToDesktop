#include "include/IncludeAllHeaders.hpp"

int main()
{
     srand((unsigned)time(NULL));
    List::Print();
    short choose = InputForce::Any<short>("Choose a number from the list: ", "Invalid input. Try again.");
    List::Solution solution = static_cast<List::Solution>(InputForce::NumBetween(0, 1, "Choose solution (0 for MySolution, 1 for MrSolution): ", "Invalid input. Try again."));
    List::ChooseFromList(solution, choose);
    List::WantToTryAgain();
}
