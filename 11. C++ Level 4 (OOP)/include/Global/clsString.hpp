#pragma once

#include "clsChar.hpp"
#include <string>
#include <vector>

// Global: String Class Library

namespace Global {

    class clsString {
    private:
        static clsChar _clsCharObj;

    public:
        // Enum Classes
        enum class TrimType { All,
                              Right,
                              Left };
        enum class WhatToCount { SmallLetters,
                                 CapitalLetters,
                                 AllLetters };

        // String Utilities
        static std::string ReadString(std::string message);
        static std::string TrimString(std::string text, TrimType type = TrimType::All);
        static std::string RemovePunct(std::string text);
        static std::string ReverseString(std::string text);
        static std::string InvertAllStringLettersCase(std::string S1);
        static std::string UpperFirstLetterOfEachWord(std::string S1);
        static std::string LowerFirstLetterOfEachWord(std::string S1);
        static std::string UpperAllString(std::string text);
        static std::string LowerAllString(std::string text);
        static std::string ReplaceWord(std::string S1, std::string StringToReplace, std::string sRepalceTo, bool MatchCase = true);

        // Count & Search
        static short CountLetter(std::string S1, char Letter, bool MatchCase = true);
        static short CountWords(std::string S1);
        static short CountVowels(std::string text);
        static short CountCapitalLetters(std::string S1);
        static short CountSmallLetters(std::string S1);

        // Print Functions
        static void PrintEachWordInString(std::string S1);
        static void PrintFirstLetterOfEachWord(std::string S1);

        // String Manipulation
        static std::vector<std::string> SplitString(std::string text, std::string delim = " ");
        static std::string JoinString(std::vector<std::string>& words, std::string delim);
        static std::string JoinString(std::string words[], short length, std::string delim);

        // Number TO STRING
        static std::string NumberToText(int Number);
    }; // class clsStringLib

} // namespace Global

// Project02: Character Library & String Library PROJECT (Based on Lesson 01 - 39)"
