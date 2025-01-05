#include <iostream>
using namespace std;
float result;
float CircleArea(float circumference)
{
   const float pi =3.14;
   result = ((circumference*circumference)/ (4*pi));
   return result;
}
void TheProgram()
{
   float circumference;
   cout << "Hello,\nThis program calculates the area of the circle by entering the circumference of it\n";
   cout << "Please enter the circumference of the circle by cm\n";
   cin>> circumference;
   cout << "Here is the area of the circle by squared cintmeters : " << CircleArea(circumference) << endl;
   system("pause"); 
}
int main()
{
   TheProgram();
}