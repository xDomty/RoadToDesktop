//convert string to [int,float,double]
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string str;
    cout << "Enter the value of string (NUMBERS ONLY)\n";
	cin >> str;
	//String To Int
	 int StringToInt = stoi(str);
	//string to float
	 float StringToFloat = stof(str);
	//string to double
	 double StringToDouble = stod(str);
 cout << "String of number = " << str << "\n";
 cout << "String to int = " << StringToInt << "\n";
 cout << "String to float = " << StringToFloat << "\n";
 cout << "String to double = " << StringToDouble << endl;
} 