#include <iostream>
using namespace std;
int main()
{
   float LoanAmount;
   float MonthlyPayment;
   cout << "Hello!,\nThis program makes you input Loan Amount and Monthly Payment and it calculates how many months you need to settle the loan,\n";
   cout << "Please enter the loan amount\n";
   cin >> LoanAmount;
   cout << "Please enter the monthly payment\n";
   cin >> MonthlyPayment;
   float result = LoanAmount / MonthlyPayment;
   cout << "You can pay them in " << result << " months.\n";
   system("pause");
}