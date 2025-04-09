#include "../../include/Problems/Problem29.hpp"
#include <string>

namespace Problem29 {

	string ReadString()
	{
		string S1;
		cout << "Please Enter Your String?\n";
		cin.ignore(1, '\n');
		getline(cin, S1);
		return S1;
	}

	short CountLetters(string S1, enumWhatToCount WhatToCount = enumWhatToCount::AllLetters)
	{
		if (WhatToCount == enumWhatToCount::AllLetters)
		{
			return S1.length();
		}
		short Counter = 0;
		for (short i = 0; i < S1.length(); i++)
		{
			if (WhatToCount == enumWhatToCount::CapitalLetters && isupper(S1[i]))
				Counter++;
			else if (WhatToCount == enumWhatToCount::SmallLetters && islower(S1[i]))
				Counter++;
		}
		return Counter;
	}

	short CountCapitalLetters(string S1)
	{
		short Counter = 0;
		for (short i = 0; i < S1.length(); i++)
		{
			if (isupper(S1[i]))
				Counter++;
		}
		return Counter;
	}

	short CountSmallLetters(string S1)
	{
		short Counter = 0;
		for (short i = 0; i < S1.length(); i++)
		{
			if (islower(S1[i]))
				Counter++;
		}
		return Counter;
	}
	
	void main()
	{
		string S1 = ReadString();
		cout << "\nString Length = " << S1.length();
		cout << "\nCapital Letters Count= " << CountCapitalLetters(S1);
		cout << "\nSmall Letters Count= " << CountSmallLetters(S1);
		cout << "\n\nMethod 2\n";
		cout << "\nString Length = " << CountLetters(S1, enumWhatToCount::AllLetters);
		cout << "\nCapital Letters Count= " << CountLetters(S1, enumWhatToCount::CapitalLetters);
		cout << "\nSmall Letters Count= " << CountLetters(S1, enumWhatToCount::SmallLetters);
	}
}