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

void LoopPerfectNumbersFrom1ToN(int loop)
{
    cout << "\n\nThe Perfect Numbers Between 1 To " << loop << " :\n";

    for (int Numbers = 1; Numbers <= loop; Numbers++)
    {
        if (IsItPerfectNumber(Numbers) == 1)
        {
            cout << Numbers << endl;
        }
    }
}

int main()
{
    int TheLoop = ReadAPositiveNumber("Please enter The Loop For Perfect Numbers?\n");

    LoopPerfectNumbersFrom1ToN(TheLoop);
}