#include "../include/Problem24.hpp"

namespace Problem24
{
    void WELCOMER()
    {
        cout << "This program checks if the entered age is valid or not\n";
    }

    void PrintResult(optional <short> age)
    {
        if (age.has_value())
            cout << "VALID AGE";
        else
            cout << "INVALID AGE";
    }

    void main()
    {
        WELCOMER();
        optional <short> age = ageCheck();
        PrintResult(age);
        cout << endl;
    }
}