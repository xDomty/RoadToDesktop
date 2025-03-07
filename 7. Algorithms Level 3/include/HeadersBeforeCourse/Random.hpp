#pragma once
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

namespace Random
{
    namespace Numbers
    {
        template <typename T>
        T Generate(T From, T To)
        {
            if constexpr (is_floating_point<T>::value)
            {
                return From + static_cast<T>(rand()) / (static_cast<T>(RAND_MAX / (To - From)));
            }
            else
            {
                return rand() % (To - From + 1) + From;
            }
        }

        template <typename T>
        void FillVector2D(vector<vector<T>> &arr, unsigned long NumberOfRows, unsigned long NumberOfCols, T RandomNumbersFrom, T RandomNumbersTo)
        {
            for (unsigned long x = 0; x < NumberOfRows; x++)
            {
                vector<T> temp;
                for (unsigned long y = 0; y < NumberOfCols; y++)
                {
                    temp.push_back(Generate(RandomNumbersFrom, RandomNumbersTo));
                }
                arr.push_back(temp);
            }
        }

        template <typename T>
        void FillVector(vector<T> &vRandomNumbers, T RandomNumbersFrom, T RandomNumbersTo, unsigned short NumberOfRandoms)
        {
            for (unsigned short i = 0; i < NumberOfRandoms; i++)
            {
                vRandomNumbers.push_back(Generate(RandomNumbersFrom, RandomNumbersTo));
            }
        }

        template <typename T>
        void Add(vector<T> &vRandomNumbers, T RandomNumbersFrom, T RandomNumbersTo, unsigned short NumberOfRandoms, T &result)
        {
            FillVector(vRandomNumbers, RandomNumbersFrom, RandomNumbersTo, NumberOfRandoms);
            result = 0;
            for (unsigned short i = 0; i < NumberOfRandoms; i++)
            {
                result += vRandomNumbers[i];
            }
        }

        template <typename T>
        void Subtract(vector<T> &vRandomNumbers, T RandomNumbersFrom, T RandomNumbersTo, unsigned short NumberOfRandoms, T &result)
        {
            FillVector(vRandomNumbers, RandomNumbersFrom, RandomNumbersTo, NumberOfRandoms);
            result = 0;
            for (unsigned short i = 0; i < NumberOfRandoms; i++)
            {
                result -= vRandomNumbers[i];
            }
        }

        template <typename T>
        void Multiply(vector<T> &vRandomNumbers, T RandomNumbersFrom, T RandomNumbersTo, unsigned short NumberOfRandoms, T &result)
        {
            FillVector(vRandomNumbers, RandomNumbersFrom, RandomNumbersTo, NumberOfRandoms);
            result = 1;
            for (unsigned short i = 0; i < NumberOfRandoms; i++)
            {
                result *= vRandomNumbers[i];
            }
        }

        template <typename T>
        void Divide(vector<T> &vRandomNumbers, T RandomNumbersFrom, T RandomNumbersTo, unsigned short NumberOfRandoms, T &result)
        {
            FillVector(vRandomNumbers, RandomNumbersFrom, RandomNumbersTo, NumberOfRandoms);
            result = vRandomNumbers[0];
            for (unsigned short i = 1; i < NumberOfRandoms; i++)
            {
                result /= vRandomNumbers[i];
            }
        }
    }
}

namespace Random
{
    namespace StringsAndChars
    {
        // String related functions can be added here
    }
}
