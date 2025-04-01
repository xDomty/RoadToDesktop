#include <iostream>
#include <string>
using namespace std;

void ReadNumbers(int& Num1, int& Num2)
{
    cout << "Please enter Number 1 ? " << endl;
    cin >> Num1;

    cout << "Please enter Number 2 ? " << endl;
    cin >> Num2;
}

int MaxOf2Numbers(int Num1, int Num2)
{
    if (Num1 > Num2)
        return Num1;
    else
        return Num2;
}

void PrintResults(int Max)
{
    cout << "\n The Maximum Number is: " << Max << endl;
}

int main()
{
    int Num1, Num2;

    ReadNumbers(Num1, Num2);

    PrintResults(MaxOf2Numbers(Num1, Num2));

    return 0;
}
