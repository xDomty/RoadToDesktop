#pragma once
#include <iostream>
using namespace std;

// Lesson 3 : Classes and objects

namespace Lesson3 {

    // clsPerson Block START

	    class clsPerson {
	    
	       private:

	    	   int YouCantAccessThisOutside; // declaration only
	    
	       public:

	    	   string FirstName ;            // declaration only
	    	   string LastName  ;            // declaration only
	    	   string FullName();            // definition in source file
	    
	    };

	// clsPerson Block END

	void run(); // definition in source file
}

// Lesson 3 : Classes and objects