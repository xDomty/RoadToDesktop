#include "../../Include/Lessons/Lesson28.hpp"
#include <iostream>
#include <vector>
using namespace std;

namespace Lesson28 {
    void main() {
		cout << "Lesson 28 : Ranged Loop Using Vector...\n";

		vector <int> vNum = { 5,10,15,20,25,30 };

		cout << "number vectors : ";

		for (int x : vNum)
		{
			cout << x << "  ";
		}

		cout << endl;
    };
}
