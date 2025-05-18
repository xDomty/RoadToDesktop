#include <iostream>

using namespace std;

void Problem26()
{
	int i;
	int loop;
	cout << "want the program to print from 0 to what number?\n";
	cin >> loop;
	for (i = 0; i <= loop; i = i = i + 1)
	{
		cout << i << endl;
	}
}

void Problem27()
{
	int i;
	int loop;
	cout << "Hello, This program prints from the number you type to 0\n";
	cout << "Please enter your number\n";
	cin >> loop;
	for (i = loop; i >= 1; i = i - 1)
	{
		cout << i << endl;
	}
}

void Problem28()
{
    int i;
	int loop;
	cout << "Hello,This program calculates the sum of odd numbers\n";
	cout << "enter the number?\n";
	cin >> loop;
	int counter = 0;
	for (i = 1; i <= loop ; i= i+2)
	{
		counter = counter + i;
	}
	cout << "The sum of odd numbers between 1 and " << loop << " = " << counter << endl;
}

void Problem29()
{
	int i;
	int loop;
	cout << "Hello,This program calculates the sum of even numbers\n";
	cout << "enter the number?\n";
	cin >> loop;
	int counter = 0;
	for (i = 0; i <= loop; i = i + 2)
	{
		counter = counter + i;
	}
	cout << "The sum of even numbers between 0 and " << loop << " = " << counter << endl;
}

void ForProblem30()
{
	int number;
	int counter;
	long double factorial = 1;
	cin >> number;
	if (number >= 0)
	{
		for (counter = number; counter >= 1; counter = counter - 1)
		{
			factorial = factorial * counter;
			cout << counter << " * ";
		}
		cout << "\b\b\b";
		cout << " = " << factorial;
		
	}
	else
	{
		cout << "PLEASE ENTER A POSITIVE NUMBER\n";
		ForProblem30();
	}
}

void Problem30()
{
	cout << "Hello, This program calculates the factorial of numbers you put in\n";
	cout << "please enter your number\n";
	ForProblem30();
}



#include <cmath>
  //used cmath
    void Problem32()
    {
		float number;
		float power;
    	cout << "Hello, This program calcultes the ( (number you want) ^ (power you want) )\n";
    	cout << "Please enter the number\n";
		cin >> number;
		cout << "Please enter the power\n";
		cin >> power;
		cout << "Here is your result : " << number << " ^ " << power << " = " << pow(number, power);
    }


void Problem46()
{
	cout << "HERE WE GOOO, IT IS A TO Z\n";
	char letter;
	short int counter;
	for (counter = 65; counter <= 90;  counter = counter + 1)
	{
		letter = counter;
		cout << letter << endl;
	}
}

void menu()
{
	cout << "************************************\n";
	cout << "[1] problem 26 : 0 to what number\n";
	cout << "[2] problem 27 : what number to 0\n";
	cout << "[3] problem 28 : the sum of odd numbers\n";
	cout << "[4] problem 29 : the sum of even numbers\n";
	cout << "[5] problem 30 : program calculates the factorial of numbers you put in\n";
	cout << "[6] problem 32 : program calcultes the ( (number you want) ^ (power you want) )\n";
	cout << "[7] problem 46 : A TO Z\n";
	cout << "************************************\n" << endl;
    cout << "What do you want to view of this?\n";
}

void SelectFromMenu()
{
	int choose;
	menu();
	cin >> choose;
	switch (choose)
	{
	   case 1:
		   Problem26();
		   break;
	   case 2:
		   Problem27();
		   break;
	   case 3:
		   Problem28();
		   break;
	   case 4:
		   Problem29();
		   break;
	   case 5:
		   Problem30();
		   break;
	   case 6:
		   Problem32();
		   break;
	   case 7:
		   Problem46();
		   break;
	   default:
		   cout << "WRONG CHOISE, PLEASE CHOOSE AGAIN\n";
	}
	char WantAnother;
	cout << "\n\nDo you want to do another operation? (y/n)\n";
	cin >> WantAnother;
	if (WantAnother == 'y')
	{
		SelectFromMenu();
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
	SelectFromMenu();
}