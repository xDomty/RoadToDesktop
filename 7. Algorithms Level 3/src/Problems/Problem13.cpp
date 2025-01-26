#include "../../include/Problems/Problem13.hpp"

namespace Problem13 {
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
        bool IsIdentityMarix(int Matrix1[3][3], short Rows, short Cols)
        {
            //check Diagonal elements are 1 and rest elements are 0
            for (short i = 0; i < Rows; i++)
            {
                for (short j = 0; j < Cols; j++)
                {
                    //check for diagonals element
                    if (i == j && Matrix1[i][j] != 1)
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
            //int Matrix1[3][3]={{1,2,3},{4,5,6},{7,8,9}};
            int Matrix1[3][3] = { {1,0,0},{0,1,0},{0,0,1} };
            cout << "\nMatrix1:\n";
            PrintMatrix(Matrix1, 3, 3);
            if (IsIdentityMarix(Matrix1, 3, 3))
                cout << "\nYES: Matrix is identity.";
            else
                cout << "\nNo: Matrix is NOT identity.";
        }
    }

    namespace MySolution {
        void main() {
             vector <vector <short>> matrix;
             vector <short> *temp = new vector <short>;
             *temp = {1,0,0};
             matrix.push_back(*temp);
             *temp = {0,1,0};
             matrix.push_back(*temp);
             *temp = {0,0,0};
             matrix.push_back(*temp);
             delete temp;

             Print::Print2DVectorAsMatrix("Here is the 3x3 Matrix:\n",matrix,"",true,3,3);
             cout << endl << endl;
             bool *result = new bool;
             *result = Check::IsEdintityMatrix<short>(matrix);
             cout << Print::CheckTrue(*result, "The Matrix Is Edintity", "The Matrix Is NOT Edintity");
             delete result;
        }
    }
}