#include "../../Include/Lessons/Lesson57.hpp"
#include <iostream>
#include <vector>
#include <fstream>
#include <string>
using namespace std;

namespace Lesson57 {
	
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

	void DeleteLineFromFile(string FileName, string Record)
	{
		vector <string> vFileContent;
		LoadFileToVector(FileName, vFileContent);
		for (string& Line : vFileContent)
		{
			if (Line == Record)
			{
				Line = "";
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
		cout << "Lesson 57 : Delete Record FROM FILE...\n";
		vector <string> vFile;
		LoadFileToVector("MyFile.txt", vFile);
		LoadVectorToFile(vFile, "Lol.txt");
		DeleteLineFromFile("Lol.txt", "Hello");
		PrintFile("Lol.txt");
    };
}
