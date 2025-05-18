#include "../../include/Lessons/Lesson6.hpp"

// Lesson 6 : Access speciiers / modifiers (START BLOCK)

namespace Lesson6 {

	// clsAccessSpecifiersExample Defining block START

	   // public:
	      int clsAccessSpecifiersExample::PublicFunction() {
	      	  return 30;
	      }

	// clsAccessSpecifiersExample Defining block END
    


    // run (Start defining the Lesson 6 excutable Block)

	    void run(){
	    
	    	clsAccessSpecifiersExample ObjectExample;
	    	
	    	// The Access Specifiers are used to set the access level of class members.
	    	// The default access specifier is private.
	    	// The public access specifier allows members to be accessed from outside the class.
	    	// The private access specifier restricts access to members from outside the class.
	    	// The protected access specifier allows members to be accessed by derived classes.
	    
	    	// The private access specifier is used to restrict access to members from outside the class.
	    	   // ObjectExample.PrivateVariable = 10; // Error: 'PrivateVariable' is inaccessible due to its protection level
	    	   // ObjectExample.ProtectedFunction();  // Error: 'ProtectedFunction' is protected within this context
	    
	    	// The protected access specifier is used to allow members to be accessed by derived classes.
	    	   // ObjectExample.ProtectedVariable = 20; // Error: 'ProtectedVariable' is inaccessible due to its protection level
	    	   // ObjectExample.ProtectedFunction(); // Error: 'ProtectedFunction' is protected within this context
	    
	    	// The public access specifier is used to allow members to be accessed from outside the class.
	    	   cout << "Public Variable In The Member Returns " << ObjectExample.PublicVariable   << endl;    // OK: 'PublicVariable' is accessible
	    	   cout << "Public Function In The Member Returns " << ObjectExample.PublicFunction() << endl;    // OK: 'PublicFunction' is accessible
	    
			// Also U Can Edit On The Public Variables in the objects :)
			   ObjectExample.PublicVariable = 100; // OK: 'PublicVariable' is accessible
			   cout << "Public Variable In The Member after editing Returns " << ObjectExample.PublicVariable << endl;    // OK: 'PublicVariable' is accessible
	    }

	// run (End defining the Lesson 6 excutable Block)

}

// Lesson 6 : Access speciiers / modifiers (END BLOCK)