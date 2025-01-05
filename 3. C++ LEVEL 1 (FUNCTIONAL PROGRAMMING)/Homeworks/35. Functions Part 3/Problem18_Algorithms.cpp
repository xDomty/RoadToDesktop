#include <iostream>
#include <cmath>
using namespace std;
    //The Program
        float CircleArea(float radius)
        {
            const float pi = 3.14;
            return pi * radius * radius;
        }
        string TheProgram()
        {
            float radius;
            // Let's gooooooooo
            cout << "Hello,\nThis program calculates the area of circle.\n";
            cout << "Please enter the radius by cm:\n";
            cin >> radius;
            cout << "Ok, Here is the area of circle : " << CircleArea(radius);
            return " squared centimeters.\n";
        }
int main()
{
    cout << TheProgram();
}