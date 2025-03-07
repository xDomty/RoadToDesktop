#include "../../include/Problems/Problem17.hpp"

namespace Problem17 {
    namespace MrSolution {
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
        short CountNumberInMatrix(int Matrix1[3][3], int Number, short
        Rows, short Cols)
        {
            short NumberCount = 0;
            for (short i = 0; i < Rows; i++)
            {
                for (short j = 0; j < Cols; j++)
                {
                    if (Matrix1[i][j] == Number)
                    {
                        NumberCount++;
                    };
                }
            }
            return NumberCount;
        }
        bool IsNumberInMatrix(int Matrix1[3][3], int Number, short Rows,
        short Cols)
        {
            short NumberCount = 0;
            for (short i = 0; i < Rows; i++)
            {
                for (short j = 0; j < Cols; j++)
                {
                    if (Matrix1[i][j] == Number)
                    {
                        return true;
                    };
                }
            }
            return false;
        }
        void main()
        {
            int Matrix1[3][3] = { {77,5,12},{22,20,1},{1,0,9} };
            cout << "\nMatrix1:\n";
            PrintMatrix(Matrix1, 3, 3);
            int Number;
            cout << "\nPlease Enter the number to look for in matrix? ";
            cin >> Number;
            //Using Count is a slower method
            if (CountNumberInMatrix(Matrix1, Number, 3, 3) > 0)
                cout << "\nYes it is there.\n";
            else
                cout << "\nNo: It's NOT there.\n";
            //This is faster mthod
            if (IsNumberInMatrix(Matrix1, Number, 3, 3))
                cout << "\nYes it is there.\n";
            else
                cout << "\nNo: It's NOT there.\n";
        }
    }

    namespace MySolution {
        void main() {
            vector <vector <short>> matrix;
            Random::Numbers::FillVector2D<short>(matrix,3,3,0,100);
            Print::Print2DVectorAsMatrix("Here is the 3x3 Matrix:\n",matrix,"",true,3,3);

            short numberToCheck = Validate::Any<short>("Enter a number to check if it is in the matrix:","Invaild input please try again");
            bool result = Check::IsNumberInMatrix<short>(numberToCheck,matrix);
            cout << Print::CheckTrue(result,"The number found in matrix", "The number is not found in matrix") << endl;
        }

    }
}