#pragma once
#include "../../include/HeadersBeforeCourse/Swap.hpp"

namespace Swap
{
	void swap(float& a, float& b)
	{
		float c;
		c = a;
		a = b;
		b = c;
	}

	void swap(float* a, float* b)
	{
		float c;
		c = *a;
		*a = *b;
		*b = c;
	}

	void swap(int* a, int* b)
	{
		int c;
		c = *a;
		*a = *b;
		*b = c;
	}

	void swap(int& a, int& b)
	{
		int c;
		c = a;
		a = b;
		b = c;
	}
};
