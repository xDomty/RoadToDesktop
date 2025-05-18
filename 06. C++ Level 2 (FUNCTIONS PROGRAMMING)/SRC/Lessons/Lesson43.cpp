#include "../../Include/Lessons/Lesson43.hpp"
#include <iostream>
using namespace std;

namespace Lesson43 {
    void main() {
		cout << "Lesson 43 : Dynamic Memory Allocation...\n";

		// declare an int pointer
		int* IntP;

		// declare an float pointer
		float* FloatP;

		// Dynamic Allocate
		IntP = new int;
		FloatP = new float;

		// Assign Value
		*IntP = 4;
		*FloatP = 6.5;

		// Print Value
		cout << *IntP << endl;
		cout << *FloatP << endl;

		// Dealocate the memory
		delete IntP;
		delete FloatP;
    };
}
