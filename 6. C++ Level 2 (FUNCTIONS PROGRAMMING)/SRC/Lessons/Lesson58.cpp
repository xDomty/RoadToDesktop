#include "../../Include/Lessons/Lesson58.hpp"
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

namespace Lesson58 {
	void LoadFileToVector(string FilePath, vector <string>& vFileContent)
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

	void LoadVectorToFile(vector <string> vContent, string FilePath)
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

	void ReplaceLineInFile(string FileName, string Record, string Replacement)
	{
		vector <string> vFileContent;
		LoadFileToVector(FileName, vFileContent);
		for (string& Line : vFileContent)
		{
			if (Line == Record)
			{
				Line = Replacement;
			}
		}
		LoadVectorToFile(vFileContent, FileName);
	}

	void PrintFile(string FilePath)
	{
		fstream NewFile;
		NewFile.open(FilePath, ios::in); //READ MODE
		if (NewFile.is_open())
		{
			string line;

			while (getline(NewFile, line))
			{
				cout << line << endl;
			}

			NewFile.close();
		}

	}

    void main() {
		vector <string> vFile;
		LoadFileToVector("MyFile.txt", vFile);
		LoadVectorToFile(vFile, "Lol.txt");
		ReplaceLineInFile("Lol.txt", "Hello", "ADAM");
		PrintFile("Lol.txt");
    };
}
