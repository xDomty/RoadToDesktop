#pragma once
#include <iostream>
using namespace std;

// Lesson 8 : Read Only Property & Write Only Property (START HEADERS'S BLOCK)

namespace Lesson8 {

	// clsStudent (Start BLOCK)

	    class clsStudent {

	        private:
	        	  string _FirstName;                     // Declaration ONLY !
	        	  string _LastName;                      // Declaration ONLY !
	        	  short _Age;                            // Declaration ONLY !
				  int _ID  = 10;                         // Definition in header file
	        
	        protected: // nothing here yet

	        public:
	        
			 // Read And Write Properties:	
			 
	        	// PROPERTY SET:
	        	  void setFirstName(string FirstName);   // Definition in source file
	        	  void setLastName(string LastName)  ;   // Definition in source file
				  void setAge(short Age)             ;   // Definition in source file
	        										     
	        	// PROPERTY GET:					     
	        	  string getFirstName()              ;   // Definition in source file
	        	  string getLastName()               ;   // Definition in source file
	        	  short getAge()                     ;   // Definition in source file
													     

			 // Read Only Properties:
			 
				// PROPERTY GET:
				  int getID()                        ;   // Definition in source file
				  string getFullName();                  // Definition in source file
				   
		     // Write Only Properties:

				// PROPERTY SET: 
				  // nothing here yet
	    };

	// clsStudent (END BLOCK)



	// run (Start declaring the Lesson 8 excutable Block)

	void run(); // Definintion in source file

	// run (End declaring the Lesson 8 excutable Block)

}

// Lesson 8 : Read Only Property & Write Only Property (END HEADER'S BLOCK)