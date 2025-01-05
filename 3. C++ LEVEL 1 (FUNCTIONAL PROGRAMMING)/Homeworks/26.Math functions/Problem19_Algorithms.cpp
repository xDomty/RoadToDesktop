#include <iostream>
using namespace std;
int main()
{
    //defining vars
    const float pi = 3.14;
    long double diameter;
    cout << "Hello\nThis program calculates Circle area by the diameter\n";
    cout << "Please enter the diameter\n";
    cin >> diameter;
    long double result = (pi * diameter * diameter) / 4;
    cout << "Ok here is your result\n";
    cout << "(pi * width * width)/4 = (" << pi << " * " << diameter << " * " << diameter << ") / 4 = " << result << endl;
    cout << "using celi : " << ceil(result) << endl;
    system("pause");
}