#include "../../Include/Lessons/Lesson38.hpp"
#include <iostream>
using namespace std;

namespace Lesson38 {
    void main() {
		cout << "Lesson 38 : Reference Variables VS Pointers (Changing Adresses)...\n";
		// 1. Reference variables cannot change the adress (only once) like const 
			// Unlike Pointer , You Can Change it multi times..

		int a = 10;
		int b = 20;
		int& x = a;

		// &x = b;  //WRONG

		int* p;
		p = &a;

		cout << &a << endl;
		cout << p << endl;

		cout << "\n\n";

		p = &b; //LIKE JOKER

		cout << &b << endl;
		cout << p << endl;

		cout << "\n\n";
    };
}
