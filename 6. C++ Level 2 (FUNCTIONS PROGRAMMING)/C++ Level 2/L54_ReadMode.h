#pragma once
#include <iostream>
#include <fstream>
#include<string>
using namespace std;

namespace space_L54_Lessons
{
	namespace space_L54_LE1
	{
		void L54_LE1_main()
		{
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

		}

	}
}