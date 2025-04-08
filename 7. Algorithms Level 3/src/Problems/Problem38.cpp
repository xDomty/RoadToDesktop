#include "../../include/Problems/Problem38.hpp"
#include <string>

namespace Problem38 {
	enum enTrimTypes { All, Right, Left };

	string TrimString(string text, enTrimTypes type = enTrimTypes::All)
	{
		switch (type)
		{
		case All:
			text = TrimString(text, enTrimTypes::Right);
			text = TrimString(text, enTrimTypes::Left);
			break;
		case Right:
			while (text[text.length() - 1] == ' ')
				text.erase(text.length() - 2, text.length() - 1);
			break;
		case Left:
			while (text[0] == ' ') text.erase(0, 1);
			break;
		}

		return text;
	}

	void main()
	{
		string text;
		cout << "String     = ";
		getline(cin, text);
		cout << "\nTrim       = " << TrimString(text);
		cout << "\nTrim Right = " << TrimString(text, enTrimTypes::Right);
		cout << "\nTrim Left  = " << TrimString(text, enTrimTypes::Left);
		cout << endl;
	}
}