#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;

namespace Lesson56 {
	void LoadFileToVector(string FilePath, vector <string>& vFileContent);

	void LoadVectorToFile(vector <string> vContent, string FilePath);

	void PrintVector(string message, vector <string> vVector, bool PrintNumOfLoop);

    void main();
}
