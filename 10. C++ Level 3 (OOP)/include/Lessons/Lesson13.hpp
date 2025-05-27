#pragma once
#include <iostream>
using namespace std;

// Lesson 13 : COPY CONSTRUCTORS (START NAMESPACE'S BLOCK)

namespace Lesson13 {

	// clsAddress Start Block In Header

	    class clsAddress {
	    private:
	    	string _AddressLine1;     // Definitions Related To The OBJECTS
	    	string _AddressLine2;	  // Definitions Related To The OBJECTS
	    	string _PoBOX;	          // Definitions Related To The OBJECTS
	    	string _ZipCode;          // Definitions Related To The OBJECTS
	    
	    protected: // nothing is under protected..
	    public:
	    
	    	clsAddress(string AddressLine1, string AddressLine2, string PoBOX, string ZipCode); // Definition in the source file
	    
	    	void GetAddress();                                                                  // Definition in the source file
	    
	    };

	// clsAddress End Block In Header


	// run (Start Declaring the lesson's 13 excutable block)

		void run();

	// run (End Declaring the lesson's 13 excutable block)

}

// Lesson 12 : COPY CONSTRUCTORS (END NAMESPACE'S BLOCK)