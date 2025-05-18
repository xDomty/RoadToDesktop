#include <iostream>
using namespace std;
int main()
{
   float Days;
   float Hours;
   float Minutes;
   float Seconds;
   cout << "Hello!,\nThis program calculates the days, hours, minutes and seconds to Total seconds\n";
   cout << "So please enter the number of the days\n";
   cin >> Days;
   cout << "please enter the number of the hours\n";
   cin >> Hours;
   cout << "please enter the number of the minutes\n";
   cin >> Minutes;
   cout << "Finally enter the number of the seconds" << endl;
   cin >> Seconds;
   float RESULT = Days * 86400 + Hours *3600 + Minutes * 60 + Seconds;
   cout << "Here is your result\n" << RESULT << " seconds\n";
   system("pause");
}