#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;

namespace Load
{
	void FileToVector(string FilePath, vector <string>& vFileContent);

	void VectorToFile(vector <string> vContent, string FilePath);

	void DeleteLineFromFile(string FileName, string Record);

	void ReplaceLineInFile(string FileName, string Record, string Replacement);
}
