#include <iostream>
#include <string>
using namespace std;

void ReadNumbers(int& A, int& B, int& C)
{
    cout << "Please enter Number A: ";
    cin >> A;

    cout << "Please enter Number B: ";
    cin >> B;

    cout << "Please enter Number C: ";
    cin >> C;
}

int MaxOf3Numbers(int A, int B, int C)
{
    return max(A, max(B, C));
}

void PrintResults(int Max)
{
    cout << "\nThe Maximum Number is: " << Max << endl;
}

int main()
{
    int A, B, C;

    ReadNumbers(A, B, C);

    PrintResults(MaxOf3Numbers(A, B, C));

    return 0;
}
