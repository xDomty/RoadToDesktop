#pragma once
#include <iostream>
using namespace std;

namespace Refresh
{
	void Screen()
	{
		system("cls");
		system("color 0F");
	}

	void ScreenLinux()
	{
		system("clear");
	}
}