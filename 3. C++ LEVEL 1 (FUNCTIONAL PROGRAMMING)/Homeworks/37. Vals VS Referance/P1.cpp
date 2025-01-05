#include <iostream>
using namespace std;

void swap(float &a, float &b)
{
    float c;
    c=a;
    a=b;
    b=c;
}

int main()
{
    float a,b;
    cout << "Please enter the value of a\n";
    cin >> a;
    cout << "Please enter the value of b\n";
    cin >> b;
    swap(a,b);
    cout << "Here is after swiping them " << "a = " << a << ", b = " << b << endl;

}