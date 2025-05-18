#include <iostream>
using namespace std;
void TheProgram()
{
    string ToFloat;
	float TotalSales;
	cout << "Please enter your Total Sales\n";
	cin >> TotalSales;
	float result1 = TotalSales * (1.0 / 100.0);
	float result2 = TotalSales * (2.0 / 100.0);
	float result3 = TotalSales * (3.0 / 100.0);
	float result4 = TotalSales * (5.0 / 100.0);

	if (TotalSales == 1000000)
	{
		cout << result1;
	}
	else if (500000 <= TotalSales && TotalSales < 1000000)
	{
		cout << result2;
	}
	else if (100000 <= TotalSales && TotalSales < 500000)
	{
		cout << result3;
	}
	else if (50000 <= TotalSales && TotalSales < 100000)
	{
		cout << result4;
	}
	else
	{
		cout << "0";
	}
}
int main()
{
	TheProgram();
}