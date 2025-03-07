#include "../../include/Problems/Problem21.hpp"

namespace Problem21 {
    namespace MrSolution {
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

    namespace MySolution {
        void main() {
            short HowManyFibonacciNumbers = Validate::Positive<short>("How Many Fibonacci Numbers Do You Want To Print?");
            vector <short> vVec = OPERATIONS::_1DVectors::Fibonacci<short>(HowManyFibonacciNumbers);

            cout << "Here Is The Fibonacci Numbers:\n";
            Print::PrintVector("Fibonacci number ",vVec,true);
        }
    }
}