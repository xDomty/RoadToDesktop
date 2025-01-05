#pragma once

#include <iostream>
#include <vector>
#include <limits>
#include <string>
#include <fstream>
using namespace std;

namespace RefreshScreen
{
	void Refresh()
	{
		system("cls");
		system("color 0F");
	}

}

namespace Colors
{
	enum enNormalColors { Black, Blue, Green, Aqua, Red, Purple, Yellow, White, Gray };
	enum enBrightColors { LightGreen = 65, LightAqua = 66, LightRed = 67, LightPurple = 68, LightYellow = 69, BrightWhite = 70 };

	// OverLoading Function ScreenColors

	void XScreenColors(enNormalColors ScreenColor, enNormalColors TextColor)
	{
		// تقسيمة 1
		string* SystemCMD;
		SystemCMD = new string;
		*SystemCMD = "color ";

		// تقسيمة 2
		SystemCMD->push_back(ScreenColor + 48); // ASCII تزويد 48 عشان تطلعلنا بالارقام من 
		SystemCMD->push_back(TextColor + 48); // ASCII تزويد 48 عشان تطلعلنا بالارقام من 
		const char* SystemCMDconst = SystemCMD->c_str();

		// تنفيذ الامر وتنضيف الزباله
		system(SystemCMDconst);
		delete SystemCMD;

	}

	void XScreenColors(enBrightColors ScreenColor, enBrightColors TextColor)
	{
		// تقسيمة 1
		string* SystemCMD;
		SystemCMD = new string;
		*SystemCMD = "color ";

		// تقسيمة 2
		SystemCMD->push_back(ScreenColor);
		SystemCMD->push_back(TextColor);
		const char* SystemCMDconst = SystemCMD->c_str();

		// تنفيذ الامر وتنضيف الزباله
		system(SystemCMDconst);
		delete SystemCMD;

	}

	void XScreenColors(enNormalColors ScreenColor, enBrightColors TextColor)
	{
		// تقسيمة 1
		string* SystemCMD;
		SystemCMD = new string;
		*SystemCMD = "color ";

		// تقسيمة 2
		SystemCMD->push_back(ScreenColor + 48); // ASCII تزويد 48 عشان تطلعلنا بالارقام من 
		SystemCMD->push_back(TextColor);
		const char* SystemCMDconst = SystemCMD->c_str();

		// تنفيذ الامر وتنضيف الزباله
		system(SystemCMDconst);
		delete SystemCMD;

	}

	void XScreenColors(enBrightColors ScreenColor, enNormalColors TextColor)
	{
		// تقسيمة 1
		string* SystemCMD;
		SystemCMD = new string;
		*SystemCMD = "color ";

		// تقسيمة 2
		SystemCMD->push_back(ScreenColor);
		SystemCMD->push_back(TextColor + 48); // ASCII تزويد 48 عشان تطلعلنا بالارقام من 
		const char* SystemCMDconst = SystemCMD->c_str();

		// تنفيذ الامر وتنضيف الزباله
		system(SystemCMDconst);
		delete SystemCMD;

	}

}

namespace space_Read
{
	string getString(string Message = "enter word: \n")
	{
		string txt;
		cout << Message;
		getline(cin, txt);

		return txt;
	}

	int ReadNumberWithValidation(string message = "", string MessageIfFail = "")
	{
		int number = 0;
		StartCheckPointIfFail:  cout << message;
		cin >> number;
		while (cin.fail())
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			Colors::XScreenColors(Colors::enNormalColors::Red, Colors::enBrightColors::BrightWhite);
			cout << MessageIfFail;
			system("pause");
			Colors::XScreenColors(Colors::enNormalColors::Black, Colors::enBrightColors::BrightWhite);
			cout << endl;
			goto StartCheckPointIfFail;
		}

		return number;
	}

	bool ReadBoolWithValidation(string message = "", string MessageIfFail = "")
	{
		bool TrueOrFalse = 0;
		StartCheckPointIfFail: cout << message;
		cin >> TrueOrFalse;
		while (cin.fail())
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			Colors::XScreenColors(Colors::enNormalColors::Red, Colors::enBrightColors:: BrightWhite);
			cout << MessageIfFail;
			system("pause");
			Colors::XScreenColors(Colors::enNormalColors::Black, Colors::enBrightColors::BrightWhite);
			cout << endl;
			goto StartCheckPointIfFail;
		}

		return TrueOrFalse;
	}

	int ReadPositiveNumberWithValidation(string message = "", string MessageIfNegativeOr0Fail = "", string MessageIfTextFail = "")
	{
		int number = ReadNumberWithValidation(message, MessageIfTextFail);
		while (number <= 0)
		{
			cout << MessageIfNegativeOr0Fail;
			number = ReadNumberWithValidation("", MessageIfTextFail);
		}
		return number;
	}

	void ReadAPositiveNumberOfArrayWithVaildation(int* &arr, int ArrayLength, string message = "", string MessageIfTextFail = "", string MessageIfNegativeFail = "")
	{
		
		arr = new int[ArrayLength];
		for (int i = 0; i < ArrayLength; i++)
		{
			IHateMyLife:
				cout << message << ' ' << i+1 << " : " ; cin >> *(arr + i);
				while (cin.fail())
				{
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
					cout << MessageIfTextFail;
					goto IHateMyLife;
				}
			
			if ((arr[i]) < 0)
			{
				cout << MessageIfNegativeFail;
				goto IHateMyLife;
			}
		}
	}

	void ReadANumberOfArrayWithVaildation(int*& arr, int ArrayLength, string message = "", string MessageIfTextFail = "")
	{

		arr = new int[ArrayLength];
		for (int i = 0; i < ArrayLength; i++)
		{
		IHateMyLife:
			cout << message << ' ' << i + 1 << " : "; cin >> *(arr + i);
			while (cin.fail())
			{
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				cout << MessageIfTextFail;
				goto IHateMyLife;
			}

		}
	}
}
namespace space_Print
{
	void PrintArrayNumbers(int* arr, int ArrayLength, int FormatOfArray = 1, string message = "", string messagePart2 = "", string TheMeterOfResult = "")
	{
		cout << "_________________________________\n\n";
		for (int i = 0; i < ArrayLength; i++)
		{
			cout << message << " [" << i + 1 << "] " << messagePart2 << " : ";
			printf("%0*d", FormatOfArray, arr[i]);
			cout << ' ' << TheMeterOfResult << endl;
		}
		cout << "_________________________________\n";
	}

	void PrintFile(string FilePath)
	{
		fstream NewFile;
		NewFile.open(FilePath, ios::in); //READ MODE
		if (NewFile.is_open())
		{
			string line;

			while (getline(NewFile, line))
			{
				cout << line << endl;
			}

			NewFile.close();
		}

	}

	// WANT UPGRADEEEEEEEEEEEEEEEEEEEEEEEEE


	void PrintVector(string message, vector <string> vVector, bool PrintNumOfLoop)
	{
		if (PrintNumOfLoop == true)
		{
			int counter = 0;
			for (string Line : vVector)
			{
				counter++;
				cout << message << " [" << counter << "] : ";
				cout << Line << endl;
			}
		}
		else
		{
			for (string Line : vVector)
			{
				cout << message << " : ";
				cout << Line << endl;
			}

		}
	}

	void PrintVector(string message, vector <int> vVector, bool PrintNumOfLoop)
	{
		if (PrintNumOfLoop = true)
		{
			int counter = 0;
			for (int i : vVector)
			{
				counter++;
				cout << message << " [" << counter << "] : ";
				cout << i << endl;
			}
		}
		else
		{
			for (int i : vVector)
			{
				cout << message << " : ";
				cout << i << endl;
			}

		}

	}

	void PrintVector(string message, vector <double> vVector, bool PrintNumOfLoop) 
	{
		if (PrintNumOfLoop = 1)
		{
			int counter = 0;
			for (double Line : vVector)
			{
				counter++;
				cout << message << " [" << counter << "] : ";
				cout << Line << endl;
			}
		}
		else
		{
			for (double Line : vVector)
			{
				cout << message << " : ";
				cout << Line << endl;
			}

		}
	}

	void PrintVector(string message, vector <float> vVector, bool PrintNumOfLoop)
	{
		if (PrintNumOfLoop = 1)
		{
			int counter = 0;
			for (float i : vVector)
			{
				counter++;
				cout << message << " [" << counter << "] : ";
				cout << i << endl;
			}
		}
		else
		{
			for (float i : vVector)
			{
				cout << message << " : ";
				cout << i << endl;
			}

		}

	}

	// WANT UPGRADEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE
}
namespace space_Load
{
	void LoadFileToVector(string FilePath, vector <string>& vFileContent)
	{
		fstream MyFile;
		MyFile.open(FilePath, ios::in); //Read Mode
		if (MyFile.is_open())
		{
			string Line;

			while (getline(MyFile, Line))
			{
				vFileContent.push_back(Line);
			}

			MyFile.close();
		}
	}

	void LoadVectorToFile(vector <string> vContent, string FilePath)	
	{
		fstream MyFile;
		MyFile.open(FilePath, ios::out);
		if (MyFile.is_open())
		{
			for (string Line : vContent)
			{
				if (Line != "")
				{
					MyFile << Line << endl;
				}
			}

			MyFile.close();
		}

		
	}
	
	void DeleteLineFromFile(string FileName, string Record)
		{
			vector <string> vFileContent;
			LoadFileToVector(FileName, vFileContent);
			for (string& Line : vFileContent)
			{
				if (Line == Record)
				{
					Line = "";
				}
			}
			LoadVectorToFile(vFileContent, FileName );
		}

	void ReplaceLineInFile(string FileName, string Record , string Replacement)
	{
		vector <string> vFileContent;
		LoadFileToVector(FileName, vFileContent);
		for (string& Line : vFileContent)
		{
			if (Line == Record)
			{
				Line = Replacement;
			}
		}
		LoadVectorToFile(vFileContent, FileName);
	}
}
namespace space_Employee   // Want to upgrade
{
	using namespace space_Read;

	struct stEmployees
	{
		string FirstName;
		string LastName;
		int Salary;
	};

	void ReadEmployeesDev(vector <stEmployees>& vPersonEmployee, int HowManyEmployees) 
	{
		stEmployees TempEmployee;
		int counter = 0;

		for (counter; counter < HowManyEmployees; counter++)
		{
			cout << "Please enter The Info Of Employee [" << counter + 1 << ']' << '\n';

			cout << "First Name : "; cin >> TempEmployee.FirstName; cin.clear(); cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Last Name : ";  cin >> TempEmployee.LastName;
			cout << "Salary : "; TempEmployee.Salary = ReadPositiveNumberWithValidation("", "HEY ! YOU MUST ENTER A POSITIVE NUMBER : ", "HEY ! YOU MUST ENTER A NUMBER NOT A TEXT : ");
			cout << endl;
			vPersonEmployee.push_back(TempEmployee);

		}


	};

	void ReadEmployeesUser(vector <stEmployees>& vPersonEmployee, int& HowManyEmployees)
	{
		HowManyEmployees = ReadPositiveNumberWithValidation("How Many Eployees Do You Want? ", "HEY ! YOU MUST ENTER A POSITIVE NUMBER : ", "HEY ! YOU MUST ENTER A NUMBER NOT A TEXT : ");
		cout << endl;
		ReadEmployeesDev(vPersonEmployee, HowManyEmployees);
	};

	void PrintEmployees(vector <stEmployees> vPersonEmployee)
	{
		int counter = 0;
		for (stEmployees Employees : vPersonEmployee)
		{
			counter++;
			cout << "The Info Of Person [" << counter << "]\n";
			cout << "First Name : " << Employees.FirstName << '\n';
			cout << "Last Name : " << Employees.LastName << '\n';
			cout << "Salary : " << Employees.Salary << '\n';
			cout << endl;
		}
	};


}  //I want to upgrade it later
namespace space_swap
{
	void swap(float& a, float& b)
	{
		float c;
		c = a;
		a = b;
		b = c;
	}

	void swap(float* a, float* b)
	{
		float c;
		c = *a;
		*a = *b;
		*b = c;
	}

	void swap(int* a, int* b)
	{
		int c;
		c = *a;
		*a = *b;
		*b = c;
	}

	void swap(int& a, int& b)
	{
		int c;
		c = a;
		a = b;
		b = c;
	}
};
namespace Colors
{
	enum enNormalColors { Black, Blue, Green, Aqua, Red, Purple, Yellow, White, Gray };
	enum enBrightColors { LightGreen = 65, LightAqua = 66, LightRed = 67, LightPurple = 68, LightYellow = 69, BrightWhite = 70 };

	// OverLoading Function ScreenColors

	void XScreenColors(enNormalColors ScreenColor, enNormalColors TextColor)
	{
		// تقسيمة 1
		string* SystemCMD;
		SystemCMD = new string;
		*SystemCMD = "color ";

		// تقسيمة 2
		SystemCMD->push_back(ScreenColor + 48); // ASCII تزويد 48 عشان تطلعلنا بالارقام من 
		SystemCMD->push_back(TextColor + 48); // ASCII تزويد 48 عشان تطلعلنا بالارقام من 
		const char* SystemCMDconst = SystemCMD->c_str();

		// تنفيذ الامر وتنضيف الزباله
		system(SystemCMDconst);
		delete SystemCMD;

	}

	void XScreenColors(enBrightColors ScreenColor, enBrightColors TextColor)
	{
		// تقسيمة 1
		string* SystemCMD;
		SystemCMD = new string;
		*SystemCMD = "color ";

		// تقسيمة 2
		SystemCMD->push_back(ScreenColor);
		SystemCMD->push_back(TextColor);
		const char* SystemCMDconst = SystemCMD->c_str();

		// تنفيذ الامر وتنضيف الزباله
		system(SystemCMDconst);
		delete SystemCMD;

	}

	void XScreenColors(enNormalColors ScreenColor, enBrightColors TextColor)
	{
		// تقسيمة 1
		string* SystemCMD;
		SystemCMD = new string;
		*SystemCMD = "color ";

		// تقسيمة 2
		SystemCMD->push_back(ScreenColor + 48); // ASCII تزويد 48 عشان تطلعلنا بالارقام من 
		SystemCMD->push_back(TextColor);
		const char* SystemCMDconst = SystemCMD->c_str();

		// تنفيذ الامر وتنضيف الزباله
		system(SystemCMDconst);
		delete SystemCMD;

	}

	void XScreenColors(enBrightColors ScreenColor, enNormalColors TextColor)
	{
		// تقسيمة 1
		string* SystemCMD;
		SystemCMD = new string;
		*SystemCMD = "color ";

		// تقسيمة 2
		SystemCMD->push_back(ScreenColor);
		SystemCMD->push_back(TextColor + 48); // ASCII تزويد 48 عشان تطلعلنا بالارقام من 
		const char* SystemCMDconst = SystemCMD->c_str();

		// تنفيذ الامر وتنضيف الزباله
		system(SystemCMDconst);
		delete SystemCMD;

	}

}
namespace Comparing
{
	bool IsStringEqualString(string str1, string str2)
	{
		if (str1 == str2)
			return true;
		else
			return false;
	}
}