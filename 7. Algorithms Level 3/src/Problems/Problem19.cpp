#include "../../include/Problems/Problem19.hpp"

namespace Problem19 {
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
        int MinNumberInMatrix(int Matrix1[3][3], short Rows, short Cols)
        {
            int Min = Matrix1[0][0];
            for (short i = 0; i < Rows; i++)
            {
                for (short j = 0; j < Cols; j++)
                {
                    if (Matrix1[i][j] < Min)
                    {
                        Min = Matrix1[i][j];
                    }
                }
            }
            return Min;
        }
        int MaxNumberInMatrix(int Matrix1[3][3], short Rows, short Cols)
        {
            int Max = Matrix1[0][0];
            for (short i = 0; i < Rows; i++)
            {
                for (short j = 0; j < Cols; j++)
                {
                    if (Matrix1[i][j] > Max)
                    {
                        Max = Matrix1[i][j];
                    }
                }
            }
            return Max;
        }
        void main()
        {
            int Matrix1[3][3] = { {77,5,12},{22,20,6},{14,3,9} };
            cout << "\nMatrix1:\n";
            PrintMatrix(Matrix1, 3, 3);
            cout << "\nMinimum Number is: "; cout << MinNumberInMatrix(Matrix1, 3, 3);
            cout << "\n\nMax Number is: "  ; cout << MaxNumberInMatrix(Matrix1, 3, 3);
        }

    }

    namespace MySolution {
        void main() {
            vector <vector<short>> vVec;
            Random::Numbers::FillVector2D<short>(vVec,3,3,1,100);
            Print::Print2DVectorAsMatrix("Here is the 3x3 Matrix:\n",vVec,"",true,3,3);
            cout << endl;
            short max = OPERATIONS::_2DVectors::MaxAndMin::Max(vVec);
            short min = OPERATIONS::_2DVectors::MaxAndMin::Min(vVec);

            cout << "The Max Value Is: " << max << endl;
            cout << "The Min Value Is: " << min << endl;
        }
    }
}