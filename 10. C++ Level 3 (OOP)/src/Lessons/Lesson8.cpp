#include "../../include/Lessons/Lesson8.hpp"

// Lesson 8 : Read Only Property & Write Only Property (START SOURCE'S BLOCK)

namespace Lesson8 {

	// clsStudent (Start BLOCK)

		  // Read And Write Properties:	

			// PROPERTY SET:
	             void clsStudent::setFirstName(string FirstName) {
					 _FirstName = FirstName;
				 };
				 void clsStudent::setLastName(string LastName) {
					 _LastName = LastName;
				 };
				 void clsStudent::setAge(short Age) {
					 _Age = Age;
				 };

	        // PROPERTY GET:					     
				 string clsStudent::getFirstName() {
					 return _FirstName;
				 };
				 string clsStudent::getLastName() {
					 return _LastName;
				 };
	             short clsStudent::getAge(){
					 return _Age;
				 }

	      // Read Only Properties:
	      
	        // PROPERTY GET:
				 int clsStudent::getID() {
					 return _ID;
				 }
				 string clsStudent::getFullName() {
					 return _FirstName + " " + _LastName;
				 };
	      
	      // Write Only Properties:
	      
	         // PROPERTY SET: 
	      	 // nothing here yet

	// clsStudent (End BLOCK)


	// run (Start defining the Lesson 8 excutable Block)

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
		cout << "Student1 ID: " << Student1.getID() << endl;

	}

	// run (End defining the Lesson 8 excutable Block)
}

// Lesson 8 : Read Only Property & Write Only Property (END SOURCE'S BLOCK)