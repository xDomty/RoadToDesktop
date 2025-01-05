#pragma once

#include "ImportantThings.h"
using namespace space_Load;
using namespace space_Print;

namespace space_L58_Lessons
{
	namespace space_L58_LE1
	{
		void L58_LE1_main()
		{
			vector <string> vFile;
			LoadFileToVector("MyFile.txt", vFile);
			LoadVectorToFile(vFile, "Lol.txt");
			ReplaceLineInFile("Lol.txt", "Hello", "ADAM");
			PrintFile("Lol.txt");
		}

	}
}