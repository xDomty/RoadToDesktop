#include <iostream>
using namespace std;
int main()
{
   float TotalPennies;
   float TotalDollars;
   float Pennies;
   float Nickels;
   float Dimmes;
   float Quarters;
   float Dollars;
   cout << "this program orders pennies,nickels,dimes,quarters,dollars\n";
   cout << "Then it calculates it to TotalPennies & TotalDollars\n";
   cout << "So, Please enter the pennies\n";
   cin >> Pennies;
   cout << "So, Please enter the nickels\n";
   cin >> Nickels;
   cout << "So, Please enter the dimmes\n";
   cin >> Dimmes;
   cout << "So, Please enter the quarters\n";
   cin >> Quarters;
   cout << "So, Please enter the dollars\n";
   cin >> Dollars;
   TotalPennies = Pennies + Nickels*5 + Dimmes*10 + Quarters*25 + Dollars*100;
   TotalDollars = TotalPennies / 100;
   cout << "Here is the total pennies and total dollars:\n";
   cout << TotalPennies << endl;
   cout << TotalDollars << endl;
   system("pause");
}