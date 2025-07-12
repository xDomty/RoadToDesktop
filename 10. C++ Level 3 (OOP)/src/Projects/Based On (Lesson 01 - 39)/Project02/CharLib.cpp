#include "Projects/Based On (Lesson 01 - 39)/Project02/CharLib.hpp"
#include <iostream>
#include <cctype>

// Project02: Character Library & String Library PROJECT (Based on Lesson 01 - 39)

namespace Project02 {

    // clsCharLib Class Implementation START

         char clsCharLib::ReadChar() {
             char Ch1;
             std::cout << "Please Enter a Character?\n";
             std::cin >> Ch1;
             return Ch1;
         }
         
         char clsCharLib::InvertLetterCase(char ch) {
             return isupper(ch) ? tolower(ch) : toupper(ch);
         }
         
         bool clsCharLib::IsVowel(char c) {
             char vowels[] = { 'a', 'e', 'i', 'o', 'u' };
             for (char vowel : vowels) {
                 if (tolower(c) == vowel)
                     return true;
             }
             return false;
         }

    // clsCharLib Class Implementation START

} // namespace Project02

// Project02: Character Library & String Library PROJECT (Based on Lesson 01 - 39)
