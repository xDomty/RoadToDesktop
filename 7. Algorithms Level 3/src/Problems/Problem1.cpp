#include "../../include/Problems/Problem1.hpp"
#include <iostream>
#include <iomanip>
using namespace std;

namespace Problem1
{
        int RandomNumber(int From, int To)
        {
            int randNum = rand() % (To - From + 1) + From;
            return randNum;
        }

        void FillMatrixWithRandomNumbers(int arr[3][3], short Rows, short Cols)
        {
            for (short i = 0; i < Rows; i++)
            {
               for (short j = 0; j < Cols; j++)
               {
                  arr[i][j] = RandomNumber(1, 100);
               }
            }

        }

        void PrintMatrix(int arr[3][3], short Rows, short Cols)
        {
           for (short i = 0; i < Rows; i++)
           {
              for (short j = 0; j < Cols; j++)
              {
                 cout << setw(3) << arr[i][j] << " ";
              }
               cout << "\n";
           }
        }

        void main()
        {
            int arr[3][3];
            FillMatrixWithRandomNumbers(arr, 3, 3);
            cout << "\n The following is a 3x3 random matrix:\n";
            PrintMatrix(arr, 3, 3);
        }
    
}
