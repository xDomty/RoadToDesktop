#pragma once
#include <iostream>
using namespace std;

namespace space_L10_Lessons
{
	void L10_TheLesson1_Main() // Using Variable
	{
		int i[] = {1,2,3,4,5,6,7,8,9};
		for (int x : i)
		{
			cout << x << endl;
		}
	}


	void L10_TheLesson2_Main() //Using set 
	{
		for (int x : {1, 2, 3, 4, 5, 6, 7, 8, 9})
		{
			cout << x;
		}
	}
}

