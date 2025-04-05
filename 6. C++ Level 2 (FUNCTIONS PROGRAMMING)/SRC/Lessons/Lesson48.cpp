#include "../../Include/Lessons/Lesson48.hpp"
#include <iostream>
#include <vector>
using namespace std;

namespace Lesson48 {
    void main() {
		cout << "Lesson 48 : Vector Iterators...\n";
		vector <int> num{ 1,2,3,4,5 };

		vector<int>::iterator iter;

		for (iter = num.begin(); iter != num.end(); iter++)
		{
			cout << *iter << ' ';
		}
    };
}
