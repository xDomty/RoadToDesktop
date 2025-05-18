#include <iostream>
#include <string>
using namespace std;

void ReadNumbers(float &Mark1, float &Mark2, float &Mark3)
{
    cout << "Please enter Mark 1 ? " << endl;
    cin >> Mark1;

    cout << "Please enter Mark 2 ? " << endl;
    cin >> Mark2;
    
    cout << "Please enter Mark 3 ? " << endl;
    cin >> Mark3;
}

float SumOf3Marks(float Mark1, float Mark2, float Mark3)
{
    return Mark1 + Mark2 + Mark3;
}

float CalculateAverage(float Mark1, float Mark2, float Mark3)
{
    return SumOf3Marks(Mark1, Mark2, Mark3) / 3;
}

void PrintResults(float Average)
{
    cout << "\n The average is : " << Average << endl;
}

int main()
{
    float Mark1, Mark2, Mark3;

    ReadNumbers(Mark1, Mark2, Mark3);

    PrintResults(CalculateAverage(Mark1, Mark2, Mark3));

    return 0;
}
