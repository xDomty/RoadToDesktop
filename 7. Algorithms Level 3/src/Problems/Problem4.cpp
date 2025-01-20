#include "../../include/Problems/Problem4.hpp"

namespace Problem4
{
	namespace MrSolution
	{

	}

	namespace MySolution
	{
		void main()
		{
			vector <vector<short>> vVector;
			Random::Numbers::FillVector2D<short>(vVector, 3, 3, 1, 100);
			Print::Print2DVectorAsMatrix("Here is the 3d Vector\n", vVector, "", true, 3, 3);
			vector <short> resultOfCols = OPERATIONS::_2DVectors::SumOfEachColInsideASeperateVector::To<short>(vVector, 3, true);
			Print::PrintVector("The Result of Col", resultOfCols, true);
		}
	}
}