#include <iostream>
using namespace std;
int main()
{
 //defining vars
     long double UserNum;
     long double half = 0.5;
     
   cout << "Hello, This program is taking the half of the number\n";
   cout << "Please enter the number\n";
   cin >> UserNum;
   long double result = UserNum * half;
   cout << "Here is the half of the number : " << result << endl;
   system("pause");
}