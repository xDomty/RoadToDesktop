#include <iostream>
using namespace std;

int main()
{
	int i;
	int j;
	for (i = 1; i <= 10; i = i + 1)
	{
		cout << "The multiplication table of " << i  << " is:\n" << endl;
		cout << "******************\n";
		for (j = 1; j <= 10; j = j + 1)
		{
			cout << i << " * " << j << " = " << i*j << endl;
		}
		cout << "******************\n\n";
	}
}