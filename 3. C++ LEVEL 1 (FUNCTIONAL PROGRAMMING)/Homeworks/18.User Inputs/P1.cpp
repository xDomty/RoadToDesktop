#include <iostream>
using namespace std;
int main()
{
//defining vars
 string name;
 short int age;
 string city;
 string country;
 int MonthSalary;
 string gender;
 bool married;
//Asking The User To Enter His Information
   cout << "Hello To My Program That Makes An Card Of Your Info\n"; // Welcome screen
   cout << "Please Enter Your Name\n"; //Asking the user to enter his name
   cin >> name; // taking the value of name
   cout << "please enter your age\n"; //Asking the user to enter his age
   cin >> age; //taking the value of age
   cout << "please enter your city\n"; //Asking the user to enter his city
   cin>>city; //taking the value of city
   cout << "please enter your country\n"; //Asking the user to enter his country
   cin >> country; //taking the value of country 
   cout << "please enter your month salary\n"; //Asking the user to enter his month salary
   cin >> MonthSalary; //taking the value of MonthSalary
   cout << "please enter your gender..." << endl; //Asking the user to enter his gender
   cin >> gender; // taking the value of gender
   cout << "if you're married type 1 and if not type 0\n"; //asking the user of the status of marry
   cin >> married , cout << endl; //taking the value of married
   int YearlySalary = MonthSalary*12;
//Making The Deal
   cout <<"Here is your info card\n\n";
   cout << "*****************************\n";
 cout << "Name: " << name << "\n";
 cout << "Age : " << age << " Years.\n";
 cout << "City : " << city << "\n";
 cout << "Country: " << country << "\n";
 cout << "Monthly Salary : " << MonthSalary << endl;
 cout << "Yearly Salary: " << YearlySalary << "\n";
 cout << "Gender: " << gender << "\n";
 cout << "Married: " << married << "\n";
 cout << "*****************************" << endl;
//returning 0;
 return 0;
}