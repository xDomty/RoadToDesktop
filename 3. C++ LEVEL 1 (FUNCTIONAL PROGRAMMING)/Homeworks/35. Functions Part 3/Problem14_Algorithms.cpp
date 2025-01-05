//problem 14 algorithms
#include <iostream>
using namespace std;
      //Swipe Numbers
         float swipe(float num1, float num2)
            {
             cout << num2 << endl;
             return num1;
            }

         float withoutSwipe(float num1, float num2)
            {
                cout << num1 << endl;
                return num2;
            }

         void TheProgram()
            {
                //defining vars
                float num1;
                float num2;
                //begining
                cout << "Hello,\nThis program is made to swipe 2 numbers you enter\n";
                cout << "Please enter the first number\n";
                cin >> num1;
                cout << "Ok, and the second number\n";
                cin >> num2;
                cout << "\nOk, Here is the 2 numbers you had enter:\n";
                cout << withoutSwipe(num1, num2) << "\n";
                cout << "\nAnd here is after swiping them:\n";
                cout << swipe(num1, num2) << endl;
            }
int main()
{
    TheProgram();
}