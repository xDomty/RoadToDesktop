#include <iostream>
#include <string>
using namespace std;
struct struct_address
{
	string streetOfOwner;
	string POBox;
};
struct struct_info
{
	string name;
	short int age;
	string city;
	string country;
	int MonthSalary;
	string PhoneNumber;
	struct_address address;
};
enum enum_Gender { Male, Female };
enum enum_Status { Single, Married };
int main()
{
	struct_info info;
	enum_Gender gender;
	enum_Status married;
	gender = enum_Gender::Male;
	married = enum_Status::Single;
	//defining vars
	//Asking The User To Enter His Information
	cout << "Hello To My Program That Makes An Card Of Your Info\n"; // Welcome screen
	cout << "Please Enter Your Name\n"; //Asking the user to enter his namez
	getline(cin, info.name); // taking the value of name
	cout << "please enter your age\n"; //Asking the user to enter his age
	cin >> info.age; //taking the value of age
	cout << "please enter your city\n"; //Asking the user to enter his city
	cin >> info.city; //taking the value of city
	cout << "please enter your country\n"; //Asking the user to enter his country
	cin.ignore(1,'\n');
	getline(cin, info.country); //taking the value of country 
	cout << "What is your phone number\n";
	cin >> info.PhoneNumber;
	cout << "Please enter your address\n";
	cin.ignore(1, '\n');
	getline(cin, (info.address.streetOfOwner));
	cout << "Please enter your POBox\n";
	getline(cin, info.address.POBox);
	cout << "please enter your month salary\n"; //Asking the user to enter his month salary
	cin >> info.MonthSalary; //taking the value of MonthSalary
	
	cout << endl; 
	int YearlySalary = info.MonthSalary * 12;
	//Making The Deal
	cout << "Here is your info card\n\n";
	cout << "*****************************\n";
	cout << "Name: " << info.name << "\n";
	cout << "Age : " << info.age << " Years.\n";
	cout << "City : " << info.city << "\n";
	cout << "Country: " << info.country << "\n";
	cout << "Phone Number : " << info.PhoneNumber << "\n";
	cout << "Adress : " << info.address.streetOfOwner << "\n";
	cout << "POBox : " << info.address.POBox << "\n";
	cout << "Monthly Salary : " << info.MonthSalary << endl;
	cout << "Yearly Salary: " << YearlySalary << "\n";
	cout << "Gender: " << gender << "\n";
	cout << "Married: " << married << "\n";
	cout << "*****************************" << endl;
	//returning 0;
	return 0;
}