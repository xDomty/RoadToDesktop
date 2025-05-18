#include "../../Include/Lessons/Lesson34.hpp"
#include <iostream>
using namespace std;

namespace Lesson34 {
    void main() {
		cout << "Lesson 34 : Reference Variable...\n";
		int a = 10;
		int& x = a;
		a++;
		cout << x;
		cout << endl;
		cout << a;
    };
}
