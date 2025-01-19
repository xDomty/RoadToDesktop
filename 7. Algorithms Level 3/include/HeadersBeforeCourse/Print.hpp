#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>
#include <sstream>
using namespace std;

namespace Print {

    template<typename T>
    void PrintArrayNumbers(T* arr, int ArrayLength, int FormatOfArray = 1, string message = "", string messagePart2 = "", string TheMeterOfResult = "") {
        cout << "_________________________________\n\n";
        for (int i = 0; i < ArrayLength; i++) {
            cout << message << " [" << i + 1 << "] " << messagePart2 << " : ";
            printf("%0*d", FormatOfArray, arr[i]);
            cout << ' ' << TheMeterOfResult << endl;
        }
        cout << "_________________________________\n";
    }

    void PrintFile(const string& FilePath) {
        fstream NewFile;
        NewFile.open(FilePath, ios::in); // READ MODE
        if (NewFile.is_open()) {
            string line;
            while (getline(NewFile, line)) {
                cout << line << endl;
            }
            NewFile.close();
        }
    }

    template<typename T>
    void PrintVector(const string& message, const vector<T>& vVector, bool PrintNumOfLoop) {
        int counter = 0;
        for (const auto& item : vVector) {
            if (PrintNumOfLoop) {
                counter++;
                cout << message << " [" << counter << "] : ";
            } else {
                cout << message << " : ";
            }
            cout << item << endl;
        }
    }

    template<typename T>
    bool Print2DVectorAsMatrix(const string& message, const vector<vector<T>>& vVector, const string& TheLocationOfTheMatrix, bool PrintTopAndBottomBorder, short NumbersOfRowsToPrint = -1, short NumbersOfColsToPrint = -1) {
        if ((vVector.empty() || vVector[0].empty()) || (NumbersOfRowsToPrint < -1 || NumbersOfColsToPrint < -1)) {
            cout << "ERROR: THE VECTOR ROWS OR COLS CANNOT BE EMPTY OR LESS THAN -1 (-1 FOR PRINTING ALL ROWS)\n";
            return false;
        }

        if (NumbersOfRowsToPrint == -1) {
            NumbersOfRowsToPrint = vVector.size();
        }
        if (NumbersOfColsToPrint == -1) {
            NumbersOfColsToPrint = vVector[0].size();
        }

        cout << message;

        size_t maxNumWidth = 0;
        for (short i = 0; i < NumbersOfRowsToPrint; ++i) {
            for (short j = 0; j < NumbersOfColsToPrint; ++j) {
                maxNumWidth = max(maxNumWidth, to_string(vVector[i][j]).length());
            }
        }

        vector<string> formattedRows;
        stringstream ss;
        for (short i = 0; i < NumbersOfRowsToPrint; ++i) {
            ss.str("");
            ss.clear();
            for (short j = 0; j < NumbersOfColsToPrint; ++j) {
                ss << setw(maxNumWidth) << setfill('0') << vVector[i][j] << "  |  ";
            }
            formattedRows.push_back(ss.str());
        }

        size_t maxRowWidth = 0;
        for (const auto& row : formattedRows) {
            maxRowWidth = max(maxRowWidth, row.length());
        }

        if (PrintTopAndBottomBorder) {
            cout << '\n' << TheLocationOfTheMatrix;
            cout << string(maxRowWidth, '_') << "\n\n";
        }

        for (const auto& row : formattedRows) {
            cout << TheLocationOfTheMatrix << "|  " << row << "\n";
        }

        if (PrintTopAndBottomBorder) {
            cout << TheLocationOfTheMatrix;
            cout << string(maxRowWidth, '_') << "\n\n";
        }

        return true;
    }

}
