//enums
#include <iostream>
using namespace std;
//IMPORTANT NOTE : ENUMS BEGINS COUNTING FROM 0 NOT 1
    enum enum_Color {Red,Green,Yellow,Blue};
    enum enum_Direction {North,South,East,West};
    enum enum_Week{Sat,Sun,Mon,Tue,Wed,Thu,Fri};
    enum enum_Gender{Male,Female};
    enum enum_Status {Single , Married};
int main()
{
	enum_Color MyColor;
	enum_Direction MyDirection;
	enum_Week Today;
	enum_Gender MyGender;
	enum_Status MyStatus;
	MyColor = enum_Color::Yellow; 
	MyDirection = enum_Direction::West;
	Today = enum_Week::Tue;
	MyGender = enum_Gender::Male;
	MyStatus = enum_Status::Single;
	cout << "My Color Is : " << MyColor << endl;
	cout << "My Direction Is : " << MyDirection << endl;
	cout << "Today Is : " << Today << endl;
	cout << "My Gender Is : " << MyGender << endl;
	cout << "My Status Is : " << MyStatus << endl;
}