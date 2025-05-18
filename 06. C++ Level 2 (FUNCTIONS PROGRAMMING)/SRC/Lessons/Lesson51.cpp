#include "../../Include/Lessons/Lesson51.hpp"
#include <iostream>
using namespace std;

namespace Lesson51 {
    void main() {
		cout << "Lesson 51 : SOME CCTYPE FUNCTIONS...\n";
		char x;
		char w;

		x = toupper('a');
		w = tolower('A');
		cout << endl;
		cout << "(a) to (A) : " << x << endl
			<< "(A) to (a) : " << w << endl;
		cout << endl;
		cout << "(A) is upper : " << isupper(x) << endl
			<< "(a) is upper : " << isupper(w) << endl;
		cout << endl;
		cout << "(A) is lower : " << islower(x) << endl
			<< "(a) is lower : " << islower(w) << endl;

		cout << "isdigit('1') : " << isdigit('1') << endl;
		cout << "ispunct(';') : " << ispunct(';');
    };
}
