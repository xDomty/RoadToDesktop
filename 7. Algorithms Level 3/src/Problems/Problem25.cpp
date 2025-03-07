#include "../../include/Problems/Problem25.hpp"

namespace Problem25 {
    namespace MrSolution {
        string ReadString()
        {
            string S1;
            cout << "Please Enter Your String?\n";
            getline(cin, S1);
            return S1;
        }
        string LowerFirstLetterOfEachWord(string S1)
        {
            bool isFirstLetter = true;
            for (short i = 0; i < S1.length(); i++)
            {
                if (S1[i] != ' ' && isFirstLetter)
                {
                    S1[i] = tolower(S1[i]);
                }
                isFirstLetter = (S1[i] == ' ' ? true : false);
            }
            return S1;
        }
        void main()
        {
            string S1 = ReadString();
            cout << "\nString after conversion:\n";
            S1 = LowerFirstLetterOfEachWord(S1);
            cout << S1 << endl;
        }
    }

    namespace MySolution {
        void main() {
            string text = "";
            cout << "Hi, enter a text? ";
            cin.ignore();
            getline(cin, text);
            cout << "Here is every capital letter of each first word you entered\n";
            string result = OPERATIONS::StringsAndChars::TheTextButEachFirstWordIsALowerLetter(text);
            cout << result << endl;
        }
    }
}