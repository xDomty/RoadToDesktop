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

}
