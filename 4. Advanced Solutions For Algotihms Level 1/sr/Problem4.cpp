#include <iostream>
using namespace std;

struct stInfo 
{
    int Age;
    bool HasDrivingLicense;
};

stInfo ReadInfo()
{
    stInfo Info;
    cout << "Please Enter Your Age?" << endl;
    cin >> Info.Age;
    cout << "Do you have a driver’s license? (1 for Yes, 0 for No)" << endl;
    cin >> Info.HasDrivingLicense;
    return Info;
}

bool IsAccepted(stInfo Info)
{
    return (Info.Age > 21 && Info.HasDrivingLicense);
}

void PrintResult(stInfo Info)
{
    if (IsAccepted(Info))
        cout << "\n Hired" << endl;
    else
        cout << "\n Rejected" << endl;
}

int main()
{
    PrintResult(ReadInfo());
    return 0;
}
