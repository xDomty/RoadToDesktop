#include <iostream>
using namespace std;
int main()
{
   float LoanAmount;
   float Months;
   cout << "Hello!,\nThis program makes you input Loan Amount and how many monthes you will pay it and it calculates the monthlly installment,\n";
   cout << "Please enter the loan amount\n";
   cin >> LoanAmount;
   cout << "Please enter the number of the months you would like to pay in\n";
   cin >> Months;
   float result = LoanAmount / Months;
   cout << "You can pay " << result << " pounds every 1 month.\n";
   system("pause");
}