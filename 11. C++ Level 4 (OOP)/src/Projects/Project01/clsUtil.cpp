#include "Projects/Project01/clsUtil.hpp" // clsUtil.hpp
#include "Global/clsString.hpp" // Global clsString.hpp

// Project01 : utility class library

namespace Project01
{

	// clsUtil class definition starts here

	  void clsUtil::Srand() {
		  srand(static_cast<unsigned int>(time(0))); // Seed the random number generator with current time
	  }

	  char clsUtil::GenerateChar(enCharType CharType) {
		  char RandomChar = '255';

		  switch (CharType) {
		      case enCharType::Capital:
				 RandomChar = RandomNum<unsigned short>(65, 90);
			     break;
			  case enCharType::Small:
				  RandomChar = RandomNum<unsigned short>(97, 122);
				  break;
			  case enCharType::Special:
				  RandomChar = RandomNum<unsigned short>(33,47);
				  break;
			  case enCharType::Digit:
				  RandomChar = RandomNum<unsigned short>(48, 57);
				  break;
			  case enCharType::Mix:
				  RandomChar = RandomNum<unsigned short>(33, 125);
				  break;
		  } return RandomChar;
	  }
	  std::string clsUtil::GenerateWord(size_t Length, enCharType CharType) {
		  std::string RandomWord;
		  for (size_t i = 0; i < Length; ++i) {
			  RandomWord += GenerateChar(CharType);
		  } return RandomWord;
	  }

	  std::string clsUtil::GenerateKey(enCharType CharType) {
		  std::string RandomKey;
		  for (size_t i = 0; i < 3; i++) {
			  for (size_t i = 0; i < 3; i++) {
				  RandomKey += GenerateChar(CharType);
			  } RandomKey += "-";
		  }  return RandomKey;
	  }

	  std::vector<std::string> clsUtil::FillArrayWithRandomWords(size_t ArrayLength, size_t WordLength, enCharType CharType) {
		  std::vector<std::string> arr(ArrayLength);
		  for (size_t i = 0; i < ArrayLength; ++i) {
			  arr[i] = GenerateWord(WordLength, CharType);
		  } return arr;
	  }
	  std::vector<std::string> clsUtil::FillArrayWithRandomKeys(size_t NumOfKeys, enCharType CharType) {
		  std::vector <std::string> RandomKeys;

		  for (size_t i = 0; i < NumOfKeys; i++) {
			  RandomKeys.push_back(GenerateKey(CharType));
		  } return RandomKeys;
	  }

	  std::string clsUtil::AddTabs(size_t NumOfTabs) {
		  std::string Tabs;
		  for (size_t i = 0; i < NumOfTabs; ++i) {
			  Tabs += "\t";
		  } return Tabs;
	  }

	  std::string clsUtil::EncryptString(std::string& str, short key) {
		  std::string encryptedStr;
		  for (char c : str) {
			  encryptedStr += static_cast<char>(c + key);
		  } return encryptedStr;
	  }
	  std::string clsUtil::DecryptString(std::string& str, short key) {
		  std::string decryptedStr;
		  for (char c : str) {
			  decryptedStr += static_cast<char>(c - key);
		  } return decryptedStr;
	  }

	// clsUtil class definition ends here

}

// Project01 : utility class library