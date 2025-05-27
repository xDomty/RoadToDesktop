#include "Lessons/Lesson03.hpp"

// Lesson 3 : Classes and objects

namespace Lesson3 {

	// clsPerson Block START
	
	    string clsPerson::FullName() {
	 	    return FirstName + " " + LastName;
	    }

	// clsPerson Block END
	   

	void run() {
		clsPerson Person1;
		Person1.FirstName = "Adam";
		Person1.LastName = "Ahmed";
		cout << "Person 1 Full Name: " << Person1.FullName();
	}
}

// Lesson 3 : Classes and objects