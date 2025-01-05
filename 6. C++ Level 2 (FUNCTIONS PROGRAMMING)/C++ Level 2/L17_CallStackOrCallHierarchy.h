#pragma once

#include <iostream>
using namespace std;

namespace space_L17_Lessons
{
	void Procedure4()
	{
		cout << "Hello , this is procedure 4\n";
	}

	void Procedure3()
	{
		Procedure4();
	}

	void Procedure2()
	{
		Procedure3();
	}

	void Procedure1()
	{
		Procedure2();
	}

	void main_L17()
	{
		Procedure1();
	}
}