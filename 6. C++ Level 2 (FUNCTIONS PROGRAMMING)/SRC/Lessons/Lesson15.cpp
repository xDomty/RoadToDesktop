#include "../../Include/Lessons/Lesson15.hpp"
#include <iostream>
using namespace std;

namespace Lesson15 {

	// Function Declaration in the header file

    void main() {
		cout << "Lesson 15 : Function Declaration & Definition (Default Values)...\n";
        int i = 5, x = 7;
        cout << MySum(i, x);
    };

    // Function Definition
    int MySum(int a, int b, int c, int d)
    {
        return (a + b + c + d);
    }
}
