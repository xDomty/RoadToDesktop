#pragma once

#include "ImportantThings.h"
using namespace space_Load;
using namespace space_Print;

namespace space_L56_Lessons
{
	namespace space_L56_LE1
	{
		void L56_LE1_main()
		{
			vector <string> vFile;
			LoadFileToVector("MyFile.txt", vFile);
			LoadVectorToFile(vFile, "Lol.txt");
			PrintVector("",vFile,0);
		}

	}
}