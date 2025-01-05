#include <iostream>
using namespace std;
int main()
{
   //defining vars
     long double base;
     long double height;
    //The Begining
     cout << "Hello,\nThis program calculates the area of triangle\n";
     cout << "Please enter the length of the base by cm\n";
     cin >> base;
     cout << "Ok, And please enter the height of the triangle\n";
     cin >> height;
     cout << "Ok, Here is your result\n\n";
     long double result = base*height*0.5;
     cout << "The area of triangle = 0.5 * base * height = 0.5 * " << base << " * " << height << " = " << result << endl ;
     system("pause");
}