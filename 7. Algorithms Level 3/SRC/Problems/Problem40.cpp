#include "../../include/Problems/Problem40.hpp"

namespace Problem40 {
	string JoinString(vector<string>& words, string delim)
	{
		string joined = "";
		for (string& word : words)
			joined += word + delim;
		joined.erase(joined.length() - delim.length(), joined.length());
		// OR: joined = joined.substr(0, joined.length() - delim.length());
		return joined;
	}

	string JoinString(string words[], short length, string delim)
	{
		string joined = "";
		for (short i = 0; i < length; i++)
			joined += words[i] + delim;
		joined.erase(joined.length() - delim.length(), joined.length());
		// OR: joined = joined.substr(0, joined.length() - delim.length());
		return joined;
	}

	void main()
	{
		vector<string> vWords = { "Mohammed","Faid","Ali","Maher" };
		string arrWords[] = { "Mohammed","Faid","Ali","Maher" };

		cout << "Vector after join: \n";
		cout << JoinString(vWords, "###") << endl;
		cout << "\nArray after join: \n";
		cout << JoinString(arrWords, 4, "###") << endl;
	}
}