#pragma once
#include <iostream>
#include <vector>
using namespace std;

namespace FillVector
{
	namespace Type1D
	{
		template <typename T>
		void WithOrderedNumbers(vector <T> &vVector, const unsigned short HowManyOrderedNumbers) {
			unsigned int counter = 1;
			for (unsigned short i = 0; i < HowManyOrderedNumbers; i++)
			{
				vVector.push_back(counter);
				counter++;
			}
		}
	}

	namespace Type2D
	{
		template <typename FunctionType>
		void WithOrderedNumbers(vector <vector<FunctionType>>& vVector, const unsigned short HowManyRows, const unsigned short HowManyCols) {
			unsigned int counter = 1;
			vVector.resize(HowManyRows, vector<FunctionType>(HowManyCols));
			for (unsigned short i = 0; i < HowManyRows; i++)
			{
				for (unsigned short j = 0; j < HowManyCols; j++)
				{
					vVector[i][j] = counter;
					counter++;
				}
			}
		}
	}
}