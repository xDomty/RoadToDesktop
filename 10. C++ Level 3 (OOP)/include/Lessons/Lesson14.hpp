#pragma once
#include <iostream>
using namespace std;

// Lesson 14 : DESTRUCTORS (START NAMESPACE'S BLOCK)

namespace Lesson14 {

	// clsPerson (Start Block In HEADER)

	    class clsPerson {

		   private:
			   string          _FirstName;  // Defined To Objects
			   string          _LastName ;  // Defined To Objects
			   unsigned short  _Age      ;  // Defined To Objects  
			   string          _Country  ;  // Defined To Objects

		   protected: // no code here

		   public:

			   // Constructors and Destructor

			       clsPerson(const string& FirstName, const string& LastName, unsigned short Age, const string& Country); // Constructor (Defined in src file)
			      
			       ~clsPerson();                                                                                          // Destructor  (Defined in src file)

			   // Getters
				   void GetInfo();                                                                                        // Defined in src file
	    };

	// clsPerson (End Block In HEADER)


	// run (Start Declaring the lesson's 14 excutable block)

	    void run();

	// run (End Declaring the lesson's 14 excutable block)

}

// Lesson 14 : DESTRUCTORS (END NAMESPACE'S BLOCK)