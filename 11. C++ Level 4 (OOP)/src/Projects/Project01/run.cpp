#include "Projects/Project01/run.hpp"
#include "Projects/Project01/clsUtil.hpp" // clsUtil.hpp

// Project01: utility class library

namespace Project01 {
	void run() {
		clsUtil::Srand(); // Seed the random number generator
		// Example usage of clsUtil methods
		auto randomNumbers = clsUtil::FillArrayWithRandomNumbers<int>(10, 1, 100);
		auto randomWords = clsUtil::FillArrayWithRandomWords(5, 8, clsUtil::enCharType::Mix);
		auto randomKeys = clsUtil::FillArrayWithRandomKeys(3, clsUtil::enCharType::Digit);
		// Print the results
		for (const auto& num : randomNumbers) {
			std::cout << num << " ";
		}
		std::cout << std::endl;
		for (const auto& word : randomWords) {
			std::cout << word << " ";
		}
		std::cout << std::endl;
		for (const auto& key : randomKeys) {
			std::cout << key << " ";
		}
		std::cout << std::endl;
	}
} // namespace Project01

// Project01: utility class library
