#include <iostream>
#include <cmath>
using namespace std;
float result;
float CircleArea(float &diameter)
{
    const float pi = 3.14;
    result = (pi * diameter * diameter) / 4;
    return result;
}
void TheProgram()
{
    //defining vars
    float diameter;
    cout << "Hello\nThis program calculates Circle area by the diameter\n";
    cout << "Please enter the diameter\n";
    cin >> diameter;
    cout << "Ok here is your result\n";
    cout << "(pi * width * width)/4 = (" << 3.14 << " * " << diameter << " * " << diameter << ") / 4 = " << CircleArea(diameter) << endl;
    cout << "using celi : " << ceil(result) << endl;
    system("pause");
}
int main()
{
    TheProgram();
}
