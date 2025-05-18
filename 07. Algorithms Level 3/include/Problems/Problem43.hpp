#pragma once
#include <iostream>
#include <vector>
using namespace std;

namespace Problem43 {

    vector<string> SplitString(string text, string delim);

	string LowerString(string word);

	string ReplaceStringWords(string text, string oldWord, string newWord, bool matchCase);

	void main();

}