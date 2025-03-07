#pragma once
#include "../HeadersBeforeCourse/Print.hpp"
#include "../HeadersBeforeCourse/Random.hpp"
#include "../HeadersAfterCourse/Check.hpp"

namespace Problem18 {
    namespace MrSolution {
        void PrintMatrix(int arr[3][3], short Rows, short Cols);
        bool IsNumberInMatrix(int Matrix1[3][3], int Number, short Rows, short Cols);
        void PrintIntersectedNumbers(int Matrix1[3][3], int Matrix2[3][3], short Rows, short Cols);
        void main();
    }

    namespace MySolution {
        void main();
    }
}