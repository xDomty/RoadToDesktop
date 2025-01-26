#include "../../include/Problems/Problem12.hpp"

namespace Problem12 {
    namespace MrSolution {
        int RandomNumber(int From, int To)
        {
            //Function to generate a random number
            int randNum = rand() % (To - From + 1) + From;
            return randNum;
        }
        void FillMatrixWithRandomNumbers(int arr[3][3], short Rows, short Cols)
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
        bool AreTypicalMatrices(int Matrix1[3][3], int Matrix2[3][3], short Rows, short Cols)
        {
            for (short i = 0; i < Rows; i++)
            {
                for (short j = 0; j < Cols; j++)
                {
                    if (Matrix1[i][j] != Matrix2[i][j])
                    {
                        return false;
                    }
                }
            }
            return true;
        }
        void main()
        {
            int Matrix1[3][3], Matrix2[3][3];
            FillMatrixWithRandomNumbers(Matrix1, 3, 3);
            cout << "\nMatrix1:\n";
            PrintMatrix(Matrix1, 3, 3);
            FillMatrixWithRandomNumbers(Matrix2, 3, 3);
            cout << "\nMatrix2:\n";
            PrintMatrix(Matrix2, 3, 3);
            if (AreTypicalMatrices(Matrix1, Matrix2, 3, 3))
                cout << "\nYES: both martices are typical.";
            else
                cout << "\nNo: martices are NOT typical.";
        }
    }

    namespace MySolution {
        void main() {
            vector <vector<short>> vVec;
            vector <vector<short>> vVec2;
            vector <short> *temp;

            for (short i = 0; i < 3; i++)
            {
                temp = new vector<short>;
                for (short i = 0; i < 3; i++) {
                    temp->push_back(1);
                }
                vVec.push_back(*temp);
                vVec2.push_back(*temp);
                delete temp;
            }



            Print::Print2DVectorAsMatrix("Here is the first 3x3 Matrix:\n",vVec,"",true,3,3);
            Print::Print2DVectorAsMatrix("Here is the second 3x3 Matrix:\n",vVec2,"",true,3,3);

            bool result = Comparing::_2MatrixsElements<short>(vVec,vVec2);
            cout << Print::CheckTrue(result, "The Both Matrixs Elements Are Equal","The Both Matrixs Elements Are NOT Equal") << endl;
        }

    }
}