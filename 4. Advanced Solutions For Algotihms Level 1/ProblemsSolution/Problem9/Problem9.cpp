#include "Problem9.h"

namespace Problem9
{
    void main()
    {
        float num1,num2,num3;
        cout << "Hello!\nThis program makes you enter 3 numbers then it calculates the sum of it.\n";
        cout << "Please enter the first number.\n";
        cin >> num1;
        cout << "Ok, Please enter the second number.\n";
        cin >> num2;
        cout << "Ok, Please enter the third number." << endl;
        cin >> num3;

        cout << "The result of " << num1 << " + " << num2 << " + " << num3 << " = " << SumOf3Nums<float>(num1,num2,num3);
    }

}