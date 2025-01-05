#include <iostream>
using namespace std;
enum P38_en_PrimeOrNot { Prime = 1, NotPrime = 2 };

int P38_ReadAPositiveNumber(string message)
{
    int number = 0;
    do
    {
        cout << message;
        cin >> number;
    } while (number <= 0);

    return number;
}

P38_en_PrimeOrNot P38_CheckRESULT(int number)
{
    if (number == 1)
    {
        return P38_en_PrimeOrNot::NotPrime;
    }

    int HalfNumber = number / 2;

    for (int counter = 2; counter <= HalfNumber; counter++)
    {
        if (number % counter == 0)
        {
            return P38_en_PrimeOrNot::NotPrime;
        }
    }

    return P38_en_PrimeOrNot::Prime;
}

void P38_PrintPrimeNumbersFrom1ToLOOP(int loop)
{
    cout << endl << endl;
    cout << "/////////////////////////////////////////////////\n";
    cout << "The Prime Numbers from 1 to " << loop << " is:\n";
    cout << "/////////////////////////////////////////////////\n\n";

    /////////////////////////////////////////////////////////////
    ////////////////LOOP THE PRIME NUMBERS//////////////////////
    ///////////////////////////////////////////////////////////

    int counter = 1;
    for (counter; counter <= loop; counter++)
    {
        if (P38_CheckRESULT(counter) == P38_en_PrimeOrNot::Prime)
        {
            cout << counter << endl;
        }
    }

}

void Problem38()
{

    int loop = P38_ReadAPositiveNumber("Please enter a positive number of the loop?\n");

    P38_PrintPrimeNumbersFrom1ToLOOP(loop);

}

int main()
{
    Problem38();
}