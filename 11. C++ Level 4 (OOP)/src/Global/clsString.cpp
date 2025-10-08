#include "Global/clsString.hpp"
#include <iostream>
#include <cctype>
#include <algorithm>

// Global: String Class Library

namespace Global {

    // String Utilities

    std::string clsString::ReadString(std::string message) {
        std::string S1;
        std::cout << message;
        std::cin.ignore();
        std::getline(std::cin, S1);
        return S1;
    }

    std::string clsString::TrimString(std::string text, TrimType type) {
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

    std::string clsString::RemovePunct(std::string text) {
        std::string result;
        for (char c : text) {
            if (!std::ispunct(static_cast<unsigned char>(c))) result += c;
        }
        return result;
    }

    std::string clsString::ReverseString(std::string text) {
        std::vector<std::string> words = SplitString(text);
        std::reverse(words.begin(), words.end());
        return JoinString(words, " ");
    }

    std::string clsString::InvertAllStringLettersCase(std::string S1) {
        for (char& ch : S1) {
            ch = _clsCharObj.InvertLetterCase(ch);
        }
        return S1;
    }

    std::string clsString::UpperFirstLetterOfEachWord(std::string S1) {
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

    std::string clsString::LowerFirstLetterOfEachWord(std::string S1) {
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

    std::string clsString::UpperAllString(std::string text) {
        for (char& c : text) {
            c = std::toupper(static_cast<unsigned char>(c));
        }
        return text;
    }

    std::string clsString::LowerAllString(std::string text) {
        for (char& c : text) {
            c = std::tolower(static_cast<unsigned char>(c));
        }
        return text;
    }

    std::string clsString::ReplaceWord(std::string S1, std::string StringToReplace, std::string sRepalceTo, bool MatchCase) {
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

    short clsString::CountLetter(std::string S1, char Letter, bool MatchCase) {
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

    short clsString::CountWords(std::string S1) {
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

    short clsString::CountVowels(std::string text) {
        short count = 0;
        for (char c : text) {
            if (_clsCharObj.IsVowel(c)) count++;
        }
        return count;
    }

    short clsString::CountCapitalLetters(std::string S1) {
        short Counter = 0;
        for (char c : S1) {
            if (std::isupper(static_cast<unsigned char>(c))) Counter++;
        }
        return Counter;
    }

    short clsString::CountSmallLetters(std::string S1) {
        short Counter = 0;
        for (char c : S1) {
            if (std::islower(static_cast<unsigned char>(c))) Counter++;
        }
        return Counter;
    }

    // Print Functions

    void clsString::PrintEachWordInString(std::string S1) {
        std::vector<std::string> words = SplitString(S1);
        for (const std::string& word : words) {
            std::cout << word << std::endl;
        }
    }

    void clsString::PrintFirstLetterOfEachWord(std::string S1) {
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

    std::vector<std::string> clsString::SplitString(std::string text, std::string delim) {
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

    std::string clsString::JoinString(std::vector<std::string>& words, std::string delim) {
        std::string result;
        for (size_t i = 0; i < words.size(); ++i) {
            result += words[i];
            if (i < words.size() - 1) result += delim;
        }
        return result;
    }

    std::string clsString::JoinString(std::string words[], short length, std::string delim) {
        std::string result;
        for (short i = 0; i < length; ++i) {
            result += words[i];
            if (i < length - 1) result += delim;
        }
        return result;
    }

} // namespace Global

// Global: String Class Library
