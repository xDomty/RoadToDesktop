#pragma once

#include <iostream>
#include <vector>
using namespace std;

namespace space_L32_Lessons
{
	namespace space_L32_LE1
	{
		void L32_LE1_main()
		{
           vector <int> vNums;
		   
		   vNums.push_back(4);
		   vNums.push_back(9);

		   cout << "First Element : " << vNums.front() << endl; //first element
		   cout << "Last Element : " << vNums.back() << endl; // LAST ELEMENT
		   cout << "Vector Capacity : " << vNums.capacity() << endl; //VECTOR CAPACITY
		   cout << "Vector Size : " << vNums.size() << endl; //VECTOR SIZE
		   vNums.empty();

		}
	}
}