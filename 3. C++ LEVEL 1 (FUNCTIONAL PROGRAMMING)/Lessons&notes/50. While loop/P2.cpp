#include <iostream>
using namespace std;

int Enter_Number_Between(int x,int y)
{
	int number;
	cout << "You should enter a number between " << x << " and " << y << endl;
	cin >> number;
	while (number < x || number > y)
	{
		cout << "HEY , THAT IS NOT BETWEEN " << x << " and " << y << endl;
		cin >> number;
	}
	cout << "The number you typed is ";
	return number;
}

int main()
{
	int x;
	int y;
	cout << Enter_Number_Between(10, 50);
}