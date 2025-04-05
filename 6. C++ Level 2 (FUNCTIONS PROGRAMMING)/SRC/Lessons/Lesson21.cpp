#include "../../Include/Lessons/Lesson21.hpp"
#include <iostream>
using namespace std;

namespace Lesson21 {
    void main() {
		cout << "Lesson 21 : Auto Variables...\n";
		auto x = 10; // INT (Although it should be short int)
		auto y = 10.5; // DOUBLE (Although it should be float)
		auto z = "Hello World\n"; // CONST CHAR 

		// DO NOT USE AUTO BCS IT'S NOT FOR PERFORMANCE !!!

		cout << x << endl;
		cout << y << endl;
		cout << z << endl;
    };
}
