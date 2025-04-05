#include "../../Include/Homeworks/Lesson19HW.hpp"
#include <iostream>
using namespace std;

namespace Lesson19HW {
	void PrintNumbersReversedUsingRecursion(int from, int to)
	{
		if (to <= from)
		{
			cout << from << endl;
			PrintNumbersReversedUsingRecursion(from - 1, to);
		}
	}

	int ReturnThePowerOfNumUsingRecursion(int base, int power)
	{
		if (power == 0) return 1;
		else return (base * ReturnThePowerOfNumUsingRecursion(base, power - 1));
	}

    void main() {
		cout << "Homework 1 in lesson 19 : Print Numbers Reversed Using Recursion..." << endl;
		int from, to;
		cout << "Please enter which number start: "; cin >> from;
		cout << "Please enter which number end  : "; cin >> to;
		cout << "Numbers from " << from << " to " << to << " in reverse order: " << endl;
		PrintNumbersReversedUsingRecursion(from, to); cout << endl << endl;

		cout << "Homework 2 in lesson 19 : Return The Power Of Num Using Recursion..." << endl;
		int base, power;
		cout << "Please enter base number: "; cin >> base;
		cout << "Please enter power number: "; cin >> power;
		cout << base << " ^ " << power << " = " << ReturnThePowerOfNumUsingRecursion(base, power) << endl;
    }
}
