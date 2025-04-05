#include "../../Include/Lessons/Lesson25.hpp"
#include <iostream>
using namespace std;

namespace Lesson25 {
    void main() {
		cout << "Lesson 25 : String Format PrintF...\n";
		//ARRAY OF CHAR
		char name[] = "Hello my name is adam";
		char YaWelcome[] = "This is the school of programming :)";

		printf("%s %s", name, YaWelcome);
		cout << endl;

		//CHAR

		char Hello = 'L';
		printf("%c", Hello);
		cout << endl;

		//lENGTH OF CHAR

		printf("%*c", 5, Hello);
    };
}
