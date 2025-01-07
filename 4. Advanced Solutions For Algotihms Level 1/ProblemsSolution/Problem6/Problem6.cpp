#include "Problem6.h"

namespace Problem6
{
    string FirstNamePlusLastName(string FirstName,string LastName)
    {
        return FirstName + ' ' + LastName;
    }
    
    void main()
    {
       string FirstName, LastName;
       cout << "Hello, Please enter first name\n";
       cin >> FirstName;
       cout << "Please enter your last name\n";
       cin.ignore();
       getline(cin, LastName);
       cout << "\nYour name is : " << FirstNamePlusLastName(FirstName,LastName);
    }
}