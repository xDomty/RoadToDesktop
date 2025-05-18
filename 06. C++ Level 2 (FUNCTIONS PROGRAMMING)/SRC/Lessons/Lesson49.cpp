#include "../../Include/Lessons/Lesson49.hpp"
#include <iostream>
#include <vector>
using namespace std;

namespace Lesson49 {
    void main() {
		cout << "Lesson 49 : Exception Handling (TRY & CATCH)...\n";
		vector <int> num{ 1,2,3,4,5 };

		// do not use try catch except in the situations that force you to do that

		try
		{
			cout << num.at(5);
		}
		catch (...)
		{
			cout << "ERROR";
		}
    };
}
