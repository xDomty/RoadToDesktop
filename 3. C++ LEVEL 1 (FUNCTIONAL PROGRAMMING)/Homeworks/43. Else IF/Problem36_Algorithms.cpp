#include <iostream>
using namespace std;
void TheProgram()
{
    string Operation;
	string Opinion;
	float num1;
	float num2;
	cout << "Please enter number 1?\n";
	cin >> num1;
	cout << "Please enter number 2?\n";
	cin >> num2;
	cout << "Please enter your operation?\n(+,/,-,*)\n";
	cin >> Operation;


	if (Operation == "+")
	{
		cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
	}


	else if (Operation == "/")
	{
		if (num2 == 0)
		{
			cout << "ERROR DIVISION BY 0 IS NOT ALLOWED !! THAT'S A CRIME\n";
		}
		else
		{ 
		cout << num1 << " / " << num2 << " = " << num1/num2 << endl;
		}
	}


	else if (Operation == "-")
	{
		cout << num1<< " - " <<num2 <<" = " <<  num1 - num2 << endl;
	}

	else if (Operation == "*")
	{
		cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
	}


	else
	{
		cout << "\nWRONG OPERATION\n";
	}

	cout << "Do you want to do another operation (y/n)?\n";
	cin >> Opinion;
	if (Opinion == "y")
	{
		cout << endl;
		TheProgram();
	}
	else
	{
		cout << "EXITING PROGRAM ....";
	}
}
int main()
{
	TheProgram();
}