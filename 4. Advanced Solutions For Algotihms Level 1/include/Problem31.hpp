#include <iostream>
#include <cmath>
using namespace std;

namespace Problem31
{

    void WELCOMER();

    template <typename T>
    void PrintResult(T N)
    {
        cout << "The power of 2 of " << N << " is: " << pow(N,2) << endl;
        cout << "The power of 3 of " << N << " is: " << pow(N,3) << endl;
        cout << "The power of 4 of " << N << " is: " << pow(N,4) << endl;
    }
    
    void main();

}