#include <iostream>
using namespace std;
int main()
{
   const float pi =3.14;
   float circumference;
   cout << "Hello,\nThis program calculates the area of the circle by entering the circumference of it\n";
   cout << "Please enter the circumference of the circle by cm\n";
   cin>> circumference;
   float result = ((circumference*circumference)/ (4*pi));
   cout << "Here is the area of the circle by squared cintmeters : " << result << endl;
   system("pause");
}