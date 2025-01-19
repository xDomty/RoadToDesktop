#pragma once

#include <iostream>
using namespace std;

namespace Colors_WindowsOS
{
	enum enNormalColors { Black, Blue, Green, Aqua, Red, Purple, Yellow, White, Gray };
	enum enBrightColors { LightGreen = 65, LightAqua = 66, LightRed = 67, LightPurple = 68, LightYellow = 69, BrightWhite = 70 };

	// OverLoading Function ScreenColors

	void XScreenColors(enNormalColors ScreenColor, enNormalColors TextColor)
	{
		// تقسيمة 1
		string* SystemCMD;
		SystemCMD = new string;
		*SystemCMD = "color ";

		// تقسيمة 2
		SystemCMD->push_back(ScreenColor + 48); // ASCII تزويد 48 عشان تطلعلنا بالارقام من 
		SystemCMD->push_back(TextColor + 48); // ASCII تزويد 48 عشان تطلعلنا بالارقام من 
		const char* SystemCMDconst = SystemCMD->c_str();

		// تنفيذ الامر وتنضيف الزباله
		system(SystemCMDconst);
		delete SystemCMD;

	}

	void XScreenColors(enBrightColors ScreenColor, enBrightColors TextColor)
	{
		// تقسيمة 1
		string* SystemCMD;
		SystemCMD = new string;
		*SystemCMD = "color ";

		// تقسيمة 2
		SystemCMD->push_back(ScreenColor);
		SystemCMD->push_back(TextColor);
		const char* SystemCMDconst = SystemCMD->c_str();

		// تنفيذ الامر وتنضيف الزباله
		system(SystemCMDconst);
		delete SystemCMD;

	}

	void XScreenColors(enNormalColors ScreenColor, enBrightColors TextColor)
	{
		// تقسيمة 1
		string* SystemCMD;
		SystemCMD = new string;
		*SystemCMD = "color ";

		// تقسيمة 2
		SystemCMD->push_back(ScreenColor + 48); // ASCII تزويد 48 عشان تطلعلنا بالارقام من 
		SystemCMD->push_back(TextColor);
		const char* SystemCMDconst = SystemCMD->c_str();

		// تنفيذ الامر وتنضيف الزباله
		system(SystemCMDconst);
		delete SystemCMD;

	}

	void XScreenColors(enBrightColors ScreenColor, enNormalColors TextColor)
	{
		// تقسيمة 1
		cout << "d";
		string* SystemCMD;
		SystemCMD = new string;
		*SystemCMD = "color ";

		// تقسيمة 2
		SystemCMD->push_back(ScreenColor);
		SystemCMD->push_back(TextColor + 48); // ASCII تزويد 48 عشان تطلعلنا بالارقام من 
		const char* SystemCMDconst = SystemCMD->c_str();

		// تنفيذ الامر وتنضيف الزباله
		system(SystemCMDconst);
		delete SystemCMD;

	}

}

namespace Colors_LinuxOS
{
	
}