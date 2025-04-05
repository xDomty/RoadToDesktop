#include "../../Include/Lessons/Lesson39.hpp"
#include <iostream>
using namespace std;

namespace Lesson39 {
	void swap(int* a, int* b)
	{
		int c;
		c = *a;
		*a = *b;
		*b = c;
	}

    void main() {
		int a = 10, b = 20;

		cout << "Before swapping:\n";
		cout << "a = " << a; cout << endl;;
		cout << "b = " << b; cout << endl;;

		cout << endl << endl;

		swap(&a, &b);

		cout << "After swapping:\n";
		cout << "a = " << a; cout << endl;;
		cout << "b = " << b; cout << endl;;

    };
}
