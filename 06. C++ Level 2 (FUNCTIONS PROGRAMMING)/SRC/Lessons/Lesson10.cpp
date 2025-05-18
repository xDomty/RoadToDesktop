#include "../../Include/Lessons/Lesson10.hpp"
#include <iostream>
using namespace std;

namespace Lesson10 {
    void main() {
        cout << "Part 1 Of Lesson 10: Ranged Loop Using Variable...\n";
		int i[] = { 1,2,3,4,5,6,7,8,9 };
		for (int x : i)
		{
			cout << x << endl;
		}
		cout << endl;

		cout << "Part 2 Of Lesson 10: Ranged Loop Using Set...\n";
		for (int x : {1, 2, 3, 4, 5, 6, 7, 8, 9})
		{
			cout << x;
		}
    };
}
