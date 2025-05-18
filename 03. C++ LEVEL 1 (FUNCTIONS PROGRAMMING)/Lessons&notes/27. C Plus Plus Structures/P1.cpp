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
    struct_Cars struct_Cars;
    cout << "Please enter the car brand\n";
    getline(cin, struct_Cars.brand);
    cout << "Please enter the car model\n";
    getline(cin, struct_Cars.model);
    cout << "Please enter the car year\n";
    cin >> struct_Cars.CarYear;
    cout << "Your Car Is : " << struct_Cars.brand << " " << struct_Cars.model << " " << struct_Cars.CarYear;
}
