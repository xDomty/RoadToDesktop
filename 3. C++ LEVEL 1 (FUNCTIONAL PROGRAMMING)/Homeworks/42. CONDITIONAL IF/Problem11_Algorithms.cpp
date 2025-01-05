#include <iostream>
using namespace std;
float average;

void WELCOME()
{
    cout << "HELLO!";
    cout << "\nThis program makes you enter 3 marks and it calculates the average of them from 100\n";
}

void TakeMarks(float mark[3])
{
    cout << "Please enter the first mark\n";
    cin >> mark[0];
    cout << "Please enter the second mark\n";
    cin >> mark[1];
    cout << "Please enter the third mark\n";
    cin >> mark[2];
}

void FUNCaverage(float mark[3])
{
    average = (mark[0] + mark[1] + mark[2]) / 3;
    cout << "The Average of the 3 marks is : " << average << endl;
}

void PassOrFail()
{
    float mark[3];
    TakeMarks(mark);
    FUNCaverage(mark);
    if (average>=50)
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
