//homework
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string st1 = "43.22";
	int N1 = 20;
	double N2 = 33.5;
	float N3 = 55.23;
	int N3_int;
	//st1 To Int
	int StringToInt = stoi(st1);
	//st1 to float
	float StringToFloat = stof(st1);
	//st1 to double
	double StringToDouble = stod(st1);
	//int N1 to string
	string N1ToString = to_string(N1);
	//double N2 to string
	string N2ToString = to_string(N2);
	//float N3 to string
	string N3ToString = to_string(N3);
	//float N3 to integar
	//implicit Conversion (Done Automaticly By Compiler)
	N3_int = N3;
	//exmplicit Conversion (Done Manually By Programmer)
	N3_int = int(N3); //first method
	N3_int = (int)N3; //second method
	cout << "String of st1 = " << st1 << "\n";
	cout << "st1 to int = " << StringToInt << "\n";
	cout << "st1 to float = " << StringToFloat << "\n";
	cout << "st1 to double = " << StringToDouble << endl;
	cout << "int N1 to string : " << N1ToString << endl;
	cout << "double N2 to string : " << N2ToString << endl;
	cout << "float N3 to string : " << N3ToString << endl;
	cout << "float N3 to integar : " << N3_int << endl;
}