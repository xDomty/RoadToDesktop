#include "../../../include/Projects/Based On (Lesson 01 - 11)/Project01.hpp"

// Project 1 - Calculator's Class ( Based on lesson 01 to 11 ) --> Namespace's Start

    namespace Project01 {

        // clsCalculator (Start Defining Block)

                 void clsCalculator::Clear() {
                     _result = 0;
                     _OpHistory.clear();
                 }

                 void clsCalculator::SumNum(float NumToAdd) {
                     float PreviousResult = _result;
                     _result = _result + NumToAdd;
                     
                     _AddOpHistory(PreviousResult, NumToAdd, _OpType::Sum);
                 }

                 void clsCalculator::SubNum(float NumToSubstract) {
                     float PreviousResult = _result;
                     _result = _result - NumToSubstract;

                     _AddOpHistory(PreviousResult, NumToSubstract, _OpType::Substract);
                 }

                 void clsCalculator::MultiplyNum(float NumToMultiply) {
                     float PreviousResult = _result;
                     _result = _result * NumToMultiply;

                     _AddOpHistory(PreviousResult, NumToMultiply, _OpType::Multiply);
                 }

                 void clsCalculator::DivideNum(float NumToDivide) {
                     float PreviousResult = _result;
                     _result = _result / NumToDivide;

                     _AddOpHistory(PreviousResult, NumToDivide, _OpType::Divide);
                 }

                 float clsCalculator::GetResult() {
                     return _result;
                 }

                 void clsCalculator::GetFinalResultsWithHistory() {
                     cout << fixed << setprecision(2);  // Format floats to 2 decimal places

                     cout << "Final Result: " << clsCalculator::GetResult() << "\n\n";
                     cout << "Operation History:\n";
                     cout << setw(15) << "Previous"
                          << setw(15) << "Operand"
                          << setw(15) << "Result"
                          << setw(15) << "Operation" << "\n";

                     for (const auto& op : _OpHistory) {
                         string opTypeStr;
                         switch (static_cast<_OpType>(static_cast<int>(op[3]))) {
                         case Sum:       opTypeStr = "Sum"; break;
                         case Substract: opTypeStr = "Subtract"; break;
                         case Multiply:  opTypeStr = "Multiply"; break;
                         case Divide:    opTypeStr = "Divide"; break;
                         default:        opTypeStr = "Unknown"; break;
                         }

                         cout << setw(15) << op[0]
                             << setw(15) << op[1]
                             << setw(15) << op[2]
                             << setw(15) << opTypeStr << "\n";
                     }
                 }

        // clsCalculator (End Defining Block)


        // run (Start defining the Project 1 excutable Block)

             void run() {
                 clsCalculator Calculator;
                 Calculator.SumNum(10);
				 Calculator.SumNum(5);
                 Calculator.MultiplyNum(20);

                 Calculator.GetFinalResultsWithHistory();
                 
             }

        // run (End defining the Project 1 excutable Block)
    }

// Project 1 - Calculator's Class ( Based on lesson 01 to 11 ) --> Namespace's End