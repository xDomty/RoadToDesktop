#include "../../Include/Lessons/Lesson53.hpp"
#include <iostream>
#include <fstream>
using namespace std;

namespace Lesson53 {
    void main() {
		cout << "Lesson 53 : Append Mode...\n";
		fstream NewFile;
		NewFile.open("MyFile.txt", ios::out | ios::app);
		if (NewFile.is_open())
		{
			NewFile << "\nHello\n\n MY NAME IS ADAM";
			NewFile.close();
		}
    };
}
