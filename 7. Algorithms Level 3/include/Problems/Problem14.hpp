#pragma once
#include "../HeadersBeforeCourse/Print.hpp"
#include "../HeadersBeforeCourse/Random.hpp"
#include "../HeadersAfterCourse/Check.hpp"

namespace Problem14 {
    namespace MrSolution {
        void PrintMatrix(int arr[3][3], short Rows, short Cols);
        bool IsScalarMarix(int Matrix1[3][3], short Rows, short Cols);
        void main();
    }

    namespace MySolution {
        void main();
    }
}