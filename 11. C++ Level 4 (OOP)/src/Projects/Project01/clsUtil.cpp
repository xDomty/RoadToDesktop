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

	  // ENCRYPT DECRYPT
			// Helper function to XOR encrypt/decrypt a string with a key
	  

      // Converts a hex string back to its original byte string
      std::string clsUtil::HexToBytes(const std::string& hex) {
           std::string bytes;
           if (hex.length() % 2 != 0) return bytes; // Invalid hex string
           for (size_t i = 0; i < hex.length(); i += 2) {
               unsigned int byte;
               if (sscanf(hex.substr(i, 2).c_str(), "%2X", &byte) == 1) {
                  bytes += static_cast<char>(byte);
               }
           }
           return bytes;
      }

      // Encrypts a string using the provided PinCode
      std::string clsUtil::EncryptString(const std::string& input, const std::string& key) {
           std::string cleanedInput;
           for (char c : input) {
                if (c != '\n' && c != '\r') cleanedInput += c;
           }
           std::string encrypted = cleanedInput;
           for (size_t i = 0; i < cleanedInput.size(); ++i) encrypted[i] ^= key[i % key.size()];

           // Convert to hex string to avoid newlines in output
           std::string hexOutput;
           for (unsigned char c : encrypted) {
               char buf[3];
               snprintf(buf, sizeof(buf), "%02X", c);
               hexOutput += buf;
           }

           return hexOutput;
      }

      // Decrypts a string using the provided PinCode
      std::string clsUtil::DecryptString(const std::string& input, const std::string& key) {

           std::string encrypted = HexToBytes(input);
           std::string decrypted = encrypted;
           for (size_t i = 0; i < encrypted.size(); ++i)
           decrypted[i] ^= key[i % key.size()];
           return decrypted;

      }

	  void clsUtil::pressAnyKeyToContinue() {
                std::cout << "\nPress any key to continue... ";
                std::cin.get();
      }

	// clsUtil class definition ends here

}

// Project01 : utility class library