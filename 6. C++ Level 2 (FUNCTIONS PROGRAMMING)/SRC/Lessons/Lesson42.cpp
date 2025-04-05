#include "../../Include/Lessons/Lesson42.hpp"
#include <iostream>
using namespace std;

namespace Lesson42 {
    void main() {
		cout << "Lesson 42 : Pointers And Voids...\n";
		void* ptr;

		// Varible of ptr to int a

		int a = 10;
		ptr = &a;

		// the address of a

		cout << "the address of a\n";
		cout << ptr;
		cout << endl;

		// The value of a

		cout << "The value of a\n";
		cout << *(static_cast<int*>(ptr));

		cout << endl << endl;
		// Varible of ptr to float b

		float b = 10;
		ptr = &b;

		// the address of b

		cout << "the address of b\n";
		cout << ptr;
		cout << endl;

		// The value of a

		cout << "The value of b\n";
		cout << *(static_cast<float*>(ptr));
    };
}
