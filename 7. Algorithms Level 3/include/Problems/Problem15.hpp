#pragma once
#include "../HeadersBeforeCourse/Print.hpp"
#include "../HeadersBeforeCourse/Random.hpp"
#include "../HeadersBeforeCourse/Force.hpp"
#include "../HeadersAfterCourse/FindAndCounters.hpp"

namespace Problem15 {
    namespace MrSolution {
        void PrintMatrix(int arr[3][3], short Rows, short Cols);
        short CountNumberInMatrix(int Matrix1[3][3], int Number, short Rows, short Cols);
        void main();
    }

    namespace MySolution {
        void main();
    }
}
