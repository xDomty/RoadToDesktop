#pragma once
#include <iostream>
using namespace std;

// Lesson 6 : Access specifiers / modifiers (START BLOCK)

namespace Lesson6 {

	// clsAccessSpecifiersExample block START

	   class clsAccessSpecifiersExample { // class --> members --> objects

	      private:   // unaccessable else inside the mother class
			  int PrivateVariable = 1; // Defined in the header file
			  int PrivateFunction()    // Defined in the header file
			  { 
				  return 10;
			  };

	      protected: // unaccessable else inside the mother class or the drived classes of the mother class
			  int ProtectedVariable = 2; // Defined in the header file
			  int ProtectedFunction()    // Defined in the header file
			  {
				  return 20;
			  }

	      public:    // accessable for everyone
			  int PublicVariable = 30;   // Defined in header file
			  int PublicFunction()   ;   // Defined in source file
	   };

	// clsAccessSpecifiersExample block END


	// run (Start declaring the Lesson 6 excutable Block)

	void run(); // Defined in the source file

	// run (End declaring the Lesson 6 excutable Block)

}

// Lesson 6 : Access speciiers / modifiers (END BLOCK)