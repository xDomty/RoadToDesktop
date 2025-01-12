#include <iostream>
using namespace std;

namespace Problem26
{
    void WELCOMER();

    template <typename T>
    void PrintFrom1ToN(T N)
    {
        for (T i = 1; i <= N; i++)
        {
            cout << i << endl;
        }
    }

    void main();
}