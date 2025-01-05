
#include <iostream>
#include <string>
using namespace std;

string ReadText(string message)
{
    string InputOfUser;
    cout << message << endl;
    cin >> InputOfUser;
    return InputOfUser;
}

string TextEncripted(string password, short EncriptionKey)
{

    for (int i = 0; i <= password.length(); i++)
    {
        password[i] = char((int)password[i] + EncriptionKey); //OH MY GOD ما هذا الجمال
    }

    return password;

}

string TextUnEncripted(string password, short EncriptionKey)
{

    for (int i = 0; i <= password.length(); i++)
    {
        password[i] = char((int)password[i] - EncriptionKey); //OH MY GOD ما هذا الجمال
    }

    return password;

}

int main()
{
    short DecriptionKey = 9038142222342929349;
    string password = ReadText("Please enter your password");
    cout << endl;

    cout << "Here is your password Encripted:\n";
    string EncriptedPassword = TextEncripted(password, DecriptionKey);
    cout << EncriptedPassword << endl;
    cout << endl;

    cout << "Here is your password UnEncripted:\n";
    string UnEncriptedPassword = TextUnEncripted(EncriptedPassword, DecriptionKey);
    cout << UnEncriptedPassword << endl;
    cout << endl;

    return 0;
}