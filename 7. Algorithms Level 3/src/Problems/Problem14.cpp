#include "../../include/Problems/Problem14.hpp"

namespace Problem14 {
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

    namespace MySolution {
        void main() {
             vector <vector <short>> matrix;
             vector <short> *temp = new vector <short>;
             *temp = {9,0,0};
             matrix.push_back(*temp);
             *temp = {0,9,0};
             matrix.push_back(*temp);
             *temp = {0,0,9};
             matrix.push_back(*temp);
             delete temp;

             Print::Print2DVectorAsMatrix("Here is the 3x3 Matrix:\n",matrix,"",true,3,3);
             bool *result = new bool;
             *result = Check::IsScalarMatrix<short>((matrix));
             cout << Print::CheckTrue(*result, "The Matrix Is Scalar", "The Matrix Is NOT Scalar");
             delete result;
        }
    }
}