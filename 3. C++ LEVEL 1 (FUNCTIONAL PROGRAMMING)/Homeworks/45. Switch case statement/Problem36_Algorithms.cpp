#include <iostream>
using namespace std;

enum enOperationType {sum=1,division=2,substract=3,multiplication=4};


void Welcome()
{
	cout << "Hello, This program calculates the operation of 2 numbers\n";
}

void SelectOperation()
{
	cout << "Please enter your operation\n";
	cout << "**********************\n";
	cout << "(1) sum\n";
	cout << "(2) division\n";
	cout << "(3) substract\n";
	cout << "(4) multiplication\n";
	cout << "**********************\n";
}

void TakeOperation()
{
	float num1;
	float num2;
	enOperationType OperationType;
	int operation;

	cin >> operation;

	OperationType = (enOperationType)operation;


	cout << "Please enter number 1\n";
	cin >> num1;
	cout << "Please enter number 2\n";
	cin >> num2;


	switch (OperationType)
	{
	case enOperationType::sum:
		cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
		break;
	case enOperationType::division:
		cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
		break;
	case enOperationType::substract:
		cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
		break;
	case enOperationType::multiplication:
		cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
		break;
	default:
		cout << "WRONG OPERATION DUDE\n";
		cout << "Repeating....\n";
		SelectOperation();
		TakeOperation();
		break;
	}
	


	char repeat;
	cout << "Do you want to do another Operation? (y/n)\n";
	cin >> repeat;
	if (repeat == 'y')
	{
		SelectOperation();
		TakeOperation();
	}
	else
	{
		cout << "Thanks for using my program :)\n";
		cout << "made by adam\n";
		cout << "EXITING PROGRAM...";
	}

}

int main()
{
	  //calling
	    Welcome();
	    SelectOperation();
	    TakeOperation();
}