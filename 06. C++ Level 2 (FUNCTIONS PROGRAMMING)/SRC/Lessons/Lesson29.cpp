#include "../../Include/Lessons/Lesson29.hpp"
#include <iostream>
#include <vector>
using namespace std;

namespace Lesson29 {
    void main() {
		cout << "Lesson 29 : Vectors Pushback...\n";
		vector <int> vNum;

		cout << "number vectors : ";

		vNum.push_back(10);
		vNum.push_back(30);
		vNum.push_back(50);
		vNum.push_back(25);
		for (int x : vNum)
		{
			cout << x << "  ";
		}

		cout << endl;
    };
}
