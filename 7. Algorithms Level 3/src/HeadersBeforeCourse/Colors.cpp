#pragma once

#include "../../include/HeadersBeforeCourse/Colors.hpp"

namespace Colors_WindowsOS
{
    enum enNormalColors { Black, Blue, Green, Aqua, Red, Purple, Yellow, White, Gray };
    enum enBrightColors { LightGreen = 65, LightAqua = 66, LightRed = 67, LightPurple = 68, LightYellow = 69, BrightWhite = 70 };

    // OverLoading Function ScreenColors

    void XScreenColors(enNormalColors ScreenColor, enNormalColors TextColor)
    {
        // Part 1
        string* SystemCMD;
        SystemCMD = new string;
        *SystemCMD = "color ";

        // Part 2
        SystemCMD->push_back(ScreenColor + 48); // Adding 48 to get the ASCII numbers
        SystemCMD->push_back(TextColor + 48); // Adding 48 to get the ASCII numbers
        const char* SystemCMDconst = SystemCMD->c_str();

        // Execute the command and clean up
        system(SystemCMDconst);
        delete SystemCMD;

    }

    void XScreenColors(enBrightColors ScreenColor, enBrightColors TextColor)
    {
        // Part 1
        string* SystemCMD;
        SystemCMD = new string;
        *SystemCMD = "color ";

        // Part 2
        SystemCMD->push_back(ScreenColor);
        SystemCMD->push_back(TextColor);
        const char* SystemCMDconst = SystemCMD->c_str();

        // Execute the command and clean up
        system(SystemCMDconst);
        delete SystemCMD;

    }

    void XScreenColors(enNormalColors ScreenColor, enBrightColors TextColor)
    {
        // Part 1
        string* SystemCMD;
        SystemCMD = new string;
        *SystemCMD = "color ";

        // Part 2
        SystemCMD->push_back(ScreenColor + 48); // Adding 48 to get the ASCII numbers
        SystemCMD->push_back(TextColor);
        const char* SystemCMDconst = SystemCMD->c_str();

        // Execute the command and clean up
        system(SystemCMDconst);
        delete SystemCMD;

    }

    void XScreenColors(enBrightColors ScreenColor, enNormalColors TextColor)
    {
        // Part 1
        cout << "d";
        string* SystemCMD;
        SystemCMD = new string;
        *SystemCMD = "color ";

        // Part 2
        SystemCMD->push_back(ScreenColor);
        SystemCMD->push_back(TextColor + 48); // Adding 48 to get the ASCII numbers
        const char* SystemCMDconst = SystemCMD->c_str();

        // Execute the command and clean up
        system(SystemCMDconst);
        delete SystemCMD;

    }

}

namespace Colors_LinuxOS
{

}
