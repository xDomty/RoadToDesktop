#pragma once
#pragma warning(disable : 4996)

#include <iostream>
#include <ctime>
using namespace std;

namespace space_L59_Lessons
{
	namespace space_L59_LE1
	{
		void L59_LE1_main()
		{
			time_t Time = time(0);

			char* DateTime = ctime(&Time);

			cout << "The local time and date is : " << DateTime;

			cout << endl << endl;

			// converting now to tm struct for UTC date/time
			tm* gmtm = gmtime(&Time);
			DateTime = asctime(gmtm);
			cout << "UTC date and time is: " << DateTime;

		}

	}
}