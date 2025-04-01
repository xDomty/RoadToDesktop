#include <iostream>
#include <string>
using namespace std;

float ReadNumber()
{
    float Num;
    cout << "Please enter a number? " << endl;
    cin >> Num;
    return Num;
}

float CalculateHalfNumber(float Num)
{
    return Num / 2;
}

void PrintResults(int Num)
{
    string Result = "Half of " + to_string(Num) + " is " + to_string(CalculateHalfNumber(Num));
    cout << endl << Result << endl;
}

int main()
{
    PrintResults(ReadNumber());
    return 0;
}
