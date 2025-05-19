#include "../../include/Lessons/Lesson07.hpp"

// Lesson 7 : Property Set / Get (START DEFINING BLOCK)

namespace Lesson7 {

	// clsStudent (Start defining the Student class)
	
		// PROPERTY SET:
	        void clsStudent::setFirstName(string FirstName) {
	        	_FirstName = FirstName;
	        }
	        void clsStudent::setLastName(string LastName) {
	        	_LastName = LastName;
	        }
	        void clsStudent::setAge(short Age) {
	        	_Age = Age;
	        }
	        
	    // PROPERTY GET:
	        string clsStudent::getFirstName() {
	            return _FirstName;
	        }
	        string clsStudent::getLastName() {
	            return _LastName;
	        }
	        string clsStudent::getFullName() {
	            return _FirstName + " " + _LastName;
	        }
	        short clsStudent::getAge() {
	            return _Age;
	        }

	// clsStudent (End defining the Student class)


	// run (Start defining the Lesson 7 excutable Block)

	void run() {

		clsStudent Student1;

		// Set Info For Student1
		   Student1.setFirstName("Adam");
		   Student1.setLastName("Ahmed");
		   Student1.setAge(16);

	    // Print Info For Student1
		   cout << "Student1 First Name: " << Student1.getFirstName() << endl;
		   cout << "Student1 Last Name: " << Student1.getLastName() << endl;
		   cout << "Student1 Full Name: " << Student1.getFullName() << endl;
		   cout << "Student1 Age: " << Student1.getAge() << endl;

	}

	// run (End defining the Lesson 7 excutable Block)
}

// Lesson 7 : Property Set / Get (END DEFINING BLOCK)