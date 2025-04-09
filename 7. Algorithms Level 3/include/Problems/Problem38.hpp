#pragma once
#include <iostream>
using namespace std;

namespace Problem38 {
    enum enTrimTypes { All, Right, Left };

	string TrimString(string text, enTrimTypes type);

	void main();
}