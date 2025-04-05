#include "../../Include/Lessons/Lesson14.hpp"
#include <iostream>
using namespace std;

namespace Lesson14 {

    // Function Declaration in the header file

    void main() {
        cout << "Lesson 14 : Function Declaration & Definition...\n";
        int i = 5, x = 7;
        cout << ForExample(i, x);
    };

    //Function Definition
    int ForExample(int i, int x)
    {
        return i * x;
    }
}
