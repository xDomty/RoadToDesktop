#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "../HeadersAfterCourse/Operations.hpp"
using namespace std;

namespace Comparing
{
	bool IsStringEqualString(string str1, string str2);

	template <typename T>
	bool _2MatrixsElements(vector <vector<T>> vVector1, vector <vector<T>> vVector2)
	{
		if (vVector1.size() != vVector2.size())
			return false;
		for (unsigned short i = 0; i < vVector1.size(); i++)
		{
			if (vVector1[i] != vVector2[i])
				return false;
			for (unsigned short j = 0; j < vVector1[i].size(); j++) {
				if (vVector1[i][j] != vVector2[i][j])
					return false;
			}
		}

		return true;
	}

	template <typename T>
	bool _2MatrixsSum(vector <vector<short>> vVector1, vector <vector<short>> vVector2) {
		return (OPERATIONS::_2DVectors::SumRows::To<short>(vVector1,vVector1.size(),true) == OPERATIONS::_2DVectors::SumRows::To<short>(vVector2,vVector2.size(),true));
	}



}
