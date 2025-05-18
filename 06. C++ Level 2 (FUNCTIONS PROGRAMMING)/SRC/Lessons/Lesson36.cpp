#include "../../Include/Lessons/Lesson36.hpp"
#include <iostream>
using namespace std;

namespace Lesson36 {
    void main() {
		cout << "Lesson 36 : Derefrencing Pointers...\n";
		int a = 10;
		int* x = &a;
		cout << &a << endl;
		cout << x;

		cout << endl << endl;

		*x = 40;

		cout << *x << endl;
		cout << a << endl;
    };
}
