#include "Projects/Based On (Lesson 01 - 39)/Project03/clsDate.hpp"
#include "Projects/Based On (Lesson 01 - 39)/Project03/run.hpp"


namespace Project03 {

	void run() {
		clsDate Date1(15 /*day*/ , 3 /*month*/ , 2022 /*year*/);
		clsDate Date2(40 /*day*/, 12 /*month*/, 2022 /*year*/);

		if (Date1.IsValidDate()) std::cout << "Date 1 is valid !\n";
		else std::cout << "Date 1 is NOT valid !\n";

		if (Date2.IsValidDate()) std::cout << "Date 2 is valid !\n";
		else std::cout << "Date 2 is NOT valid !\n";
	}

}