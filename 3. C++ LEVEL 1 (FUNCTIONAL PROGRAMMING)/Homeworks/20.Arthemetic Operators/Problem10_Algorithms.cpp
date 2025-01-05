#include <iostream>
using namespace std;
int main()
{
      //defining vars
         float mark1;
         float mark2;
         float mark3;
   cout << "Hello!\nThis program makes you enter 3 marks then it calculates the average of it.\n";
   cout <<"Please enter the first mark.\n";
   cin >> mark1;
   cout << "Ok, Please enter the second mark.\n";
   cin >> mark2;
   cout << "Ok, Please enter the third mark." << endl;
   cin >> mark3;
   float result = (mark1+mark2+mark3)/3;
   cout << "Ok, here is the average of your marks : ";
   cout <<"(" << mark1 << " + " << mark2 << " + " << mark3 << ") /3" << " = " << result << ".\n";
   system("pause");
}