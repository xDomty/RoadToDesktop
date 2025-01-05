#pragma once

#include "ImportantThings.h"
using namespace space_Load;
using namespace space_Print;

namespace space_L57_Lessons
{
	namespace space_L57_LE1
	{
		void L57_LE1_main()
		{
			vector <string> vFile;
			LoadFileToVector("MyFile.txt", vFile);
			LoadVectorToFile(vFile, "Lol.txt");
			DeleteLineFromFile("Lol.txt", "Hello");
			PrintFile("Lol.txt");
		}

	}
}