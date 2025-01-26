#pragma once
#include <iostream>
#include <vector>
using namespace std;

namespace FindAndCounters {
    template <typename T>
    T NumberInMatrix(T NumberToFind,vector <vector <T>> vVec) {
        short counter = 0;
        for (short i = 0; i < vVec.size(); i++) {
            for (short j = 0; j < vVec[i].size(); j++) {
                if (vVec[i][j] == NumberToFind) {
                    counter++;
                }
            }
        }
        return counter;
    }

}
