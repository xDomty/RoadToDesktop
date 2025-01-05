#pragma once

#include <iostream>;
 using namespace std;

namespace space_L9_Lessons
{
	void L9_Lesson1()
	{
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
	}
}

namespace space_L9_Homeworks
{
	string L9_HomeWork1(int result) // This Function see if the result is pass or fail
	{
		return (result > 50) ? "pass" : "fail";
	}

	string L9_HomeWork2(int result) // This Function see if the result is pass or fail Or It's 0
	{
		return (result == 50) ? "0" : (result > 50)? "pass" : "fail";
	}
}