#pragma once

#include <iostream>
using namespace std;

namespace Colors_WindowsOS
{
	enum enNormalColors;
	enum enBrightColors;

	// OverLoading Function ScreenColors

	void XScreenColors(enNormalColors ScreenColor, enNormalColors TextColor);

	void XScreenColors(enBrightColors ScreenColor, enBrightColors TextColor);

	void XScreenColors(enNormalColors ScreenColor, enBrightColors TextColor);

	void XScreenColors(enBrightColors ScreenColor, enNormalColors TextColor);

}

namespace Colors_LinuxOS
{

}
