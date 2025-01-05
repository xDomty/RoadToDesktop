#include <iostream>
using namespace std;
int main()
{
   float input;
   cout << "Hello,\nThis program makes the number you type power to (2,3,4)\n";
   cout << "Please enter the number\n";
   cin >> input;
   float Power2 = input*input;
   float Power3 = input*input*input;
   float Power4 = input*input*input*input;
   cout << "Here is your result:\n";
   cout << input << "^2 = " << Power2 <<endl;
   cout << input << "^3 = " << Power3 <<endl;
   cout << input << "^4 = " << Power4 <<endl;
   system("pause");
} 