#include <iostream>
#include <string>
using namespace std;
int main()
{
	string string1;
	string string2;
	string string3;
	cout << "Please enter string1 as text\n";
	cin.ignore();
	getline(cin,string1);
	cout << "\n";
	cout << "Please enter string2 as numbers only\n";
	cin >> string2;
	cout << "\n";
	cout << "Please enter string3 as numbers only" << endl;
	cin >> string3;
	cout << "********************************\n";
	cout << "The length of string1 is " << string1.length();
	cout << "\nCharacters in string1 at 0,2,4,7 are : " << string1[0] << " " << string1[2] << " " << string1[4] << " " << string1[7] << "\n";
	cout << "Concatenating String2 and string3 = " << string2 + string3 << "\n";
	cout << string2 << " * " << string3 << " = " << stoi(string2) * stoi(string3) << endl;
}