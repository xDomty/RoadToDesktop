#include "../../Include/Lessons/Lesson54.hpp"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

namespace Lesson54 {
    void main() {
		cout << "Lesson 54 : Read Mode :: Read Data From Files...\n";
		fstream NewFile;
		NewFile.open("MyFile.txt", ios::in);
		if (NewFile.is_open())
		{
			string line;

			while (getline(NewFile, line))
			{
				cout << line << endl;
			}

			NewFile.close();
		}
    };
}
