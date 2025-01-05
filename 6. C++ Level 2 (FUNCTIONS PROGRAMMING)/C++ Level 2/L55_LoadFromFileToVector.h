#pragma once
#include "ImportantThings.h"
using namespace std;
using namespace space_Load;
using namespace space_Print;

namespace space_L55_Lessons
{
	namespace space_L55_LE1
	{
		void L55_LE1_main()
		{
			vector <string> vFile;
			LoadFileToVector("MyFile.txt", vFile);
			PrintVector(vFile);

		}

	}
}