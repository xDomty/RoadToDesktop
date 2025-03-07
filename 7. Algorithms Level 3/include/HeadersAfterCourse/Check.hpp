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

    template <typename T>
    bool IsNumberInMatrix(T numberToCheck,vector <vector <T>> vVec) {
        for (unsigned short i = 0; i < vVec.size(); i++) {
            for (unsigned short j = 0; j < vVec[i].size(); j++) {
                if (vVec[i][j] == numberToCheck) {
                    return true;
                }
            }
        }
        return false;
    }

    template <typename T>
    bool IsNumberInVector(T numberToCheck,vector <T> vVec) {
        for (unsigned short i = 0; i < vVec.size(); i++) {
                if (vVec[i] == numberToCheck) {
                    return true;
            }
        }
        return false;
    }


    template <typename T>
    vector <T> IntersectedNumbersIN2GivenMatrixs(vector <vector <T>> vVec1, vector <vector <T>> vVec2) {
        vector <T> result;
        for (unsigned short i = 0; i < vVec1.size(); i++) {
            for (unsigned short j = 0; j < vVec1[i].size(); j++) {
                if (IsNumberInMatrix(vVec1[i][j], vVec2) && (!IsNumberInVector<T>(vVec1[i][j], result))) {
                    result.push_back(vVec1[i][j]);
                }
            }
        }
        return result;
    }

    namespace Palindrome {
        template <typename T>
    bool IsRowPalindrome(short row , vector <vector <T>> vVec) {
            for (short i = 0; i < vVec[row].size(); i++) {
                if (vVec[row][i] != vVec[row][vVec[row].size() - i - 1]) { // the size is 1 index
                    return false;
                }
            }
            return true;
        }

        template <typename T>
        bool IsColumnPalindrome(short col, vector <vector <T>> vVec) {
            for (short i = 0; i < vVec.size(); i++) {
                if (vVec[i][col] != vVec[vVec.size() - i - 1][col]) { // the size is 1 index
                    return false;
                }
            }
        }

        template <typename T>
        bool IsMatrixRowsPalindrome(vector<vector <T>> vVec) {
            for (short i = 0; i < vVec.size(); i++) {
                if (IsRowPalindrome(i, vVec) == false) {
                    return false;
                }
            }
            return true;
        }

        template <typename T>
        bool IsMatrixColsPalindrome(vector <vector <T>> vVec) {
            for (short i = 0; i < vVec[0].size(); i++) {
                if (IsColumnPalindrome(i, vVec) == false) {
                    return false;
                }
            }
            return true;
        }
    }





}
