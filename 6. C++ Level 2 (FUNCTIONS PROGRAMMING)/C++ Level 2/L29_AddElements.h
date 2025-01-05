#pragma once

#include <iostream>
#include <vector>
using namespace std;

namespace space_L29_Lessons
{
	namespace space_L29_LE1
	{
		void L29_LE1_main()
		{
			vector <int> vNum;

			cout << "number vectors : ";

			vNum.push_back(10);
			vNum.push_back(30);
			vNum.push_back(50);
			vNum.push_back(25);
			for (int x : vNum)
			{
				cout << x << "  ";
			}

			cout << endl;
		}
	}
};

namespace space_L29_Homeworks
{
	namespace space_L29_HW1
	{
		void L29_ReadVectorNumbers(vector <int> &vNumbers)
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

		void L29_PrintVectorNumbers(vector <int> &vNumbers)
		{
			cout << "Vector numbers is : ";
			for (int& x : vNumbers)
			{
				cout << x << "  ";
			}
		}
		void L29_HW1_main()
		{
			vector <int> vNum;
			L29_ReadVectorNumbers(vNum);
			cout << endl << endl;
			L29_PrintVectorNumbers(vNum);
		}
	}
};

