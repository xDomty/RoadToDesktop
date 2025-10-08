#pragma once
#include <iostream>
using namespace std;

// Lesson 12 : CONSTRUCTORS  (START NAMESPACE'S BLOCK)

namespace Lesson12 {

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


    // run (Start Declaring the lesson's 12 excutable block)

		void run();

	// run (End Declaring the lesson's 12 excutable block)
}	    

// Lesson 12 : CONSTRUCTORS  (END NAMESPACE'S BLOCK)