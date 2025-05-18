#include "../../Include/Lessons/Lesson46.hpp"
#include <iostream>
#include <vector>
using namespace std;

namespace Lesson46 {
    void main() {
		cout << "Lesson 46 : Access Elements In Vector...\n";
		vector <int> koko;
		koko.push_back(1);
		cout << koko.at(0);
		cout << koko[0];
    };
}
