#include "../../include/Problems/Problem2.hpp"

namespace Problem2
{
    namespace MrSolution
    {
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
               arr[i][j] = RandomNumber(1, 100);
               }
            }
         }

         void PrintMatrix(int arr[3][3], short Rows, short Cols)
         {
            for (short i = 0; i < Rows; i++)
            {
               for (short j = 0; j < Cols; j++)
               {
                  cout << setw(3) << arr[i][j] << " ";
               }
               cout << "\n";
            }
         }

         int RowSum(int arr[3][3],short RowNumber, short Cols)
         {
             int Sum = 0;
             for (short j = 0; j <= Cols - 1; j++)
             {
             Sum += arr[RowNumber][j];
             }
             return Sum;
         }

         void PrintEachRowSum(int arr[3][3], short Rows, short Cols)
         {
              cout << "\nthe following are the sum of each row in the matrix:\n";
              for (short i = 0; i < Rows; i++)
              {
                 cout << " Row " << i + 1 << " Sum = " << RowSum(arr,i,Cols) << endl;
              }
         }

         void main()
         {
             int arr[3][3];
             FillMatrixWithRandomNumbers(arr, 3, 3);
             cout << "\nThe following is a 3x3 random matrix:\n";
             PrintMatrix(arr, 3, 3);
             PrintEachRowSum(arr,3, 3);
         }
    }

    namespace MySolution
    {
        void main()
        {
            vector <vector<short>> vVec;

            Random::Numbers::FillVector2D<short>(vVec,3,3,1,100);
            Print::Print2DVectorAsMatrix<short>("\t\t\t       This Is A Random Matrix:",vVec,"\t\t\t      ",true);

            optional <short> sumRow1 = OPERATIONS::_2DVectors::SumRows::Specific<short>(vVec,{1},true);
            optional <short> sumRow2 = OPERATIONS::_2DVectors::SumRows::Specific<short>(vVec,{2},true);
            optional <short> sumRow3 = OPERATIONS::_2DVectors::SumRows::Specific<short>(vVec,{3},true);

            cout << "\t\t            The Sum Of Row 1 = " << *sumRow1 << endl; 
            cout << "\t\t            The Sum Of Row 2 = " << *sumRow2 << endl;
            cout << "\t\t            The Sum Of Row 3 = " << *sumRow3 << endl;

            cout << endl << endl;
        }
    }
}
