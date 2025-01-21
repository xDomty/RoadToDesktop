#pragma once
#include <iostream>
#include <vector>
#include <optional>
using namespace std;

namespace Transpose
{
	template <typename T>
	vector<vector<T>> Vector2D(vector <vector<T>> vVector)
	{
		if (vVector.empty() || vVector[0].empty()) {
			cout << "ERROR, VECTOR " << (vVector.empty() ? "ROWS" : "COLS") << " CANNOT BE EMPTY!\n";
			return {};
		}

		vector <vector<T>> TransposedVector(vVector[0].size(), vector<T>(vVector.size()));
		for (unsigned short i = 0; i < vVector.size(); i++)
		{
			for (unsigned short j = 0; j < vVector[0].size(); j++)
			{
				TransposedVector[i][j] = vVector[j][i];
			}
		}
		return TransposedVector;
	}
}