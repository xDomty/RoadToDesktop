#include <iostream>
#include <string>
using namespace std;

float ReadNumber(string Message)
{
    float Number = 0;
    cout << Message << endl;
    cin >> Number;
    return Number;
}

float SumNumbers()
{
    int Sum = 0;
    int Number = 0;
    int Counter = 1;

    Number = ReadNumber("Please enter Number " + to_string(Counter));

    while (Number != -99)
    {
        Sum += Number;
        Counter++;
        Number = ReadNumber("Please enter Number " + to_string(Counter));
    };

    return Sum;
}

int main()
{
    cout << endl << "Result = " << SumNumbers() << endl;
    return 0;
}
