#pragma once
#include "../include/Force.hpp"
#include <iostream>
using namespace std;

namespace Problem18
{
	void WELCOMER();

	template <typename T>
	void TakeInput(T& radius)
	{
		radius = InputForce::PositiveAndZero<T>("Please enter the radius in cm: ");
	}

	template <typename T>
	T CircleAreaByRadius(T radius)
	{
		const float pi = 3.14159265358979323846;
		return pi * radius * radius;
	}

	template <typename T>
	void PrintResult(T radius)
	{
		cout << "The area of the circle is: " << CircleAreaByRadius(radius) << " squared centimeters." << endl;
	}

	void main();
}