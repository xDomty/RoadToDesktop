#pragma once
#include <iostream>
#include <vector>
#include "FindAndCounters.hpp"
using namespace std;

namespace Check {
    template<typename T>
    bool IsEdintityMatrix(const vector<vector<T>> vec) {
        if (vec[0].size() != vec.size()) {
            return false;
        }
        for (unsigned short row = 0; row < vec.size(); row++) {
            for (unsigned short col = 0; col < vec[row].size(); col++) {
                if ((row == col && vec[row][col] != 1) || (row != col && vec[row][col] != 0)) {
                    return false;
                }
            }
        }
        return true;
    }

    template <typename T>
    bool IsScalarMatrix(const vector<vector<T>> vec) {
        if (vec[0].size() != vec.size()) {
            return false;
        }

        T DiagonalPrameter = vec[0][0];
        for (unsigned short row = 0; row < vec.size(); row++) {
            for (unsigned short col = 0; col < vec[row].size(); col++) {
                if ((row != col && vec[row][col] != 0) || ((row == col && vec[row][col] != DiagonalPrameter)))
                    return false;
            }
        }

        return true;
    }

    template <typename T>
    bool IsSparceMatrix(vector<vector<T>> vVec) {
        short MatrixSize = vVec.size() * vVec[0].size();
        return ((FindAndCounters::NumberInMatrix<T>(0, vVec)) > (MatrixSize / 2));
    }

}
