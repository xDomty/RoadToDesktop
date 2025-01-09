#include "Problem5.hpp"

namespace Problem5
{
    bool DriverLicenseResult(bool recommendation , bool License, unsigned short int age)
    {
        if (age >= 21 && License == 1 || recommendation == 1)
            return true;
        else
            return false;
    }

    string PrintDriverLicenseResult(bool recommendation , bool License, unsigned short int age)
    {
        if (DriverLicenseResult(recommendation,License,age))
           return "HIRED";
        else
           return "REJECTED";
    }
    
    void main()
    {
        bool license; bool recommendation; unsigned short age;

        cout << "Please enter your age\n";
        cin >> age;

        cout << "Do you have license? (0 if no / 1 if yes)\n";
        cin >> license;

        cout << "Do you have recommendations? (0 if no / 1 if yes)\n";
        cin >> recommendation;

        cout << endl;
        cout << PrintDriverLicenseResult(recommendation,license,age);
    }
}