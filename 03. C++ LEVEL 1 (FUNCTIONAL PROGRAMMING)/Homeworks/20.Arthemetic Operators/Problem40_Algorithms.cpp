#include <iostream>
using namespace std;
int main()
{
   float BillValue;
   float ServiceFee;
   cout << "Hello!,\nThis program you can enter in it the bill value and service taxes to print the result of it\n";
   cout << "Please enter the bill value\n";
   cin >> BillValue;
   cout << "Please enter the service fee by persent but do not type %\n";
   cin >> ServiceFee;
   float ServiceFeeDevidedBy100 = BillValue * (ServiceFee/100);
   float result = BillValue + ServiceFeeDevidedBy100;
   cout << "The total bill is "<< result << " pounds\n";
   system("pause");
}