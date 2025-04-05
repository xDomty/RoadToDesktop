#include "../../Include/Homeworks/Lesson27HW.hpp"
#include <iostream>
using namespace std;

namespace Lesson27HW {
	void AllocateDimensionalArray10X10(int Multi[10][10]) {
		for (int i = 0; i < 10; i++) {
			for (int j = 0; j < 10; j++) {
				Multi[i][j] = i * j;
			}
		}
	}
	void PrintDimensionalArray(int Multi[10][10]) {
		for (int i = 0; i < 10; i++) {
			for (int j = 0; j < 10; j++) {
				cout << Multi[i][j] << " ";
			}
			cout << endl;
		}
	}
	void main() {
		int Multi[10][10];
		AllocateDimensionalArray10X10(Multi);
		PrintDimensionalArray(Multi);
	}
}