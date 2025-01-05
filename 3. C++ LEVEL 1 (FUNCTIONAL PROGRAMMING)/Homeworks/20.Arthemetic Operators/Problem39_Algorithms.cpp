#include <iostream>
using namespace std;
int main()
{
   float TotalBill;
   float CashPaid;
   cout << "Hello\nThis program makes a remainder to be paid back\n";
   cout << "Please enter the total bill by pounds\n";
   cin >> TotalBill;
   cout << "Please enter the Cash Paid by pounds\n";
   cin >> CashPaid;
   float result = TotalBill - CashPaid;
   cout << "The Paid back is : " << result << " pounds\n";
   system("pause");
}