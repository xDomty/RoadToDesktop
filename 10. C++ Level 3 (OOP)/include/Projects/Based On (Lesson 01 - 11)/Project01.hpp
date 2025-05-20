#pragma once
#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

// Project 1 - Calculator's Class ( Based on lesson 01 to 11 ) --> Namespace's Start

    namespace Project01 {

        // clsCalculator (Start Declaring Block)

             class clsCalculator {

                 private: // Definitions of private members are in the header
                     float _result = 0.0;                                      

                     enum  _OpType { Sum , Substract , Multiply , Divide };

                     vector <vector<float>> _OpHistory;
                     void _AddOpHistory(float PreviousResult,float TheOperatedNumForTheNewResult, _OpType OpType) {
                         vector <float> OpHistory;
                         OpHistory.push_back(PreviousResult);                                  // Previous Result             (Col 1)
                         OpHistory.push_back(TheOperatedNumForTheNewResult);                   // The OperatedNumForTheResult (Col 2)
                         OpHistory.push_back(_result);                                         // The Result After Operation  (Col 3)
                         OpHistory.push_back(static_cast<float>(OpType));                      // Operation Type              (Col 4)

                         _OpHistory.push_back(OpHistory);
                     }

                 protected: // Nothing here

                 public:

                     void Clear();

                     void SumNum(float NumToAdd);

                     void SubNum(float NumToSubstract);

                     void MultiplyNum(float NumToMultiply);

                     void DivideNum(float NumToDivide);

                     float GetResult();

                     void GetFinalResultsWithHistory();
             };

        // clsCalculator (End Declaring Block)


        // run (Start declaring the Project 1 excutable Block)

             void run();

        // run (End declaring the Project 1 excutable Block)
    }

// Project 1 - Calculator's Class ( Based on lesson 01 to 11 ) --> Namespace's End