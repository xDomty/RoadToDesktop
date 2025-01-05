#include <iostream>
using namespace std;
int main()
{
    char letter[2];
short int counter[2];
for (counter[0] = 65; counter[0] <= 90; counter[0] = counter[0] + 1)
{
	letter[0] = counter[0];
    for (counter[1] = 65; counter[1] <= 90; counter[1] = counter[1] + 1)
    {
		letter[1] = counter[1];
		cout << letter[0] << letter[1] << endl;
    }
}
}