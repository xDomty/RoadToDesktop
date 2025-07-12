#include "Projects/Based On (Lesson 01 - 39)/Project02/StringLib.hpp"
#include <iostream>
#include <cctype>
#include <algorithm>

// Project02: Character Library & String Library PROJECT (Based on Lesson 01 - 39)"

namespace Project02 {

    // String Utilities

    std::string clsStringLib::ReadString(std::string message) {
        std::string S1;
        std::cout << message;
        std::cin.ignore();
        std::getline(std::cin, S1);
        return S1;
    }

    std::string clsStringLib::TrimString(std::string text, TrimType type) {
        if (type == TrimType::Left || type == TrimType::All) {
            text.erase(text.begin(), std::find_if(text.begin(), text.end(), [](unsigned char ch) {
                return !std::isspace(ch);
            }));
        }
        if (type == TrimType::Right || type == TrimType::All) {
            text.erase(std::find_if(text.rbegin(), text.rend(), [](unsigned char ch) {
                return !std::isspace(ch);
            }).base(), text.end());
        }
        return text;
    }

    std::string clsStringLib::RemovePunct(std::string text) {
        std::string result;
        for (char c : text) {
            if (!std::ispunct(static_cast<unsigned char>(c))) result += c;
        }
        return result;
    }

    std::string clsStringLib::ReverseString(std::string text) {
        std::vector<std::string> words = SplitString(text);
        std::reverse(words.begin(), words.end());
        return JoinString(words, " ");
    }

    std::string clsStringLib::InvertAllStringLettersCase(std::string S1) {
        for (char& ch : S1) {
            ch = _charLib.InvertLetterCase(ch);
        }
        return S1;
    }

    std::string clsStringLib::UpperFirstLetterOfEachWord(std::string S1) {
        bool isFirst = true;
        for (char& c : S1) {
            if (!std::isspace(static_cast<unsigned char>(c)) && isFirst) {
                c = std::toupper(static_cast<unsigned char>(c));
                isFirst = false;
            }
            else if (std::isspace(static_cast<unsigned char>(c))) {
                isFirst = true;
            }
        }
        return S1;
    }

    std::string clsStringLib::LowerFirstLetterOfEachWord(std::string S1) {
        bool isFirst = true;
        for (char& c : S1) {
            if (!std::isspace(static_cast<unsigned char>(c)) && isFirst) {
                c = std::tolower(static_cast<unsigned char>(c));
                isFirst = false;
            }
            else if (std::isspace(static_cast<unsigned char>(c))) {
                isFirst = true;
            }
        }
        return S1;
    }

    std::string clsStringLib::UpperAllString(std::string text) {
        for (char& c : text) {
            c = std::toupper(static_cast<unsigned char>(c));
        }
        return text;
    }

    std::string clsStringLib::LowerAllString(std::string text) {
        for (char& c : text) {
            c = std::tolower(static_cast<unsigned char>(c));
        }
        return text;
    }

    std::string clsStringLib::ReplaceWord(std::string S1, std::string StringToReplace, std::string sRepalceTo, bool MatchCase) {
        std::vector<std::string> vString = SplitString(S1, " ");
        for (std::string& s : vString) {
            if (MatchCase) {
                if (s == StringToReplace) {
                    s = sRepalceTo;
                }
            }
            else {
                if (LowerAllString(s) == LowerAllString(StringToReplace)) {
                    s = sRepalceTo;
                }
            }
        }
        return JoinString(vString, " ");
    }

    // Count & Search

    short clsStringLib::CountLetter(std::string S1, char Letter, bool MatchCase) {
        short Counter = 0;
        for (char ch : S1) {
            if (MatchCase) {
                if (ch == Letter) Counter++;
            }
            else {
                if (std::tolower(ch) == std::tolower(Letter)) Counter++;
            }
        }
        return Counter;
    }

    short clsStringLib::CountWords(std::string S1) {
        short count = 0;
        std::string word;
        for (char c : S1) {
            if (std::isspace(static_cast<unsigned char>(c))) {
                if (!word.empty()) count++;
                word.clear();
            }
            else {
                word += c;
            }
        }
        if (!word.empty()) count++;
        return count;
    }

    short clsStringLib::CountVowels(std::string text) {
        short count = 0;
        for (char c : text) {
            if (_charLib.IsVowel(c)) count++;
        }
        return count;
    }

    short clsStringLib::CountCapitalLetters(std::string S1) {
        short Counter = 0;
        for (char c : S1) {
            if (std::isupper(static_cast<unsigned char>(c))) Counter++;
        }
        return Counter;
    }

    short clsStringLib::CountSmallLetters(std::string S1) {
        short Counter = 0;
        for (char c : S1) {
            if (std::islower(static_cast<unsigned char>(c))) Counter++;
        }
        return Counter;
    }

    // Print Functions

    void clsStringLib::PrintEachWordInString(std::string S1) {
        std::vector<std::string> words = SplitString(S1);
        for (const std::string& word : words) {
            std::cout << word << std::endl;
        }
    }

    void clsStringLib::PrintFirstLetterOfEachWord(std::string S1) {
        bool isFirst = true;
        std::cout << "\nFirst letters of this string:\n";
        for (char c : S1) {
            if (!std::isspace(static_cast<unsigned char>(c)) && isFirst) {
                std::cout << c << std::endl;
                isFirst = false;
            }
            else if (std::isspace(static_cast<unsigned char>(c))) {
                isFirst = true;
            }
        }
    }

    // String Manipulation

    std::vector<std::string> clsStringLib::SplitString(std::string text, std::string delim) {
        std::vector<std::string> tokens;
        size_t pos = 0;
        while ((pos = text.find(delim)) != std::string::npos) {
            std::string token = text.substr(0, pos);
            if (!token.empty()) tokens.push_back(token);
            text.erase(0, pos + delim.length());
        }
        if (!text.empty()) tokens.push_back(text);
        return tokens;
    }

    std::string clsStringLib::JoinString(std::vector<std::string>& words, std::string delim) {
        std::string result;
        for (size_t i = 0; i < words.size(); ++i) {
            result += words[i];
            if (i < words.size() - 1) result += delim;
        }
        return result;
    }

    std::string clsStringLib::JoinString(std::string words[], short length, std::string delim) {
        std::string result;
        for (short i = 0; i < length; ++i) {
            result += words[i];
            if (i < length - 1) result += delim;
        }
        return result;
    }

} // namespace Project02

// Project02: Character Library & String Library PROJECT (Based on Lesson 01 - 39)"
