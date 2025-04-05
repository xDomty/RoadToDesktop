#pragma once
#include <iostream>
using namespace std;

namespace Lesson44 {
	void ReadAPositiveNumberOfArrayWithVaildation(int*& arr, int ArrayLength, string message, string MessageIfTextFail, string MessageIfNegativeFail);

	void PrintArrayNumbers(int* arr, int ArrayLength, int FormatOfArray, string message, string messagePart2, string TheMeterOfResult);

    void main();
}
