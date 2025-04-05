#include "../../Include/Lessons/Lesson20.hpp"
#include <iostream>
using namespace std;

namespace Lesson20 {
	void PrintStaticVariable()
	{
		static int c = 1;
		cout << "The value of c is : " << c << endl;
		c++;
	}

	void main()
	{
		cout << "Lesson 20 : Static Variables...\n";
		PrintStaticVariable();
		PrintStaticVariable();
		PrintStaticVariable();
	}
}
