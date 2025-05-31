#include "Lessons/Lesson14.hpp"

// Lesson 14 : DESTRUCTORS (START NAMESPACE'S BLOCK)

namespace Lesson14 {

	// clsPerson (Start Block In SOURCE)
	   
	 // Constructor and Destructor

	    clsPerson::clsPerson(const string& FirstName, const string& LastName, unsigned short Age, const string& Country){
	    	this->_FirstName = FirstName;
	    	this->_LastName  = LastName ;
	    	this->_Age       = Age      ;
	    	this->_Country   = Country  ;
	    }
        
		clsPerson::~clsPerson() { // Destructor
			cout << "\nYou Have Ended The clsPerson Class\n";
		}

	 // Getters
		void clsPerson::GetInfo() {
			cout << "First Name: " << _FirstName << endl;
			cout << "Last Name : " << _LastName << endl;
			cout << "Age       : " << _Age << endl;
			cout << "Country   : " << _Country << endl;
		}


	// clsPerson (Start Block In SOURCE)


	// run (Start Defining the lesson's 14 excutable block)

		void run() {
			clsPerson person1("Adam", "Ahmed", 16, "UAE");
			person1.GetInfo();
		}

	// run (Start Defining the lesson's 14 excutable block)

}

// Lesson 14 : DESTRUCTORS (END NAMESPACE'S BLOCK)
