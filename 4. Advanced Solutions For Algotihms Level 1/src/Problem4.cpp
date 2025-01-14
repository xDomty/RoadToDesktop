#pragma once
#include "../include/Problem4.hpp"
#include "../include/Force.hpp"
namespace Problem4
{
    
    bool DriverLicenseResult(bool License, unsigned short int age)
    {
        if (age >= 18 && License == 1)
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
        age = InputForce::NumBetween<unsigned short>(1,100,"Please enter your age : ","Invalid Age, Try again.");
        license = InputForce::NumBetween<bool>(0,1,"Do you have license? (0 if no / 1 if yes) : ","Invalid input. Try again.");
        
        cout << endl;
        cout << PrintDriverLicenseResult(license,age);
   }
}


