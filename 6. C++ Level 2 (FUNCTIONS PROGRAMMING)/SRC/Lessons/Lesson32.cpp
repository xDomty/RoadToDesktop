#include "../../Include/Lessons/Lesson32.hpp"
#include <iostream>
#include <vector>
using namespace std;

namespace Lesson32 {
    void main() {
		cout << "Lesson 32 : More Vector Methods...\n";
		vector <int> vNums;

		vNums.push_back(4);
		vNums.push_back(9);

		cout << "First Element : " << vNums.front() << endl; //first element
		cout << "Last Element : " << vNums.back() << endl; // LAST ELEMENT
		cout << "Vector Capacity : " << vNums.capacity() << endl; //VECTOR CAPACITY
		cout << "Vector Size : " << vNums.size() << endl; //VECTOR SIZE
		vNums.empty();
    };
}
