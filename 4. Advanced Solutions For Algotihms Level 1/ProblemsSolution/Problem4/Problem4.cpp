#include "Problem4.h"

namespace Problem4
{
    
    bool DriverLicenseResult(bool License, unsigned short int age)
    {
        if (age >= 21 && License == 1)
            return true;
        else
            return false;
    }

    string PrintDriverLicenseResult(bool License, unsigned short int age)
    {
        if (DriverLicenseResult(License,age))
           return "HIRED";
        else
           return "REJECTED";
    }

    void main()
    {
        bool license; unsigned short age;

        cout << "Please enter your age\n";
        cin >> age;

        cout << "Do you have license? (0 if no / 1 if yes)\n";
        cin >> license;
        
        cout << endl;
        cout << PrintDriverLicenseResult(license,age);
   }
}