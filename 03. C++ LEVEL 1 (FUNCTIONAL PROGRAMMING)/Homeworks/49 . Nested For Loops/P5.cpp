#include <iostream>
using namespace std;
int main()
{
    int x;
char letter;
short int counter;
for (x = 65; x <= 70; x++)
{
	for (counter = 65; counter <= x; counter = counter + 1)
	{
		letter = counter;
		cout << letter;
	}
	cout << endl;
}
}