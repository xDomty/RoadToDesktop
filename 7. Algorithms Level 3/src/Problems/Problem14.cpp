#include "../../include/Problems/Problem14.hpp"
#include <iomanip>

namespace Problem14 {
        void PrintMatrix(int arr[3][3], short Rows, short Cols)
        {
            for (short i = 0; i < Rows; i++)
            {
                for (short j = 0; j < Cols; j++)
                {
                    //printf(" %0*d ", 2, arr[i][j]);
                    cout << setw(3) << arr[i][j] << " ";
                }
                cout << "\n";
            }
        }
        bool IsScalarMarix(int Matrix1[3][3], short Rows, short Cols)
        {
            int FirstDiagElemement = Matrix1[0][0];
            for (short i = 0; i < Rows; i++)
            {
                for (short j = 0; j < Cols; j++)
                {
                    //check for diagonals element
                    if (i == j && Matrix1[i][j] != FirstDiagElemement)
                    {
                        return false;
                    }
                    //check for rest elements
                    else if (i != j && Matrix1[i][j] != 0)
                    {
                        return false;
                    }
                }
            }
            return true;
        }
        void main()
        {
            int Matrix1[3][3] = { {9,0,0},{0,9,0},{0,0,9} };
            cout << "\nMatrix1:\n";
            PrintMatrix(Matrix1, 3, 3);
            if (IsScalarMarix(Matrix1, 3, 3))
                cout << "\nYES: Matrix is scalar.";
            else
                cout << "\nNo: Matrix is NOT scalar.";
        }
}