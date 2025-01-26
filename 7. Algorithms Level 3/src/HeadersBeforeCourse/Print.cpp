#pragma once
#include "../../include/HeadersBeforeCourse/Print.hpp"
using namespace std;

namespace Print {

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

    namespace ResultOfComparing {
        string _2Matrixs(bool Result) {
            if (Result == true) {
                return "The both matrix are Equal";
            }
            return "The both matrix are NOT Equal";
        }

    }

    string CheckTrue(bool result , string messageIfTRUE = "The function returned ture", string messageIfFALSE = "The function returned false") {
        if (result == true) {
            return messageIfTRUE;
        }
        return messageIfFALSE;
    }


}
