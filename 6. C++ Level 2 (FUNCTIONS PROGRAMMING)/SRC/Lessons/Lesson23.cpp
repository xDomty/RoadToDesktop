#include "../../Include/Lessons/Lesson23.hpp"
#include <iostream>
#include <cstdio> // for printf
using namespace std;

namespace Lesson23 {
    void main() {
		cout << "Lesson 23 : Integar Format Printf ...\n";
		int Page = 1, TotalPages = 10;

		// Print string and int variable

		printf("The Page Number is : %d \n", Page);
		printf("This is the page %d of %d\n", Page, TotalPages);

		//Width Specification

		printf("The page number is %0*d\n", 5, Page);
		printf("The page number is %0*d\n", 4, Page);
		printf("The page number is %0*d\n", 3, Page);
		printf("The page number is %0*d\n", 2, Page);
		printf("The page number is %0*d\n", 6, Page);

		int number1 = 90, number2 = 10;

		printf("%d + %d = %d\n", number1, number2, number1 + number2);
    };
}
