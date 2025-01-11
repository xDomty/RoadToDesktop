#include "../include/Problem5.hpp"
#include "../include/Force.hpp"

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
        age = InputForce::NumBetween<unsigned short>(0,100,"Please enter your age : ","Invalid Age. Try again.");
        license = InputForce::NumBetween<bool>(0,1,"Do you have license? (0 if no / 1 if yes) : ","Invalid input. Try again.");
        recommendation = InputForce::NumBetween<bool>(0,1,"Do you have recommendations? (0 if no / 1 if yes) : ","Invalid input. Try again.");

        cout << endl;
        cout << PrintDriverLicenseResult(recommendation,license,age);
    }
}