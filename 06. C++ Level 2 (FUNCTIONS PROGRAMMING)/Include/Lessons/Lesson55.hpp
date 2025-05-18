#pragma once
#include <iostream>
#include <vector>
using namespace std;

namespace Lesson55 {
	void LoadFileToVector(string FilePath, vector <string>& vFileContent);

	void PrintVector(string message, vector <string> vVector, bool PrintNumOfLoop);

    void main();
}
