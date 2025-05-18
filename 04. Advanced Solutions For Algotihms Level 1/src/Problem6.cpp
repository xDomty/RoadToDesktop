#include <iostream>
using namespace std;

struct stInfo
{
    string FirstName;
    string LastName;
};

stInfo ReadInfo()
{
    stInfo Info;
    cout << "Please Enter Your First Name?" << endl;
    cin >> Info.FirstName;
    cout << "Please Enter Your Last Name?" << endl;
    cin >> Info.LastName;
    return Info;
}

string GetFullName(stInfo Info, bool Reversed)
{
    string FullName = "";
    if (Reversed)
        FullName = Info.LastName + " " + Info.FirstName;
    else
        FullName = Info.FirstName + " " + Info.LastName;
    return FullName;
}

void PrintFullName(string FullName)
{
    cout << "\n Your full name is: " << FullName << endl;
}

int main()
{
    PrintFullName(GetFullName(ReadInfo(), true));
    return 0;
}
