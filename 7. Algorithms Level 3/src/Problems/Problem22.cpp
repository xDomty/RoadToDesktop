#include "../../include/Problems/Problem22.hpp"

namespace Problem22 {
    namespace MrSolution {
        void PrintFibonacciUsingRecurssion(short Number, int Prev1, int Prev2)
        {
            int FebNumber = 0;
            if (Number > 0)
            {
                FebNumber = Prev2 + Prev1;
                Prev2 = Prev1;
                Prev1 = FebNumber;
                cout << FebNumber << " ";
                PrintFibonacciUsingRecurssion(Number - 1, Prev1, Prev2);
            }
        }
        void main()
        {
            PrintFibonacciUsingRecurssion(10, 0, 1);
        }

    }

    namespace MySolution {
        void main() {
            short HowManyFibonacciNumbers = Validate::PositiveAndZero<short>("How Many Fibonacci Numbers Do You Want To Print?");
            cout << "Here Is The Fibonacci Numbers:\n";
            OPERATIONS::_1DVectors::PrintFibonacciSeriesUsingRecursion<short>(HowManyFibonacciNumbers);
        }
    }
}