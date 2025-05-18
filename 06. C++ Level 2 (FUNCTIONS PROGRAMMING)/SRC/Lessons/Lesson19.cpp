#include "../../Include/Lessons/Lesson19.hpp"
#include <iostream>
using namespace std;

namespace Lesson19 {
	void PrintNumbersFromToNUsingRecursion(int from, int to) // if (to) became huge number like 10000 the program will crash and get stack overflow
	{
		if (from <= to)
		{
			cout << from << endl;
			PrintNumbersFromToNUsingRecursion(from + 1, to);
		}
	}

	void main()
	{
		cout << "Lesson 19 : Print Numbers From 1 To N Using Recurssion\n";
		cout << "WARNING IF (N) BECOME A HUGE NUMBER THERE WILL BE A STACK OVERFLOW...\n";
		PrintNumbersFromToNUsingRecursion(1, 10);
	}
}
