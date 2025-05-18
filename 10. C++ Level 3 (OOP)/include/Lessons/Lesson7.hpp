#pragma once
#include <iostream>
using namespace std;

// Lesson 7 : Property Set / Get (START DECLARING BLOCK)

namespace Lesson7 {

	// clsStudent (Start declaring the Student class)

	    class clsStudent {
	       private:
			   string _FirstName; // Declaration ONLY !
			   string _LastName;  // Declaration ONLY !
			   short _Age;        // Declaration ONLY !

	       protected:
	       public:

			   // PROPERTY SET:
			      void setFirstName(string FirstName); // Definition in source file
				  void setLastName(string LastName);   // Definition in source file
				  void setAge(short Age);			   // Definition in source file
			       
			   // PROPERTY GET:
			      string getFirstName();               // Definition in source file
			      string getLastName();				   // Definition in source file
			      string getFullName();				   // Definition in source file
			      short getAge();					   // Definition in source file

	    };

	// clsStudent (End declaring the Student class)


	// run (Start declaring the Lesson 7 excutable Block)

	void run(); // Definintion in source file

	// run (End declaring the Lesson 7 excutable Block)

} 

// Lesson 7 : Property Set / Get (END DECLARING BLOCK)