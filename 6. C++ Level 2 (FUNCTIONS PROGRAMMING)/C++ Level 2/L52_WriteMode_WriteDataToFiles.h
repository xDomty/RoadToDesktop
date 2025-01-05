#pragma once

#include <iostream>
#include <fstream>
using namespace std;

namespace space_L52_Lessons
{
	namespace space_L52_LE1
	{
		void L52_LE1_main()
		{
			fstream NewFile;
			NewFile.open("MyFile.txt", ios::out);
			if (NewFile.is_open())
			{
                NewFile << "Hello\n\n MY NAME IS ADAM";
			    NewFile.close();
			}
			
		}

	}
}