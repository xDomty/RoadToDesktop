#include <iostream>
#include <string>
using namespace std;
int main()
{
	string MyString = "abcdefghijklmnopqrstuvwxyz";
	cout << "My String Is : " << MyString << "\n";
	cout << "The Length Of The String Is = " << MyString.length() << "\n"; //MyString.length() : Is Used To Calculate the length of the string
	cout << "The Third Letter Of My String = " << MyString[2] << "\n"; //IMPORTANT NOTE : C++ HERE BEGINS COUNTING FROM 0 NOT 1 (WILL PRINT C)
	string str1 = "10";
	string str2 = "20";
	cout << str1 + str2; //Will Print 1020 , BECAUSE THEY ARE STRINGS
	int int_str1 = stoi(str1);
	int int_str2 = stoi(str2);
	cout << int_str1 + int_str2; //Will Print 30 , BECAUSE THEY INTEGERS
	//The Second part is about getline() and we already know it
}