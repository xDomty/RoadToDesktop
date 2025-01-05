#pragma once
#include <iostream>
using namespace std;

namespace Comparing
{
	bool IsStringEqualString(string str1, string str2)
	{
		if (str1 == str2)
			return true;
		else
			return false;
	}
}