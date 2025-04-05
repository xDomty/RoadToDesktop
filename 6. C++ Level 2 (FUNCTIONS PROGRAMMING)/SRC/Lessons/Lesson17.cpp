#include "../../Include/Lessons/Lesson17.hpp"
#include <iostream>
using namespace std;

namespace Lesson17 {
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

	void main()
	{
		cout << "Lesson 17 : Call Stack / Call Hierarchy...\n";
		Procedure1();
	}
}
