#pragma once
#include <iostream>
#include <vector>
#include <string>
using namespace std;

namespace Lesson58 {
	void LoadFileToVector(string FilePath, vector <string>& vFileContent);

	void LoadVectorToFile(vector <string> vContent, string FilePath);

	void ReplaceLineInFile(string FileName, string Record, string Replacement);

	void PrintFile(string FilePath);
    void main();
}
