#pragma once
#include <iostream>
#include <string>
#include <optional>
#include <vector>

using namespace std;

namespace OPERATIONS {
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
                    FunctionType sum = 0;
                    for (const auto& val : vVector[row - 1]) {
                        sum += val;
                    }
                    result.push_back(sum);
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
                for (unsigned short i = 0; i < HowManyRowsToCalculate; ++i) {
                    FunctionType sum = 0;
                    for (const auto& val : vVector[i]) {
                        sum += val;
                    }
                    result.push_back(sum);
                }

                return result;
            }
        }

        namespace SumCols {
            template <typename FunctionType, typename TypeOf2dVector>
            optional<FunctionType> Specific(vector<vector<TypeOf2dVector>>& vVector, const vector<unsigned short>WhatColsToCalculate, bool HandleCoreDumped = true) {
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
    }
}
