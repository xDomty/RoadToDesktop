#pragma once
#include <vector>
#include <string>
#include <limits>
#include <iostream>
#include "Colors.hpp"
using namespace std;

namespace Read
{
    template<typename T>
    T getInput(const string& message = "Enter value: ", const string& messageIfFail = "")
    {
        T value;
        cout << message;
        while (!(cin >> value))
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            Colors_WindowsOS::XScreenColors(Colors_WindowsOS::enNormalColors::Red, Colors_WindowsOS::enBrightColors::BrightWhite);
            cout << messageIfFail;
            system("pause");
            Colors_WindowsOS::XScreenColors(Colors_WindowsOS::enNormalColors::Black, Colors_WindowsOS::enBrightColors::BrightWhite);
            cout << endl << message;
        }
        return value;
    }

    template<typename T>
    T ReadPositiveNumberWithValidation(const string& message = "", const string& messageIfNegativeOr0Fail = "", const string& messageIfTextFail = "")
    {
        T number = getInput<T>(message, messageIfTextFail);
        while (number <= 0)
        {
            cout << messageIfNegativeOr0Fail;
            number = getInput<T>("", messageIfTextFail);
        }
        return number;
    }

    template<typename T>
    void ReadArrayWithValidation(T*& arr, int arrayLength, const string& message = "", const string& messageIfTextFail = "", const string& messageIfNegativeFail = "")
    {
        arr = new T[arrayLength];
        for (int i = 0; i < arrayLength; i++)
        {
            while (true)
            {
                cout << message << ' ' << i + 1 << " : ";
                if (cin >> arr[i])
                {
                    if constexpr (is_same<T, int>::value)
                    {
                        if (arr[i] < 0)
                        {
                            cout << messageIfNegativeFail;
                            continue;
                        }
                    }
                    break;
                }
                else
                {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    cout << messageIfTextFail;
                }
            }
        }
    }
}
