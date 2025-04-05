#pragma disable
#include "../../Include/Lessons/Lesson59.hpp"
#include <iostream>
using namespace std;

namespace Lesson59 {
    void main() {
		time_t Time = time(0);

		char* DateTime = ctime(&Time);

		cout << "The local time and date is : " << DateTime;

		cout << endl << endl;

		// converting now to tm struct for UTC date/time
		tm* gmtm = gmtime(&Time);
		DateTime = asctime(gmtm);
		cout << "UTC date and time is: " << DateTime;
    };
}
