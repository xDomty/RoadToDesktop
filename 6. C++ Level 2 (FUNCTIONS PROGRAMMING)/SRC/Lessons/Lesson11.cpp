#include "../../Include/Lessons/Lesson11.hpp"
#include <iostream>
using namespace std;

namespace Lesson11 {
    void main() {
		cout << "Lesson 11: Number Validation...\n";
		int number = 0;
		cout << "enter a number : ";
		cin >> number;
		while (cin.fail())
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Please enter a number not a text : ";
			cin >> number;
		}

		cout << "The number enterd is : " << number << endl;
    };
}
