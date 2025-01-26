#include "../../include/Problems/Problem10.hpp"

namespace Problem10 {
    namespace MrSolution {
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
        int SumOfMatrix(int Matrix1[3][3], short Rows, short Cols)
        {
            int Sum = 0;
            for (short i = 0; i < Rows; i++)
            {
                for (short j = 0; j < Cols; j++)
                {
                    Sum += Matrix1[i][j];
                }
            }
            return Sum;
        }
        void main()
        {
            int Matrix1[3][3];
            FillMatrixWithRandomNumbers(Matrix1, 3, 3);
            cout << "\nMatrix1:\n";
            PrintMatrix(Matrix1, 3, 3);
            cout << "\nSum of Matrix1 is: " << SumOfMatrix(Matrix1, 3, 3);
        }

    }

    namespace MySolution {
        void main() {
            vector <vector <short>> vVec;
            Random::Numbers::FillVector2D<short>(vVec,3,3,1,10);
            optional <short> Result = OPERATIONS::_2DVectors::SumRows::To<short>(vVec,3,true);

            Print::Print2DVectorAsMatrix("Here is the 3x3 Matrix:\n",vVec,"",true,3,3);
            cout << endl;
            cout << "And here is the sum of the matrix elements : " << *Result << endl;
        }
    }
}