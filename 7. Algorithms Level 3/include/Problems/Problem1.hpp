#pragma once
#include "../HeadersBeforeCourse/Random.hpp"
#include "../HeadersBeforeCourse/Print.hpp"

namespace Problem1
{
    namespace MrSolution
    {
        void FillMatrixWithRandomNumbers(int arr[3][3], short Rows, short Cols)
        {
            for (short i = 0; i < Rows; i++)
            {
               for (short j = 0; j < Cols; j++)
               {
                  arr[i][j] = Random::Numbers::Generate<short>(1, 100);
               }
            }

        }

        void PrintMatrix(int arr[3][3], short Rows, short Cols)
        {
           for (short i = 0; i < Rows; i++)
           {
              for (short j = 0; j < Cols; j++)
              {
                 cout <<setw(3) << arr[i][j] << " ";
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

    namespace MySolution
    {
        void main()
        {
            vector <vector<short int>> vVec;
            Random::Numbers::FillVector2D<short>(vVec,3,3,1,100);
            Print::Print2DVectorAsMatrix("\t\tThis Is A Random Matrix:",vVec,"\t   ",true,2,2);
            cout << endl;
        }

    }
}
