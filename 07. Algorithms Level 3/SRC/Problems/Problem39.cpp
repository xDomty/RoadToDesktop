#include "../../include/Problems/Problem39.hpp"

namespace Problem39 {
	string JoinString(vector<string>& words, string delim)
	{
		string joined = "";
		for (string& word : words)
			joined += word + delim;
		joined.erase(joined.length() - delim.length(), joined.length());
		return joined;
	}

	void main()
	{
		vector<string> words = { "Mohammed","Faid","Ali","Maher" };
		cout << "Vector after join: \n";
		cout << JoinString(words, "$$") << endl;
	}
}