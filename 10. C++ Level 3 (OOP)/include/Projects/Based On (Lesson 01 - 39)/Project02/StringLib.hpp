#pragma once

#include <string>
#include <vector>
#include "CharLib.hpp"

// Project02: Character Library & String Library PROJECT (Based on Lesson 01 - 39)"

namespace Project02 {

    enum class TrimType { All, Right, Left };
    enum class WhatToCount { SmallLetters, CapitalLetters, AllLetters };

    class clsStringLib {
        private:
            clsCharLib _charLib;
        
        public:
        
            // String Utilities
            std::string ReadString(std::string message);
            std::string TrimString(std::string text, TrimType type = TrimType::All);
            std::string RemovePunct(std::string text);
            std::string ReverseString(std::string text);
            std::string InvertAllStringLettersCase(std::string S1);
            std::string UpperFirstLetterOfEachWord(std::string S1);
            std::string LowerFirstLetterOfEachWord(std::string S1);
            std::string UpperAllString(std::string text);
            std::string LowerAllString(std::string text);
            std::string ReplaceWord(std::string S1, std::string StringToReplace, std::string sRepalceTo, bool MatchCase = true);
  
            // Count & Search
            short CountLetter(std::string S1, char Letter, bool MatchCase = true);
            short CountWords(std::string S1);
            short CountVowels(std::string text);
            short CountCapitalLetters(std::string S1);
            short CountSmallLetters(std::string S1);
        
            // Print Functions
            void PrintEachWordInString(std::string S1);
            void PrintFirstLetterOfEachWord(std::string S1);
        
            // String Manipulation
            std::vector<std::string> SplitString(std::string text, std::string delim = " ");
            std::string JoinString(std::vector<std::string>& words, std::string delim);
            std::string JoinString(std::string words[], short length, std::string delim);
	}; // class clsStringLib

} // namespace Project02

// Project02: Character Library & String Library PROJECT (Based on Lesson 01 - 39)"
