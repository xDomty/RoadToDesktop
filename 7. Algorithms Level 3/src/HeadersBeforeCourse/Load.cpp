#pragma once
#include "../../include/HeadersBeforeCourse/Load.hpp"

namespace Load
{
	void FileToVector(string FilePath, vector <string>& vFileContent)
	{
		fstream MyFile;
		MyFile.open(FilePath, ios::in); //Read Mode
		if (MyFile.is_open())
		{
			string Line;

			while (getline(MyFile, Line))
			{
				vFileContent.push_back(Line);
			}

			MyFile.close();
		}
	}

	void VectorToFile(vector <string> vContent, string FilePath)
	{
		fstream MyFile;
		MyFile.open(FilePath, ios::out);
		if (MyFile.is_open())
		{
			for (string Line : vContent)
			{
				if (Line != "")
				{
					MyFile << Line << endl;
				}
			}

			MyFile.close();
		}


	}

	void DeleteLineFromFile(string FileName, string Record)
	{
		vector <string> vFileContent;
		FileToVector(FileName, vFileContent);
		for (string& Line : vFileContent)
		{
			if (Line == Record)
			{
				Line = "";
			}
		}
		VectorToFile(vFileContent, FileName);
	}

	void ReplaceLineInFile(string FileName, string Record, string Replacement)
	{
		vector <string> vFileContent;
		FileToVector(FileName, vFileContent);
		for (string& Line : vFileContent)
		{
			if (Line == Record)
			{
				Line = Replacement;
			}
		}
		VectorToFile(vFileContent, FileName);
	}
}
