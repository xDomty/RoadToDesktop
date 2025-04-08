#include "../../include/Problems/Problem21.hpp"
#include <iomanip>

namespace Problem21 {
        void PrintFibonacciUsingLoop(short Number)
        {
            int FebNumber = 0;
            int Prev2 = 0, Prev1 = 1;
            cout << "1 ";
            for (short i = 2; i <= Number; ++i)
            {
                FebNumber = Prev1 + Prev2;
                cout << FebNumber << " ";
                Prev2 = Prev1;
                Prev1 = FebNumber;
            }
        }
        void main()
        {
            PrintFibonacciUsingLoop(10);
        }
}