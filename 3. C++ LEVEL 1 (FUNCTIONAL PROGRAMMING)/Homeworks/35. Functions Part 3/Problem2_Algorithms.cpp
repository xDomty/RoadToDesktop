//problem 2 algorithms
#include <iostream>
using namespace std;

string name()
{
	string name;
	cout << "Please enter your name\n";
	cin >> name;
	return name;
}

int main()
{
	cout << name();
}