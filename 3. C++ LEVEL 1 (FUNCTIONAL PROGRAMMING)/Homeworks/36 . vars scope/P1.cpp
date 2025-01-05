#include <iostream>
using namespace std;

int x = 200;

void function()
{
    int x = 12;
    cout << "THe value of x in the function = " << x << endl;
}

void globalFunction()
{
    cout << "The global value is :" << ::x << endl;
}

int main()
{
    int x = 20;
    cout << "The value of x in main = " << x << endl;
    function();
    globalFunction();
}