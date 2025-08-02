#include "Global/clsChar.hpp"
#include <iostream>
#include <cctype>

// Global: Character Class Library 

namespace Global {

    // clsChar Class Definition START

         char clsChar::ReadChar() {
             char Ch1;
             std::cout << "Please Enter a Character?\n";
             std::cin >> Ch1;
             return Ch1;
         } // clsChar::ReadChar()
         
         char clsChar::InvertLetterCase(char ch) {
             return isupper(ch) ? tolower(ch) : toupper(ch);
		 } // clsChar::InvertLetterCase(char ch)
         
         bool clsChar::IsVowel(char c) {
             char vowels[] = { 'a', 'e', 'i', 'o', 'u' };
             for (char vowel : vowels) {
                 if (tolower(c) == vowel)
                     return true;
             }
             return false;
		 } // clsChar::IsVowel(char c)

    // clsChar Class Definition END

} // namespace Global

// Global: Character Class Library 
