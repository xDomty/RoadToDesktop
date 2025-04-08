#pragma once
#include <iostream>
using namespace std;

namespace Problem29 {
	string ReadString();
	enum enumWhatToCount;
	short CountLetters(string S1, enumWhatToCount WhatToCount);
	short CountCapitalLetters(string S1);
	short CountSmallLetters(string S1);
	void main();
}