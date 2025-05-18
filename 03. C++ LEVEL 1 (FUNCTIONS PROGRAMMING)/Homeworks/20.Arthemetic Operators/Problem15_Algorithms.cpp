#include <iostream>
using namespace std;
int main()
{
    //defining vars
     long double length;
     long double width;
    //begining
     cout << "Hello,\nThis program calculates the area of rectangle\n";
     cout << "Please enter the length by cm\n";
     cin >> length;
     cout << "Ok, enter the width by cm\n";
     cin >> width;
     long double result = length * width;
     cout << "Ok, Here is your result" << endl;
     cout << "Rectangle area = length * width = " << length << " * " << width << " = " << result << " square cintemeters";
     system("pause");
}