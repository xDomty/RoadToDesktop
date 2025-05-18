#include <iostream>
#include <string>
using namespace std;
struct struct_address
{
    string streetOfOwner;
    string POBox;
};
struct struct_owner
{
    string FullName;
    string PhoneNumber;
    struct_address address;
};
struct struct_Cars
{
    string brand;
    string model;
    int CarYear;
};
int main()
{
    struct_Cars car1, car2;
    struct_owner owner;
    cout << "Hello\nThis Program makes you buy two cars\n";
    cout << "Please enter your info\n";
    cout << "What is your full name\n";
    getline(cin, owner.FullName);
    cout << "What is your phone number\n";
    cin >> owner.PhoneNumber;
    cout << "Please enter your address" << "\n";
    cin.ignore();
    getline(cin, (owner.address.streetOfOwner));
    cout << "Please enter your POBox\n";
    getline(cin, owner.address.POBox);
    cout << "____________________________\n";
    cout << "Please enter the folowing dialogue about the first car you would like to buy\n";
    cout << "Please enter the car brand\n";
    getline(cin, car1.brand);
    cout << "Please enter the car model\n";
    getline(cin, car1.model);
    cout << "Please enter the car year" << endl;
    cin >> car1.CarYear;
    cout << "____________________________\n";
    cout << "\n" ;
    cin.ignore();
    cout << "Please enter the folowing dialogue about the second car you would like to buy\n";
    cout << "Please enter the car brand\n";
    getline(cin, car2.brand);
    cout << "Please enter the car model\n";
    getline(cin, car2.model);
    cout << "Please enter the car year\n";
    cin >> car2.CarYear;
    cout << "\n____________________________\n";
    cout << "Your personal info is : \n";
    cout << "Full Name : " << owner.FullName << endl;
    cout << "Phone Number : " << owner.PhoneNumber << "\n";
    cout << "Adress : " << owner.address.streetOfOwner << "\n";
    cout << "POBox : " << owner.address.POBox << "\n";
    cout << "____________________________\n";
    cout << "Your Car Info Is : \n";
    cout << "Your First Car Is : " << car1.brand << " " << car1.model << " " << car1.CarYear << endl;
    cout << "Your Second Car Is : " << car2.brand << " " << car2.model << " " << car2.CarYear << endl;
}
