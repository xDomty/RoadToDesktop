#include "../../include/Problems/Problem23.hpp"

namespace Problem23 {
    namespace MrSolution {
        string ReadString()
        {
            string S1;
            cout << "Please Enter Your String?\n";
            getline(cin, S1);
            return S1;
        }
        void PrintFirstLetterOfEachWord(string S1)
        {
            bool isFirstLetter = true;
            cout << "\nFirst letters of this string: \n";
            for (short i = 0; i < S1.length(); i++)
            {
                if (S1[i] != ' ' && isFirstLetter)
                {
                    cout << S1[i] << endl;
                }
                isFirstLetter = (S1[i] == ' ' ? true : false);
            }
        }
        void main()
        {
            PrintFirstLetterOfEachWord(ReadString());
        }
    }

    namespace MySolution {
        void main() {
            string text = "";
            cout << "Hi, enter a text? ";
            cin.ignore();
            getline(cin, text);
            cout << "Here is every letter of each first word you entered\n";
            string result = OPERATIONS::StringsAndChars::EachFirstLetterOfEachWord(text);
            cout << result << endl;
        }
    }
}