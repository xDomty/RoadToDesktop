#pragma once
#include <iostream>
using namespace std;

// Lesson 9 : Property SET/GET  (START HEADERS'S BLOCK)

namespace Lesson9 {

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
	        	  // void setFirstName(string FirstName); //  DECLINCED !!  BETTER APPROACH IS BELLOW (THE COMMENTED DIFINITION IN SOURCE FILE)
	        	  // void setLastName(string LastName)  ; //  DECLINCED !!  BETTER APPROACH IS BELLOW (THE COMMENTED DIFINITION IN SOURCE FILE)
				  // void setAge(short Age)             ; //  DECLINCED !!  BETTER APPROACH IS BELLOW (THE COMMENTED DIFINITION IN SOURCE FILE)
	        										      //  DECLINCED !!  BETTER APPROACH IS BELLOW (THE COMMENTED DIFINITION IN SOURCE FILE)
	        	// PROPERTY GET:					      //  DECLINCED !!  BETTER APPROACH IS BELLOW (THE COMMENTED DIFINITION IN SOURCE FILE)
	        	  // string getFirstName()              ; //  DECLINCED !!  BETTER APPROACH IS BELLOW (THE COMMENTED DIFINITION IN SOURCE FILE)
	        	  // string getLastName()               ; //  DECLINCED !!  BETTER APPROACH IS BELLOW (THE COMMENTED DIFINITION IN SOURCE FILE)
	        	  // short getAge()                     ; //  DECLINCED !!  BETTER APPROACH IS BELLOW (THE COMMENTED DIFINITION IN SOURCE FILE)
							
				// DECLARATIONS SPECIFICATIONS:

				  // Windows ONLY APRROACH (BECAUSE IT'S ON WINDOWS C++ COMPILER LEVEL)
				   // __declspec(property(put = setFirstName, get = getFirstName)) string FirstName;
				   // __declspec(property(put = setLastName, get = getLastName))   string LastName;
				   // __declspec(property(put = setAge, get = getAge))             short Age;

                  // For everything ! (BETTER APPROACH AND DOESN'T NEED PROPERTY SET/GET FUNCTIONS)
				    string& FirstName();           // Definition in source file
                    string& LastName();            // Definition in source file
                    short& Age();                  // Definition in source file
    
    
			 // Read Only Properties:    
				  const int& ID();                 // Definition in source file
				  const string FullName();         // Definition in source file
	    };

	// clsStudent (END BLOCK)



	// run (Start declaring the Lesson 9 excutable Block)

	void run(); // Definintion in source file

	// run (End declaring the Lesson 9 excutable Block)

}

// Lesson 9 : Property SET/GET  (END HEADERS'S BLOCK)