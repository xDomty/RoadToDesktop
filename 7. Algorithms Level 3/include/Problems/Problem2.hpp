#pragma once
#include "../HeadersBeforeCourse/Random.hpp"
#include "../HeadersBeforeCourse/Print.hpp"
#include "../HeadersAfterCourse/Operations.hpp"
using namespace std;

namespace Problem2
{
    namespace MrSolution
    {
         int RandomNumber(int From, int To);

         void FillMatrixWithRandomNumbers(int arr[3][3], short Rows, short Cols);

         void PrintMatrix(int arr[3][3], short Rows, short Cols);

         int RowSum(int arr[3][3],short RowNumber, short Cols);

         void PrintEachRowSum(int arr[3][3], short Rows, short Cols);

         void main();
    }

    namespace MySolution
    {
        void main();
    }
}
