#pragma once
#include <vector>

namespace Project01{
    template <typename T>
    T clsUtil::RandomNum(T min, T max) {
        return static_cast<T>(min + rand() % (max - min + 1));
    }

    template <typename T>
    std::vector<T> clsUtil::FillArrayWithRandomNumbers(size_t ArrayLength, size_t NumFrom, size_t NumTo) {
        std::vector<T> arr(ArrayLength);
        for (size_t i = 0; i < ArrayLength; ++i) {
            arr[i] = RandomNum<T>(NumFrom, NumTo);
        }
        return arr;
    }

    template <typename T>
    void clsUtil::Swap(T& a, T& b) {
        T temp = a;
        a = b;
        b = temp;
    }

    template <typename T>
    void clsUtil::ShuffleArray(std::vector<T>& arr) {
        for (size_t i = arr.size() - 1; i > 0; --i) {
            size_t j = RandomNum<size_t>(0, i);
            Swap(arr[i], arr[j]);
        }
    }

}

