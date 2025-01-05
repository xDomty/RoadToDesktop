#include <iostream>
#include <string>
using namespace std;

string ReadString(string message)
{
    cout << message;
    string UserInput;
    getline(cin,UserInput);
    return UserInput;
}

int StringLength(string InputOfString)
{
    return (InputOfString.length());
}

void TheReversedLoop(string InputOfString,int StringLength)
{
    for (int TheLoop = StringLength; TheLoop >= 0; TheLoop--)
    {
        cout << InputOfString[TheLoop] << endl;
    }
}

int main()
{
    string InputOfString = ReadString("Please enter The Loop For Reversed Numbers?\n");

    cout << "\n\nThe Output Reversed is :";
    TheReversedLoop(InputOfString, StringLength(InputOfString));
}