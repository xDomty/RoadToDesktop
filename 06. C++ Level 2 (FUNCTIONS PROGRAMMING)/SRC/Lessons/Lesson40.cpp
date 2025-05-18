#include "../../Include/Lessons/Lesson40.hpp"
#include <iostream>
using namespace std;

namespace Lesson40 {
    void main() {
		cout << "Lesson 40 : Pointer And Arrays...\n";
		int arr[5] = { 1,2,3,4,5 };
		int* p = arr;

		cout << "Pointer adresses:\n";
		cout << p << endl;
		cout << p + 1 << endl;
		cout << p + 2 << endl;
		cout << p + 3 << endl;
		cout << p + 4 << endl;


		cout << endl;

		cout << "Pointer variables:\n";
		cout << *(p) << endl;
		cout << *(p + 1) << endl;
		cout << *(p + 2) << endl;
		cout << *(p + 3) << endl;
		cout << *(p + 4) << endl;

    };
}
