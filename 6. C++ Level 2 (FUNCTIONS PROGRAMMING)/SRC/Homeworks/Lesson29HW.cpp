#include "../../Include/Homeworks/Lesson29HW.hpp"

namespace Lesson29HW {
	void ReadVectorNumbers(vector <int>& vNumbers)
	{
		int NumberPushPackToVector = 0;
		int counter = 0;
		char YesNo = 'Y';
		cout << "Hello, Please fill the vector?\n";

		do
		{
			counter++;
			cout << "number [" << counter << "] ";
			cin >> NumberPushPackToVector;
			vNumbers.push_back(NumberPushPackToVector);
			cout << "Do you want to add more? (Y , N) : ";
			cin >> YesNo;
		} while (YesNo == 'Y' || YesNo == 'y');
	}

	void PrintVectorNumbers(vector <int>& vNumbers)
	{
		cout << "Vector numbers is : ";
		for (int& x : vNumbers)
		{
			cout << x << "  ";
		}
	}

	void main() {
		cout << "Homework 1 In Lesson 29 : Read Vector Numbers Then Print It\n";
		vector <int> vNum;
		ReadVectorNumbers(vNum);
		cout << endl << endl;
		PrintVectorNumbers(vNum);
	}
}
