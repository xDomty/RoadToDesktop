#pragma once

#include <iostream>
#include <cstdio>
using namespace std;

namespace space_L25_Lessons
{
	namespace space_L25_LE1
	{
		void L25_LE1_main()
		{
			//ARRAY OF CHAR
			char name[] = "Hello my name is adam";
			char YaWelcome[] = "This is the school of programming :)";

			printf("%s %s", name, YaWelcome);
			cout << endl;
			
			//CHAR

			char Hello = 'L';
			printf("%c", Hello);
			cout << endl;

			//lENGTH OF CHAR

			printf("%*c", 5, Hello);
		}
	}
}