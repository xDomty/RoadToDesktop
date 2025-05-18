#include <iostream>
using namespace std;
int main()
{
    int x;
int y;
for (x = 10; x >= 1; x--)
{
	for (y = 1; y <= x; y++)
	{
		cout << y << " ";
	}
	cout << endl;
}
}