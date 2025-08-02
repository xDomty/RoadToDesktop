#pragma once

#include "Global/clsDate.hpp" // Global: clsDate.hpp
#include <vector>


// Project01: utility class library

namespace Project01 {

	// clsUtil class declaration starts here

	class clsUtil {

	    public:
	    	     enum enCharType { Small , Capital , Digit , Special , Mix};
	    
	    		 static void Srand();
	    
	    		 template <typename T>
	    		 static T RandomNum(T min, T max);
	    
	    		 static char        GenerateChar(enCharType CharType = enCharType::Mix);
	    		 static std::string GenerateWord(size_t Length, enCharType CharType = enCharType::Mix);
	    		 static std::string GenerateKey(enCharType CharType = enCharType::Digit);
	    
	    		 template <typename T>
	    		 static std::vector<T> FillArrayWithRandomNumbers(size_t ArrayLength,size_t NumFrom, size_t NumTo);
	    
	    		 static std::vector<std::string> FillArrayWithRandomWords(size_t ArrayLength, size_t WordLength, enCharType CharType = enCharType::Mix);
	    		 static std::vector<std::string> FillArrayWithRandomKeys(size_t ArrayLength, enCharType CharType = enCharType::Mix);
	    		 
	    		 // Swap :D
	    		   template <typename T>
	    		   static void Swap(T& a, T& b);
	    
	    		 // SHUFFLE 
	    		   template <typename T>
	    		   static void ShuffleArray(std::vector<T>& arr);
	    
	    		 // TABS
	    		   static std::string AddTabs(size_t NumOfTabs);
	    
	    		 // ENCRYPT DECRYPT
	    		   static std::string EncryptString(std::string& str, short key);
	    		   static std::string DecryptString(std::string& str, short key);
	    
	};

	// clsUtil class declaration ends here

}

// Project01: utility class library

#include "clsUtil.tpp"