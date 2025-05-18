#include <iostream>
using namespace std;
struct structUserInfo
{
    string FirstName;
    string LastName;
    string PhoneNumber;
    short int age;
};
void ReadUserInfo(structUserInfo &info)
{
     cout << "Please enter your first name\n";
     cin >> info.FirstName;
     cout << "Please enter your last name\n";
     cin >> info.LastName;
     cout << "Please enter your age\n";
     cin >> info.age;
     cout << "Please enter your phone number\n";
     cin >> info.PhoneNumber;
}

void PrintInfo(structUserInfo info)
{
     cout << "\nHERE IS YOUR INFORMATION\n";
     cout << "first name : " << info.FirstName << endl;
     cout << "Last name : " << info.LastName << endl;
     cout << "Phone Number : " << info.PhoneNumber << endl;
     cout << "age : " << info.age << endl;
}

int main()
{
    structUserInfo info;
    ReadUserInfo(info);
    PrintInfo(info);
}