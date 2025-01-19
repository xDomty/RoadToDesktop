#pragma once
#include "../HeadersBeforeCourse/Random.hpp"
#include "../HeadersBeforeCourse/Print.hpp"
#include "../HeadersAfterCourse/Operations.hpp"

namespace Problem3
{
    namespace MrSolution
    {

    }

    namespace MySolution
    {
        void main()
        {
            vector <vector<short int>> vVec;

            Random::Numbers::FillVector2D<short>(vVec,3,3,1,100);
            Print::Print2DVectorAsMatrix("\t\t\t       This Is A Random Matrix:",vVec,"\t\t\t      ",true);

            vector <short> TheSumOfEveryLineMYBABEEEEE = OPERATIONS::_2DVectors::SumOfEachRowInsideASeperateVector::Specific<short>(vVec, {1,2,3} , true);
            Print::PrintVector("\t\t\tThe Sum Of Row",TheSumOfEveryLineMYBABEEEEE,true);
        }
    }
}
