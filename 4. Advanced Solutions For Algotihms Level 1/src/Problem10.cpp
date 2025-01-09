#include "Problem10.hpp"

namespace Problem10
{
    void main()
    {
        float num1,num2,num3;
        cout << "Hello!\nThis program makes you enter 3 marks then it calculates the average of it.\n";
        cout << "Please enter the first mark.\n";
        cin >> num1;
        cout << "Ok, Please enter the second mark.\n";
        cin >> num2;
        cout << "Ok, Please enter the third mark." << endl;
        cin >> num3;

        cout << "The average of the three marks is : "<< AverageOf3Marks<float>(num1,num2,num3);
    }
}