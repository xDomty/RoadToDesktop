#include "../../Include/Lessons/Lesson56.hpp"
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

namespace Lesson56 {
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

	void PrintVector(string message, vector <string> vVector, bool PrintNumOfLoop)
	{
		if (PrintNumOfLoop == true)
		{
			int counter = 0;
			for (string Line : vVector)
			{
				counter++;
				cout << message << " [" << counter << "] : ";
				cout << Line << endl;
			}
		}
		else
		{
			for (string Line : vVector)
			{
				cout << message << " : ";
				cout << Line << endl;
			}

		}
	}

    void main() {
		cout << "Lesson 56 : Load Vector To File...\n";
		vector <string> vFile;
		LoadFileToVector("MyFile.txt", vFile);
		LoadVectorToFile(vFile, "Lol.txt");
		PrintVector("", vFile, 0);
    };
}
