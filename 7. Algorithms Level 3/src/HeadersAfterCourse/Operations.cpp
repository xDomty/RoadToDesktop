#pragma once
#include "../../include/HeadersAfterCourse/Operations.hpp"

namespace OPERATIONS {
    namespace StringsAndChars {
        string EachFirstLetterOfEachWord(string S1) {
            bool isFirstLetter = true;
            string result = "";
            for (short i = 0; i < S1.length(); i++)
            {
                if (S1[i] != ' ' && isFirstLetter)
                {
                    result = result + S1[i] + ' ';
                }
                isFirstLetter = (S1[i] == ' ' ? true : false);
            }

            return result;
        }

        string EachFirstLetterOfEachWordButCapital(string S1) {
            bool isFirstLetter = true;
            string result = "";
            for (short i = 0; i < S1.length(); i++)
            {
                if (S1[i] != ' ' && isFirstLetter)
                {
                    result = result + char(toupper(S1[i])) + ' ';
                }
                isFirstLetter = (S1[i] == ' ' ? true : false);
            }

            return result;
        }

        string TheTextButEachFirstWordIsACapitalLetter(string S1) {
            bool isFirstLetter = true;
            string result = "";
            for (short i = 0; i < S1.length(); i++)
            {
                if (S1[i] != ' ' && isFirstLetter)
                {
                    result = result + char(toupper(S1[i]));
                }
                else
                {
                    result = result + S1[i];
                }
                isFirstLetter = (S1[i] == ' ' ? true : false);
            }

            return result;
        }

        string TheTextButEachFirstWordIsALowerLetter(string S1) {
            bool isFirstLetter = true;
            string result = "";
            for (short i = 0; i < S1.length(); i++)
            {
                if (S1[i] != ' ' && isFirstLetter)
                {
                    result = result + char(tolower(S1[i]));
                }
                else
                {
                    result = result + S1[i];
                }
                isFirstLetter = (S1[i] == ' ' ? true : false);
            }

            return result;
        }

        string AllTheTextToUpper(string S1) {
            for (auto i = 0; i < S1.length(); i++) {
                S1[i] = toupper(S1[i]);
            }
            return S1;
        }

        string AllTheTextToLower(string S1) {
            for (auto i = 0; i < S1.length(); i++) {
                S1[i] = tolower(S1[i]);
            }
			return S1;
        }

        string TheTextButAllWordsAreCapitalLetters(string S1) {
            string CapitalText;
            for (int i = 0; i < S1.length(); i++) {
                CapitalText = toupper(S1[i]);
            }
            return CapitalText;
        }

        string TheTextButAllWordsAreSmallLetters(string S1) {
            string SmallText;
            for (int i = 0; i < S1.length(); i++) {
                SmallText = tolower(S1[i]);
            }
            return SmallText;
        }

        char InvertCharacterCase(char myChar) {
            return (isupper(myChar)) ? tolower(myChar) : toupper(myChar);
        }

        string StringInvertedCase(string S1) {
            for (auto i = 0; i < S1.length(); i++) {
                S1[i] = InvertCharacterCase(S1[i]);
            }
            return S1;
        }

       
    }
}