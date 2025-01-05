#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    //defining vars
    const long double pi = 3.14;
    long double width;
    cout << "Hello\nThis program calculates Circle area inscribed in a square\n";
    cout << "Please enter the width of the square\n";
    cin >> width;
    long double result = (pi * width * width) / 4;
    cout << "Ok here is your result\n";
    cout << "(pi * width * width)/4 = (" << pi << " * " << width << " * " << width << ") / 4 = " << result << endl;
    cout << "using ceil : " << ceil(result) << endl;
    system("pause");
}