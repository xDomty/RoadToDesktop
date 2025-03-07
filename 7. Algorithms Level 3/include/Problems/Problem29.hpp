#pragma once
#include "../HeadersAfterCourse/Operations.hpp"

namespace Problem29 {
	namespace MrSolution {
		string ReadString();
		enum enumWhatToCount { SmallLetters , CapitalLetters, AllLetters};
		short CountLetters(string S1, enumWhatToCount WhatToCount);
		short CountCapitalLetters(string S1);
		short CountSmallLetters(string S1);
		void main();
	}
	namespace MySolution {
		void main();
	}
}