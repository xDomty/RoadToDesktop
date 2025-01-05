// Lesson #37 - Function Parameters - By-Val vs By-Ref
#include <iostream>
using namespace std;

void func(int &num)
{
	num = 10;
	cout << "Number inside func is " << num << endl;
}
int main()
{
	int num = 20;
	func(num);
	cout << "Number inside main is " << num;
	return 0;
}