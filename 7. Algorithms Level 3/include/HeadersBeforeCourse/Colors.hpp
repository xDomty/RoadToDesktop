#pragma once

#include <iostream>
using namespace std;

namespace Colors_WindowsOS
{
	enum enNormalColors { Black, Blue, Green, Aqua, Red, Purple, Yellow, White, Gray };
    enum enBrightColors { LightGreen = 65, LightAqua = 66, LightRed = 67, LightPurple = 68, LightYellow = 69, BrightWhite = 70 };

	// OverLoading Function ScreenColors

	void XScreenColors(enNormalColors ScreenColor, enNormalColors TextColor);

	void XScreenColors(enBrightColors ScreenColor, enBrightColors TextColor);

	void XScreenColors(enNormalColors ScreenColor, enBrightColors TextColor);

	void XScreenColors(enBrightColors ScreenColor, enNormalColors TextColor);

}

namespace Colors_LinuxOS
{

}
