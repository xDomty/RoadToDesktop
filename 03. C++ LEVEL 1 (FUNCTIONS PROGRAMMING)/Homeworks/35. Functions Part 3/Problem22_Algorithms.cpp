#include <iostream>
using namespace std;

float CircleArea(float a,float b)
{
   float result;
   const float pi = 3.14;
   result = (pi*((b*b)/4)*((((2*a)-b))/((2*a)+b)));
   return result;
}
void TheProgram()
{
   float a;
   float b;
   cout <<"Hello\nthis program calculates circle area Inscribed in an Isosceles Triangle when you input a and b\n";
   cout << "A is equal to any of the two equal sides of an isosceles triangle\n";
   cout << "So please enter the value of A by cm\n";
   cin >> a;
   cout << "B is equal to the base of the isosceles triangle\n";
   cout << "So please enter the value of B by cm" << endl;
   cin >> b;
   cout << "Here is your result by squared cintmeters : " << CircleArea(a,b) << endl;
   system("pause");
}
int main()
{
   
   TheProgram();
}