#include <iostream>
#include <string>
using namespace std;
struct struct_Cars
{
    string brand;
    string model;
    int CarYear;
};
int main()
{
    struct_Cars car1, car2;
    cout << "Please enter the folowing dialogue about your first car\n";
    cout << "Please enter the car brand\n";
    getline(cin, car1.brand);
    cout << "Please enter the car model\n";
    getline(cin, car1.model);
    cout << "Please enter the car year\n";
    cin >> car1.CarYear;
    cout << "Please enter the folowing dialogue about your second car\n";
    cout << "Please enter the car brand\n";
    getline(cin, car2.brand);
    cout << "Please enter the car model\n";
    getline(cin, car2.model);
    cout << "Please enter the car year\n";
    cin >> car2.CarYear;
    cout << "Your First Car Is : " << car1.brand << " " << car1.model << " " << car1.CarYear << endl;
    cout << "Your Second Car Is : " << car2.brand << " " << car2.model << " " << car2.CarYear << endl;
}
