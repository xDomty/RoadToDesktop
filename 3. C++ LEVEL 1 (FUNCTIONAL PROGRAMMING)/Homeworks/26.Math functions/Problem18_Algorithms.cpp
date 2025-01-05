#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    //defining vars
    const float pi = 3.14;
    long double radius;
    // Let's gooooooooo
    cout << "Hello,\nThis program calculates the area of circle.\n";
    cout << "Please enter the radius by cm:\n";
    cin >> radius;
    long double result = pi * radius * radius;
    cout << "Ok, Here is the area of circle : " << result << " squared centimeters.\n";
    cout << "using celi : " << ceil(result) << endl;
    system("pause");
}