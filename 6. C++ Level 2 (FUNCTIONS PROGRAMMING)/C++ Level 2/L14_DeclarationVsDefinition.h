#pragma once

#include <iostream>
using namespace std;

namespace space_L14_Lessons
{
	// Function Declaration
	int ForExample(int, int);

	void main_L14()
	{
		int i = 5,x = 7;
		cout << ForExample(i , x);
	}

	//Function Definition
	int ForExample(int i, int x)
	{
		return i * x;
	}
}