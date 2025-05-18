#include <iostream>
using namespace std;
int main()
{
   int a,b;
   cout << "Hello!\nThis Program compares between two numbers\nPlease enter the first number\n";
   cin >> a;
   cout << "Ok, And the second number?\n";
   cin >> b;
   cout << "here is your results:" << endl;
   cout << "a=b is : "<< (a==b) << endl;
   cout << "a!=b is : " << (a!=b) << endl;
   cout << "a>b is : " << (a>b) << endl;
   cout << "a<b is : " << (a<b) << endl;
   cout << "a>=b is : " << (a>=b) << endl;
   cout << "a<=b is : " << (a<=b) << endl;
   system("pause");
}