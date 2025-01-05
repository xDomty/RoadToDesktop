#include <iostream>
using namespace std;
void WELCOME()
{
    cout << "HELLO!";
    cout << "\nThis program makes you enter the mark from 100\n";
}
void PassOrFail()
{
    float mark;
    cout << "Please enter your mark?\n";
    cin >> mark;
    if (mark >= 50)
    {
        cout << "PASS";
    }
    else
    {
        cout << "FAIL";
    }
}
int main()
{
    WELCOME();
    PassOrFail();
}
