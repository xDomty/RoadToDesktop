#include <iostream>
using namespace std;

enum enWindowColor { red = 1, blue = 2, green = 3, yellow = 4 };
void Welcome()
{
    cout << "Hello, Please choose your screen color\n";
}
void ChooseColor()
{
    cout << "*******************\n";
    cout << "(1) red\n";
    cout << "(2) blue\n";
    cout << "(3) green\n";
    cout << "(4) yellow\n";
    cout << "*******************" << endl;
}
void TakeColorFromUser()
{
    enWindowColor WindowColor;
    int TakeColor;
    cin >> TakeColor;
    WindowColor = (enWindowColor)TakeColor;
    if (WindowColor == enWindowColor::red)
    {
        system("color 4F");
        cout << "NOW YOUR SCREEN COLOR IS RED\n";
    }
    else if (WindowColor == enWindowColor::blue)
    {
        system("color 1F");
        cout << "NOW YOUR SCREEN COLOR IS BLUE\n";
    }
    else if (WindowColor == enWindowColor::green)
    {
        system("color 2F");
        cout << "NOW YOUR SCREEN COLOR IS GREEN\n";
    }
    else if (WindowColor == enWindowColor::yellow)
    {
        system("color 6F");
        cout << "NOW YOUR SCREEN COLOR IS YELLOW\n";
    }
    else
    {
        cout << "WRONG CHOISE\n";
    }
    cout << "Do you want to choose another color? (y/n)\n";
    string UserChoise;
    cin >> UserChoise;
    if (UserChoise == "y")
    {
        cout << endl;
        cout << "Please enter your choise" << endl;
        ChooseColor();
        TakeColorFromUser();
    }
    else
    {
        cout << "\nEXITING PROGRAM";
    }
}

int main()
{
    Welcome();
    ChooseColor();
    TakeColorFromUser();
}