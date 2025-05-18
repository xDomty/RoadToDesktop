#include <iostream>
using namespace std;
int main()
{
int a =10 ,b=20;
cout << "a = 10 | b = 20\n" << "_______________________\n";
a = 5; //EQUOVALENT TO a=5
cout << "Operator = :\nExample: a = " << a <<" (EQUOVALENT TO a=5)\n" << "_______________________"<< endl;
a=10; //restarting
a += b; //EQUOVALENT TO a = a+b
cout << "Operator += :\nExample: a += b = " << a <<" (EQUOVALENT TO a = a + b)\n" << "_______________________\n";
a=10; //restarting
a -= b;
cout << "Operator -= :\nExample: a -= b = " << a <<" (EQUOVALENT TO a = a - b)\n" << "_______________________" << endl;
a=10; //RESTARTING
a *= b;
cout << "Operator *= :\nExample: a *= b = " << a <<" (EQUOVALENT TO a = a * b)\n" << "_______________________\n";
a = 10; //restarting
a /= b;
cout << "Operator /= :\nExample: a /= b = " << a <<" (EQUOVALENT TO a = a / b)\n" << "_______________________" << endl;
a = 10; //restarting
a %= b;
cout << "Operator %= :\nExample: a %= b = " << a <<" (EQUOVALENT TO a = a % b)\n" << "_______________________" << endl;
system("pause");
}