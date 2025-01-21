#pragma once
#include "../../include/Problems/Problem6.hpp"

namespace Problem6
{
	namespace MrSolution
	{

	}

	namespace MySolution
	{
		void main()
		{
			vector <vector<short>> MyVector;
			FillVector::Type2D::WithOrderedNumbers(MyVector, 3, 3);
			Print::Print2DVectorAsMatrix("The Following Is 3x3 Ordered Matrix\n", MyVector, "", true, 3, 3);
		}
	}
}