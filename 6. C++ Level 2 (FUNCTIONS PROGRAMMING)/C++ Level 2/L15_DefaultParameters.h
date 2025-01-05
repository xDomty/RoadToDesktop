#pragma once

#include <iostream>
using namespace std;

namespace space_L15_Lessons
{
	// Function Declaration

	int MySum(int, int,int = 0,int = 0);

	void main_L15()
	{
		int i = 5, x = 7;
		cout << MySum(i, x);
	}

	// Function Definition

	int MySum(int a,int b,int c,int d )
	{
		return (a + b + c + d);
	}
}