#include "Projects/Based On (Lesson 01 - 39)/Project02/run.hpp"
#include "Projects/Based On (Lesson 01 - 39)/Project02/StringLib.hpp"
#include <iostream>

// Project02: Character Library & String Library PROJECT (Based on Lesson 01 - 39)

namespace Project02 {
	
	void run() {
		clsStringLib stringLib;
		std::string input = stringLib.ReadString("Enter a string: ");

		std::cout << "Trimmed String: " << stringLib.TrimString(input) << std::endl;
		std::cout << "Reversed String: " << stringLib.ReverseString(input) << std::endl;
		std::cout << "Uppercase String: " << stringLib.UpperAllString(input) << std::endl;
		std::cout << "Lowercase String: " << stringLib.LowerAllString(input) << std::endl;
		
	}

} // namespace Project02

// Project02: Character Library & String Library PROJECT (Based on Lesson 01 - 39)