#include "../../include/Problems/Problem9.hpp"

namespace Problem9 {
    namespace MrSolution{
        int RandomNumber(int From, int To)
        {
            //Function to generate a random number
            int randNum = rand() % (To - From + 1) + From;
            return randNum;
        }
        void FillMatrixWithRandomNumbers(int arr[3][3], short Rows, short
        Cols)
        {
            for (short i = 0; i < Rows; i++)
            {
                for (short j = 0; j < Cols; j++)
                {
                    arr[i][j] = RandomNumber(1, 10);
                }
            }
        }
        void PrintMatrix(int arr[3][3], short Rows, short Cols)
        {
            for (short i = 0; i < Rows; i++)
            {
                for (short j = 0; j < Cols; j++)
                {
                    printf(" %0*d ", 2, arr[i][j]);
                    //cout << setw(3) << arr[i][j] << " ";
                }
                cout << "\n";
            }
        }
        void PrintMiddleRowOfMatrix(int arr[3][3], short Rows, short Cols)
        {
            short MiddleRow = Rows / 2;
            for (short j = 0; j < Cols; j++)
            {
                printf(" %0*d ", 2, arr[MiddleRow][j]);
            }
            cout << "\n";
        }
        void PrintMiddleColOfMatrix(int arr[3][3], short Rows, short Cols)
        {
            short MiddleCol = Cols / 2;
            for (short j = 0; j < Rows; j++)
            {
                printf(" %0*d ", 2, arr[j][MiddleCol]);
            }
            cout << "\n";
        }
        void main() {
            int Matrix1[3][3];
            FillMatrixWithRandomNumbers(Matrix1, 3, 3);
            cout << "\nMatrix1:\n";
            PrintMatrix(Matrix1, 3, 3);
            cout << "\nMiddle Row of Matrix1 is:\n";
            PrintMiddleRowOfMatrix(Matrix1, 3, 3);
            cout << "\nMiddle Col of Matrix1 is:\n";
            PrintMiddleColOfMatrix(Matrix1, 3, 3);
        }
    }

    namespace MySolution {
        void main() {
            vector <vector<short>> vVec;
            Random::Numbers::FillVector2D<short>(vVec,3,3,1,100);
            Print::Print2DVectorAsMatrix("Here is the 3x3 Matrix:\n",vVec,"",true,3,3);
            Print::Print2dVectorAsMatrixSpecific<short>("Here is the rows of {1,2,3}:\n","Here is the cols of {1,2}",vVec,"",true,{1,2,3},{1,2});
        }
    }
}