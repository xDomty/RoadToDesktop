#include "../../include/Problems/Problem20.hpp"
#include <iomanip>

namespace Problem20 {

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
    
    int IsPalindromeMatrix(int Matrix1[3][3], short Rows, short Cols)
    {
        for (short i = 0; i < Rows; i++)
        {
            for (short j = 0; j < Cols / 2; j++)
            {
                if (Matrix1[i][j] != Matrix1[i][Cols - 1 - j])
                {
                    return false;
                }
            }
        }
        return true;
    }

    void main()
    {
        int Matrix1[3][3] = { {1,2,1},{5,5,5},{7,3,7} };
        cout << "\nMatrix1:\n";
        PrintMatrix(Matrix1, 3, 3);
        if (IsPalindromeMatrix(Matrix1, 3, 3))
        {
            cout << "\nYes: Matrix is Palindrome\n";
        }
        else
            cout << "\nNo: Matrix is NOT Palindrome\n";
    }

}