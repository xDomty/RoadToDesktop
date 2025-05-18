#include "../../Include/Lessons/Lesson9.hpp"
#include <iostream>
using namespace std;

namespace Lesson9 {
    void main() {
		int Mark = 90;
		string result;
		//Using normal if

		if (Mark >= 50)
		{
			result = "PASS";
		}
		else
		{
			result = "FAIL";
		}
		cout << result << endl;
		//Using Short Hand IF
		result = (Mark >= 50) ? "PASS" : "FAIL";
		cout << result << endl;
    };
}
