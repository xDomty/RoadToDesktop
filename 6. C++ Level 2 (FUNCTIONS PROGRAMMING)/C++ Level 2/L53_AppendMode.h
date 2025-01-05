#pragma once

#include <iostream>
#include <fstream>
using namespace std;

namespace space_L53_Lessons
{
	namespace space_L53_LE1
	{
		void L53_LE1_main()
		{
			fstream NewFile;
			NewFile.open("MyFile.txt", ios::out | ios::app);
			if (NewFile.is_open())
			{
				NewFile << "\nHello\n\n MY NAME IS ADAM";
				NewFile.close();
			}
		}
	}
}
