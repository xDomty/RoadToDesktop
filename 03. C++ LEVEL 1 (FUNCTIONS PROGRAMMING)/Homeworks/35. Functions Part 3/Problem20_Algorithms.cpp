#include <iostream>
#include <cmath>
float result;
using namespace std;

float CircleArea(float width)
{
    const float pi = 3.14;
    result = (pi * width * width) / 4;
    return result;
}
void TheProgram()
{
    float width;
    cout << "Hello\nThis program calculates Circle area inscribed in a square width\n";
    cout << "Please enter the width of the square\n";
    cin >> width;
    cout << "Ok here is your result\n";
    cout << "(pi * width * width)/4 = (" << 3.14 << " * " << width << " * " << width << ") / 4 = " << CircleArea(width) << endl;
    cout << "using ceil : " << ceil(result) << endl;
    system("pause");
}
int main()
{
    TheProgram();
}