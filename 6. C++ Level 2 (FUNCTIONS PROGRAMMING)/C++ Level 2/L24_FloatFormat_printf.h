#pragma once

#include <iostream>
#include <cstdio>
using namespace std;

namespace space_L24_Lessons
{
	namespace space_L24_LE1
	{
		void L24_LE1_main()
		{

			float pi = 3.141592653589793238462643383279502884197;

			cout << "Rounding using variable :\n";
			// Round to the nearest integer 10

			printf("the value of pi is %.*f\n", 1, pi);

			// Round to the nearest integer 100

			printf("the value of pi is %.*f", 2, pi);
			cout << endl;
			// Round to the nearest integer 1000

			printf("the value of pi is %.*f\n", 3, pi);

			// Round to the nearest integer 10000

			printf("the value of pi is %.*f", 4, pi);
			cout << endl << endl;

			// RoundUsingNoVariable 

			    cout << "Rounding using no variable:\n";


			          // Round to the nearest integer 10
			          
			          printf("the value of pi is %.1f\n", pi);
			          
			          // Round to the nearest integer 100
			          
			          printf("the value of pi is %.2f", pi);
			          cout << endl;
			          // Round to the nearest integer 1000
			          
			          printf("the value of pi is %.3f\n", pi);
			          
			          // Round to the nearest integer 10000
			          
			          printf("the value of pi is %.4f", pi);
		}
	}
}