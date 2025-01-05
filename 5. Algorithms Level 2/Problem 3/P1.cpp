#include <iostream>
using namespace std;

enum en_PerfectOrNot {Perfect , NotPerfect};

int ReadAPositiveNumber(string message)
{
    int number = 0;
    do
    {
        cout << message;
        cin >> number;
    } while (number <= 0);

    return number;
}

bool IsItPerfectNumber(int number)
{
    int sum = 0;
    for (int loop = 1; loop < number; loop++)
    {
        if (number % loop == 0)
        {
            sum += loop;
        }
    }
    return (number == sum);
}

en_PerfectOrNot IsItPerfect(bool TrueOrFalse)
{
    if (TrueOrFalse == 1)
    {
        return en_PerfectOrNot::Perfect;
    }
    else
    {
        return en_PerfectOrNot::NotPerfect;
    }
}

void PrintResults(en_PerfectOrNot PerfectOrNot)
{
    if (PerfectOrNot == en_PerfectOrNot::Perfect)
    {
        cout << "This number is perfect!\n";
    }
    else
        cout << "This Number Is Not Perfect\n";
}

int main()
{
    int CheckPerfectNumber = ReadAPositiveNumber("Please enter your number?\n");

    PrintResults(IsItPerfect(IsItPerfectNumber(CheckPerfectNumber)));
}