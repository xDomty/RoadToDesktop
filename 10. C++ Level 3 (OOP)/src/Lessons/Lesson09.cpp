#include "Lessons/Lesson09.hpp"

// Lesson 9 : Property SET/GET  (START SOURCE'S BLOCK)

namespace Lesson9 {

	// clsStudent (Start BLOCK)

		  // Read And Write Properties:	

			// PROPERTY SET: (CANCELLED APPROACH)
	            // void clsStudent::setFirstName(string FirstName) {
	            // 	_FirstName = FirstName;
	            // };
	            // void clsStudent::setLastName(string LastName) {
	            // 	_LastName = LastName;
	            // };
	            // void clsStudent::setAge(short Age) {
	            // 	_Age = Age;
	            // };

	        // PROPERTY GET: (CANCELLED APPROACH)			     
	            // string clsStudent::getFirstName() {
	            // 	return _FirstName;
	            // };
	            // string clsStudent::getLastName() {
	            // 	return _LastName;
	            // };
	            // short clsStudent::getAge() {
	            // 	return _Age;
	            // }

			// Property SET/GET (DECLARATIONS SPECIFICATIONS) :
			   string& clsStudent::FirstName(){
                    return _FirstName;
			   }
			   string& clsStudent::LastName(){
				    return _LastName;
			   }
			   short& clsStudent::Age(){
                    return _Age;
			   }


	      // Read Only Properties:
	            const int& clsStudent::ID() {
	            	return _ID;
	            }
	            const string clsStudent::FullName() {
	            	return _FirstName + " " + _LastName;
	            };


    // clsStudent (End BLOCK)


// run (Start defining the Lesson 9 excutable Block)

	void run() {

		clsStudent Student1;

		// Set Info For Student1
		Student1.FirstName() = "Adam";
		Student1.LastName() = "Ahmed";
		Student1.Age() = 16;

		// Print Info For Student1
		cout << "Student1 First Name: " << Student1.FirstName() << endl;
		cout << "Student1 Last Name: " << Student1.LastName() << endl;
		cout << "Student1 Full Name: " << Student1.FullName() << endl;
		cout << "Student1 Age: " << Student1.Age() << endl;
		cout << "Student1 ID: " << Student1.ID() << endl;

	}

// run (End defining the Lesson 9 excutable Block)

}

// Lesson 9 : Property SET/GET  (END SOURCE'S BLOCK)