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

    void PrintFile(const string& FilePath);

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

    template<typename T>
    bool Print2dVectorAsMatrixSpecific(const string &messageForRows, const string &messageForCols,
                                       const vector<vector<T> > &vVector, const string &TheLocationOfTheMatrix,
                                       bool PrintTopAndBottomBorder, const vector<short> &WhatRowsToPrint,
                                       const vector<short> &WhatColsToPrint) {
        if (vVector.empty() || vVector[0].empty()) {
            cout << "ERROR: THE VECTOR ROWS OR COLS CANNOT BE EMPTY\n";
            return false;
        }

        // Validate rows and columns
        vector<short> validRows, validCols;
        for (const short &row: WhatRowsToPrint) {
            if (row >= 1 && row <= vVector.size()) {
                validRows.push_back(row);
            } else {
                cout << "ERROR: INVALID ROW INDEX " << row << " (1-based)\n";
            }
        }
        for (const short &col: WhatColsToPrint) {
            if (col >= 1 && col <= vVector[0].size()) {
                validCols.push_back(col);
            } else {
                cout << "ERROR: INVALID COLUMN INDEX " << col << " (1-based)\n";
            }
        }

        if (validRows.empty() || validCols.empty()) {
            cout << "ERROR: NO VALID ROWS OR COLUMNS TO PRINT\n";
            return false;
        }

        // Get the width of the largest number for formatting
        size_t maxNumWidth = 0;
        for (const short &row: validRows) {
            for (const short &col: validCols) {
                maxNumWidth = max(maxNumWidth, to_string(vVector[row - 1][col - 1]).length());
            }
        }

        // Print the rows
        cout << messageForRows << "\n";
        for (const short& row: validRows) {
            cout << TheLocationOfTheMatrix << "Row [" << row << "]: ";
            for (size_t col = 0; col < vVector[row - 1].size(); ++col) {
                cout << setw(maxNumWidth) << setfill('0') << vVector[row - 1][col] << " ";
            }
            cout << "\n";
        }

        cout << string(50, '_') << "\n\n";

        // Print the columns
        cout << messageForCols << "\n";
        for (const short &col: validCols) {
            cout << TheLocationOfTheMatrix << "Col [" << col << "]: ";
            for (size_t row = 0; row < vVector.size(); ++row) {
                cout << setw(maxNumWidth) << setfill('0') << vVector[row][col - 1] << " ";
            }
            cout << "\n";
        }

        return true;
    }
}
    
