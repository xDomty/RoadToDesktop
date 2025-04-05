#pragma once
#include <iostream>
#include <vector>
#include <string>
using namespace std;

namespace Lesson57 {
	void LoadFileToVector(string FilePath, vector <string>& vFileContent);

	void LoadVectorToFile(vector <string> vContent, string FilePath);

	void DeleteLineFromFile(string FileName, string Record);

	void PrintFile(string FilePath);

    void main();
}
