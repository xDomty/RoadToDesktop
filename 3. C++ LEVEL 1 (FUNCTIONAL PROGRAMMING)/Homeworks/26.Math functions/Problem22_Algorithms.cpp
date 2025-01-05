 #include <iostream>
using namespace std;
int main()
{
   const float pi = 3.14;
   float a;
   float b;
   cout <<"Hello\nthis program calculates circle area Inscribed in an Isosceles Triangle when you input a and b\n";
   cout << "A is equal to any of the two equal sides of an isosceles triangle\n";
   cout << "So please enter the value of A by cm\n";
   cin >> a;
   cout << "B is equal to the base of the isosceles triangle\n";
   cout << "So please enter the value of B by cm" << endl;
   cin >> b;
   float result = (pi*((b*b)/4)*((((2*a)-b))/((2*a)+b)));
   cout << "Here is your result by squared cintmeters : " << result << endl;
   system("pause");
}