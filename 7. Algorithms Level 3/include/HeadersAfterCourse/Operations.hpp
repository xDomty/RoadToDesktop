#pragma once
#include <iostream>
#include <string>
#include <optional>
#include <vector>

using namespace std;

namespace OPERATIONS {
    namespace _1DVectors {
        template <typename T>
        vector <T> Fibonacci(short NumbersOfFibonacci)
        {
            vector <T> vVec;
            vVec.push_back(1); // element 0
            vVec.push_back(1); // element 1

            for (short i = 0; i < NumbersOfFibonacci-2; i++)
            {
                vVec.push_back(vVec[0 + i] + vVec[1 + i]);
            }

            return vVec;
        }

        template <typename T>
        void PrintFibonacciSeriesUsingRecursion(short Number, T prev1 = 0, T prev2 = 1) {

            if (Number == 0) return;

            cout << prev1 + prev2 << "  ";
            PrintFibonacciSeriesUsingRecursion<T>(Number - 1, prev1 + prev2, prev1);
        }

    }


    namespace _2DVectors {
        namespace SumRows {
            template <typename FunctionType, typename TypeOf2dVector>
            optional<FunctionType> Specific(vector<vector<TypeOf2dVector>>& vVector, const vector<unsigned short> WhatRowsToCalculate, bool HandleCoreDumped = true) {
                if (vVector.empty() || vVector[0].empty()) {
                    cout << "ERROR, VECTOR " << (vVector.empty() ? "ROWS" : "COLS") << " CANNOT BE EMPTY!\n";
                    return nullopt;
                }

                if (HandleCoreDumped) {
                    for (const auto& row : WhatRowsToCalculate) {
                        if (row > vVector.size()) {
                            cout << "ERROR: YOU CANNOT PUT ROWS THAT ARE NOT INCLUDED IN THE VECTOR\n";
                            return nullopt;
                        }
                    }
                }

                FunctionType sum = 0;
                for (const auto& row : WhatRowsToCalculate) {
                    for (const auto& val : vVector[row - 1]) {
                        sum += val;
                    }
                }

                return sum;
            }

            template <typename FunctionType, typename TypeOf2dVector>
            optional<FunctionType> To(vector<vector<TypeOf2dVector>>& vVector, unsigned short HowManyRowsToCalculate, bool HandleCoreDumped = true) {
                if (vVector.empty() || vVector[0].empty()) {
                    cout << "ERROR, VECTOR " << (vVector.empty() ? "ROWS" : "COLS") << " CANNOT BE EMPTY!\n";
                    return nullopt;
                }

                if (HandleCoreDumped && HowManyRowsToCalculate > vVector.size()) {
                    cout << "ERROR: YOU CANNOT PUT NUMBER OF ROWS THAT ARE NOT INCLUDED IN THE VECTOR\n";
                    return nullopt;
                }

                FunctionType sum = 0;
                for (unsigned short i = 0; i < HowManyRowsToCalculate; ++i) {
                    for (const auto& val : vVector[i]) {
                        sum += val;
                    }
                }

                return sum;
            }
        }

        namespace SumOfEachRowInsideASeperateVector {
            template <typename FunctionType, typename TypeOf2dVector>
            vector<FunctionType> Specific(vector<vector<TypeOf2dVector>>& vVector, const vector<unsigned short> WhatRowsToCalculate, bool HandleCoreDumped = true) {
                if (vVector.empty() || vVector[0].empty()) {
                    cout << "ERROR, VECTOR " << (vVector.empty() ? "ROWS" : "COLS") << " CANNOT BE EMPTY!\n";
                    return {};
                }

                if (HandleCoreDumped) {
                    for (const auto& row : WhatRowsToCalculate) {
                        if (row > vVector.size()) {
                            cout << "ERROR: YOU CANNOT PUT ROWS THAT ARE NOT INCLUDED IN THE VECTOR\n";
                            return {};
                        }
                    }
                }

                vector<FunctionType> result;
                for (const auto& row : WhatRowsToCalculate) {
                    optional <FunctionType> sum = SumRows::Specific<FunctionType>(vVector, {row}, false);
                    if (sum.has_value()) {
                        result.push_back(*sum);
                    }
                }

                return result;
            }

            template <typename FunctionType, typename TypeOf2dVector>
            vector<FunctionType> To(vector<vector<TypeOf2dVector>>& vVector, unsigned short HowManyRowsToCalculate, bool HandleCoreDumped = true) {
                if (vVector.empty() || vVector[0].empty()) {
                    cout << "ERROR, VECTOR " << (vVector.empty() ? "ROWS" : "COLS") << " CANNOT BE EMPTY!\n";
                    return {};
                }

                if (HandleCoreDumped && HowManyRowsToCalculate > vVector.size()) {
                    cout << "ERROR: YOU CANNOT PUT NUMBER OF ROWS THAT ARE NOT INCLUDED IN THE VECTOR\n";
                    return {};
                }

                vector<FunctionType> result;
                for (unsigned short i = 1; i <= HowManyRowsToCalculate; ++i) {
                    optional <FunctionType> sum = SumRows::Specific<FunctionType>(vVector, {i + 1}, false);
                    if (sum.has_value()) {
                        result.push_back(*sum);
                    }
                }

                return result;
            }
        }

        namespace SumCols {
            template <typename FunctionType, typename TypeOf2dVector>
            optional<FunctionType> Specific(vector<vector<TypeOf2dVector>>& vVector, const vector<unsigned short> WhatColsToCalculate, bool HandleCoreDumped = true) {
                if (vVector.empty() || vVector[0].empty()) {
                    cout << "ERROR, VECTOR " << (vVector.empty() ? "ROWS" : "COLS") << " CANNOT BE EMPTY!\n";
                    return nullopt;
                }

                if (HandleCoreDumped) {
                    for (const auto& col : WhatColsToCalculate) {
                        if (col > vVector[0].size()) {
                            cout << "ERROR: YOU CANNOT PUT COLS THAT ARE NOT INCLUDED IN THE VECTOR\n";
                            return nullopt;
                        }
                    }
                }

                FunctionType sum = 0;
                for (const auto& row : vVector) {
                    for (const auto& col : WhatColsToCalculate) {
                        sum += row[col - 1];
                    }
                }

                return sum;
            }

            template <typename FunctionType, typename TypeOf2dVector>
            optional<FunctionType> To(vector<vector<TypeOf2dVector>>& vVector, unsigned short HowManyColsToCalculate, bool HandleCoreDumped = true) {
                if (vVector.empty() || vVector[0].empty()) {
                    cout << "ERROR, VECTOR " << (vVector.empty() ? "ROWS" : "COLS") << " CANNOT BE EMPTY!\n";
                    return nullopt;
                }

                if (HandleCoreDumped && HowManyColsToCalculate > vVector[0].size()) {
                    cout << "ERROR: YOU CANNOT PUT NUMBER OF COLS THAT ARE NOT INCLUDED IN THE VECTOR\n";
                    return nullopt;
                }

                FunctionType sum = 0;
                for (const auto& row : vVector) {
                    for (unsigned short j = 0; j < HowManyColsToCalculate; ++j) {
                        sum += row[j];
                    }
                }

                return sum;
            }
        }

        namespace SumOfEachColInsideASeperateVector {
            template <typename FunctionType, typename TypeOf2dVector>
            vector<FunctionType> Specific(vector<vector<TypeOf2dVector>>& vVector, const vector<unsigned short> WhatColsToCalculate, bool HandleCoreDumped = true) {
                if (vVector.empty() || vVector[0].empty()) {
                    cout << "ERROR, VECTOR " << (vVector.empty() ? "ROWS" : "COLS") << " CANNOT BE EMPTY!\n";
                    return {};
                }

                if (HandleCoreDumped) {
                    for (const auto& col : WhatColsToCalculate) {
                        if (col > vVector[0].size()) {
                            cout << "ERROR: YOU CANNOT PUT COLS THAT ARE NOT INCLUDED IN THE VECTOR\n";
                            return {};
                        }
                    }
                }

                vector<FunctionType> result;
                for (const auto& col : WhatColsToCalculate) {
                    auto sum = SumCols::Specific<FunctionType>(vVector, {col}, false);
                    if (sum) {
                        result.push_back(*sum);
                    }
                }

                return result;
            }

            template <typename FunctionType, typename TypeOf2dVector>
            vector<FunctionType> To(vector<vector<TypeOf2dVector>>& vVector, unsigned short HowManyColsToCalculate, bool HandleCoreDumped = true) {
                if (vVector.empty() || vVector[0].empty()) {
                    cout << "ERROR, VECTOR " << (vVector.empty() ? "ROWS" : "COLS") << " CANNOT BE EMPTY!\n";
                    return {};
                }

                if (HandleCoreDumped && HowManyColsToCalculate > vVector[0].size()) {
                    cout << "ERROR: YOU CANNOT PUT NUMBER OF COLS THAT ARE NOT INCLUDED IN THE VECTOR\n";
                    return {};
                }

                vector<FunctionType> result;
                for (unsigned short j = 1; j <= HowManyColsToCalculate; ++j) {
                    optional<FunctionType> sum = SumCols::Specific<FunctionType>(vVector, {j}, false);
                    if (sum.has_value()) {
                        result.push_back(*sum);
                    }
                }

                return result;
            }

            
        }

        namespace Vector2dMultiplyAnotherVector2dFor3rdVector2d
        {
            template <typename T>
            vector <vector<T>> TheFunction(vector <vector<T>> First2dVector, vector <vector<T>> Second2dVector, unsigned short HowManyRowsToCalculate, unsigned short HowManyColsToCalculate)
            {
                vector <vector<T>> Third2dVector;
                Third2dVector.resize(HowManyRowsToCalculate, vector<T>(HowManyColsToCalculate));
                for (unsigned short i = 0; i < HowManyRowsToCalculate; i++)
                {
                    for (unsigned short j = 0; j < HowManyColsToCalculate; j++)
                    {
                        Third2dVector[i][j] = First2dVector[i][j] * Second2dVector[i][j];
                    }
                }

                return Third2dVector;
            }
        }

        namespace MaxAndMin {
            template <typename T>
            T Max(vector <vector <T>> vVec) {
                T max = vVec[0][0];

                for (unsigned short i = 0; i < vVec.size(); i++) {
                    for (unsigned short j = 0; j < vVec[i].size(); j++) {
                        if (vVec[i][j] > max) {
                            max = vVec[i][j];
                        }
                    }
                }
                return max;
            }

            template <typename T>
            T Min(vector <vector <T>> vVec) {
                T min = vVec[0][0];

                for (unsigned short i = 0; i < vVec.size(); i++) {
                    for (unsigned short j = 0; j < vVec[i].size(); j++) {
                        if (vVec[i][j] < min) {
                            min = vVec[i][j];
                        }
                    }
                }
                return min;
            }
        }


    }

    namespace StringsAndChars {
        string EachFirstLetterOfEachWord(string S1);
        string EachFirstLetterOfEachWordButCapital(string S1);
        string TheTextButEachFirstWordIsACapitalLetter(string S1);
        string TheTextButEachFirstWordIsALowerLetter(string S1);
        string TheTextButAllWordsAreCapitalLetters(string S1);
        string TheTextButAllWordsAreSmallLetters(string S1);
        char InvertCharacterCase(char myChar);
		string StringInvertedCase(string S1);
        
        
        template <typename T>
        T ReturnHowManyUpperInString(string str) {
            T HowManyUpper = 0;
            for (T i = 0; i < str.length(); i++) { if (isupper(str[i])) HowManyUpper++; }
            return HowManyUpper;
        }

        template <typename T>
        T ReturnHowManyLowerInString(string str) {
            T HowManyLower = 0;
            for (T i = 0; i < str.length(); i++) { if(islower(str[i]))  HowManyLower++; }
            return HowManyLower;
        }

        enum WhatToCountInString { Upper, Lower, UpperAndLower, AllLetters };

        template <typename T>
        T UpperLowerLength(string str, WhatToCountInString YourChoice) {
            switch (YourChoice) {
                 case WhatToCountInString::Upper         : return ReturnHowManyUpperInString<T>(str);                                      break;
                 case WhatToCountInString::Lower         : return ReturnHowManyLowerInString<T>(str);                                      break;
				 case WhatToCountInString::UpperAndLower : return ReturnHowManyUpperInString<T>(str) + ReturnHowManyLowerInString<T>(str); break;
				 case WhatToCountInString::AllLetters    : return str.length();		 	   									               break;
            }
        }

        template <typename T>
		optional <vector <T>> LocateCharacter(string str, char CharToLocate) {
			vector <T> result;
			for (T i = 0; i < str.length(); i++) {
				if (str[i] == CharToLocate) result.push_back(i+1);
			}
            if (result.empty()) { return nullopt; }
            else { return result; };
		}

        template <typename T>
		T CountChar(string str, char CharToCount) {

			T count = 0;
			for (T i = 0; i < str.length(); i++) {
				if (str[i] == CharToCount) count++;
			}
            return count;

		}

        template <typename T>
        T CountCharUpperAndLower(string str, char CharToCount) {
            T count = 0;
            for (T i = 0; i < str.length(); i++) {
				if (str[i] == CharToCount) count++;
				else if (str[i] == toupper(CharToCount)) count++;
            }
            return count;
        }

    }

}
