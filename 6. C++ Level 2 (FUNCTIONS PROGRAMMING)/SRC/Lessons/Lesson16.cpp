#include "../../Include/Lessons/Lesson16.hpp"
#include <iostream>
using namespace std;

namespace Lesson16 {

	int OverLoading(int a, int b)
	{
		return (a + b);
	}
	
	double OverLoading(double a, double b)
	{
		return a + b;
	}
	
	int OverLoading(int a, int b, int c, int d)
	{
		return a + b + c + d;
	}
	
	int OverLoading(int a, int b, int c)
	{
		return a + b + c;
	}
	
	void main()
	{
		cout << "Lesson 16 : Function Overloading...\n";
		cout << OverLoading(10, 20) << endl;
		cout << OverLoading(10.2, 10.5) << endl;
		cout << OverLoading(10, 20, 30) << endl;
		cout << OverLoading(10, 20, 30, 40) << endl;
	}
}
