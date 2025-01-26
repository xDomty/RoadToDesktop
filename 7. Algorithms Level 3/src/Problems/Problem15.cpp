#include "../../include/Problems/Problem15.hpp"

namespace Problem15 {
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
        void main()
        {
            int Matrix1[3][3] = { {9,1,12},{0,9,1},{0,9,9} };
            cout << "\nMatrix1:\n";
            PrintMatrix(Matrix1, 3, 3);
            int Number;
            cout << "\nEnter the number to count in matrix? ";
            cin >> Number;
            cout << "\nNumber " << Number << " count in matrix is "
            << CountNumberInMatrix(Matrix1, Number, 3, 3);
        }

    }

    namespace MySolution {
        void main() {
            vector <vector <short>> matrix;
            Random::Numbers::FillVector2D<short>(matrix,3,3,1,10);

            Print::Print2DVectorAsMatrix("Here is the 3x3 Matrix:\n",matrix,"",true,3,3);

            short NumToFind = InputForce::Any<short>("Enter a number to find:","Invaild input please try again");

            short result = FindAndCounters::NumberInMatrix<short>(NumToFind,matrix);

            cout << "The number " << NumToFind << " was found " << result << " times" << endl;
        }

    }
}
