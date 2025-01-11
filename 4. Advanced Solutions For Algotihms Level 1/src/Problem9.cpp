#include "../include/Problem9.hpp"

namespace Problem9
{
    void main()
    {
        float num[3];
        cout << "Hello!\nThis program makes you enter 3 numbers then it calculates the sum of it.\n";
        TakeInput(num);
        cout << "The result of " << num[0] << " + " << num[1] << " + " << num[2] << " = " << SumOf3Nums<float>(num);
    }

}