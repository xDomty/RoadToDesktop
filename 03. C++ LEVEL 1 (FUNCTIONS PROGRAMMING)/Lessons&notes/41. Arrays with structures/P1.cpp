#include <iostream>
using namespace std;

void Welcome()
{
	cout << "Hello, This program defines two persons !!!\n\n";
}

struct strPersonInfo
{
	string FirstName;
	string LastName;
	string PhoneNumber;
	short int age;
};

void GettingInfo(strPersonInfo Person[2])
{
	void person1();
	{
		cout << "Please enter the info of person1\n\n";
		cout << "Please enter the first name\n";
		cin >> Person[0].FirstName;
		cout << "Please enter the last name\n";
		cin >> Person[0].LastName;
		cout << "Please enter the phone number\n";
		cin >> Person[0].PhoneNumber;
		cout << "Please enter the age\n";
		cin >> Person[0].age;
		cout << endl;
	}

	void person2();
	{
		cout << "Please enter the info of person2\n\n";
		cout << "Please enter the first name\n";
		cin >> Person[1].FirstName;
		cout << "Please enter the last name\n";
		cin >> Person[1].LastName;
		cout << "Please enter the phone number\n";
		cin >> Person[1].PhoneNumber;
		cout << "Please enter the age\n";
		cin >> Person[1].age;
		cout << endl;
	}
}

void PrintingInfo(strPersonInfo Person[2])
{
	cout << "Here is your info :\n\n";

	void person1();
	{
		cout << "***********************************\n";
		cout << "First Name : " << Person[0].FirstName << "\n";
		cout << "Last Name : " << Person[0].LastName << "\n";
		cout << "Phone Number : " << Person[0].PhoneNumber << "\n";
		cout << "Age : " << Person[0].age << "\n";
		cout << "***********************************\n\n";
	}

	void person2();
	{
		cout << "***********************************\n";
		cout << "First Name : " << Person[1].FirstName << "\n";
		cout << "Last Name : " << Person[1].LastName << "\n";
		cout << "Phone Number : " << Person[1].PhoneNumber << "\n";
		cout << "Age : " << Person[1].age << "\n";
		cout << "***********************************\n\n";
	}

}

void TheProgram()
{
	strPersonInfo Person[2];
	Welcome();
	GettingInfo(Person);
	PrintingInfo(Person);
}

int main()
{
	TheProgram();
}