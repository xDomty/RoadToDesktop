#pragma once
#include "AllStandard.h"

namespace Problem3
{
    namespace MrSolution
    {

    }

    namespace MySolution
    {
        vector <short> _2DVectorRowsSumCalculationIntoVectorSpecific(vector <vector <short>> vVector, vector <unsigned short> WhatRowsToCalculate, short &sum, bool HandleCoreDumped = true)
        {
            if (HandleCoreDumped)
            {
                short *SumTemp;
                SumTemp = new short;
                if (!OPERATIONS::_2DVectors::SumRows::_2dVectorType::ShortINT::Specific(vVector,WhatRowsToCalculate,*SumTemp,false,true))
                { 
                    return {};
                }
                delete SumTemp;
            }
            vector <short> resultInVec;
            short *SumRowNumsTemp;
            for (int i = 0; i < WhatRowsToCalculate.size(); i++)
            {
                SumRowNumsTemp = new short;
                OPERATIONS::_2DVectors::SumRows::_2dVectorType::ShortINT::Specific(vVector,{WhatRowsToCalculate[i]},*SumRowNumsTemp,false,true);
                resultInVec.push_back(*SumRowNumsTemp);
                delete SumRowNumsTemp;
            }

            return resultInVec;
        }

        

        void main()
        {
            vector <vector<short int>> vVec;

            Random::Numbers::FillVector2DimensionalArray::VariableType::ShortIntegar(vVec,3,3,1,100);
            Print::Vector2D_AsMatrix::VectorType::ShortInteger("\t\t\t       This Is A Random Matrix:",vVec,"\t\t\t      ",true);
            short sum = 0;

            vector <short> TheSumOfEveryLineMYBABEEEEE = _2DVectorRowsSumCalculationIntoVectorSpecific(vVec, {1,2,3} , sum , true);
            Print::PrintVector("The Sum Of Row",TheSumOfEveryLineMYBABEEEEE,true);
        }
    }
}