#include "../../Include/Lessons/Lesson27.hpp"
#include <iostream>
using namespace std;

namespace Lesson27 {
    void main() {
		cout << "Lesson 27 : Array Of Arrays [Two Dimensional Arrays]...\n";
		// int var[ROWS][COLS]

		int var[4][3] = {
						{1,2,3},
						{6,5,0},
						{4,3,2},
						{9,4,3}
		};

		for (int rows = 0; rows < 4; rows++)
		{
			for (int cols = 0; cols < 3; cols++)
			{
				cout << var[rows][cols] << " ";
			}
			cout << endl;
		}
    };
}
