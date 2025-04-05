#pragma once
#include "../../Include/Homeworks/Lesson9HW.hpp"
#include <limits> 

namespace Lesson9HW {

    int ValidateMark() {
        int mark;
        cout << "Enter a mark between 0 and 100: ";

        while (true) {
            
            cin >> mark;

            if (cin.fail()) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Invalid input. Please enter a numeric value." << endl;
            } else if (mark >= 0 && mark <= 100) return mark; 
			  else cout << "Invalid mark. Please enter a mark between 0 and 100 : " << endl;
        }
    }

	string PassOrFailShortHandIf(int mark) {
		return (mark >= 50) ? "PASS" : "FAIL";
	}
	string PassOrFailOrEqualTo50ShortHandIf(int mark) {
		return (mark > 50) ? "PASS" : (mark == 50) ? "EQUAL TO 50" : "FAIL";
	}

	void main() {
		cout << "Homework 1 Of Lesson 9 (Short hand if): Pass Or Fail...\n";
		cout << "enter your mark? "; int mark = ValidateMark();
		cout << "Your result is: " << PassOrFailShortHandIf(mark) << endl << endl;

		cout << "Homework 2 Of Lesson 9 (Short hand if): Pass Or Fail Or Equal To 50...\n";
		cout << "enter your mark? "; mark = ValidateMark();
		cout << "Your result is: " << PassOrFailOrEqualTo50ShortHandIf(mark) << endl;
	}
}