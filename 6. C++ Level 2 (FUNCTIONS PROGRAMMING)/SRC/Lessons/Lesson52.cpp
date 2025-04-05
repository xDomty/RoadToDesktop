#include "../../Include/Lessons/Lesson52.hpp"
#include <iostream>
#include <fstream>
using namespace std;

namespace Lesson52 {
    void main() {
		cout << "Lesson 52 : Write Mode :: Write Data To Files...\n";
		fstream NewFile;
		NewFile.open("MyFile.txt", ios::out);
		if (NewFile.is_open())
		{
			NewFile << "Hello\n\n MY NAME IS ADAM";
			NewFile.close();
		}
    };
}
