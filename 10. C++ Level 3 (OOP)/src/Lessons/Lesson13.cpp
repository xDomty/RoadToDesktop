#include "Lessons/Lesson13.hpp"


// Lesson 13 : COPY CONSTRUCTORS  (START NAMESPACE'S BLOCK)

namespace Lesson13 {

	// clsAddress Start Block In Source


	    clsAddress::clsAddress(string AddressLine1, string AddressLine2, string PoBOX, string ZipCode) {
	    	_AddressLine1 = AddressLine1;
	    	_AddressLine2 = AddressLine2;
	    	_PoBOX = PoBOX;
	    	_ZipCode = ZipCode;
	    }
	    
	    void clsAddress::GetAddress() {
	    	cout << "Address Line 1 : " << _AddressLine1 << '\n'
	    		<< "Address Line 2 : " << _AddressLine2 << '\n'
	    		<< "PoBOX          : " << _PoBOX << '\n'
	    		<< "Zip Code       : " << _ZipCode << endl;
	    }

	// clsAddress End Block In Source


	// run (Start Defining the lesson's 13 excutable block)

	void run() {
		clsAddress Address1("Abu DHABI", "UAE", "00000", "00000");
		clsAddress Address2 = Address1; // Copy constructor is called here

		cout << "Address 1 Details: \n"; // Showing Address1 details
		Address1.GetAddress();

		cout << "\n------------------------\n" << endl;

		cout << "Address 2 Details: \n"; // Showing Address2 details
		Address2.GetAddress();
	}

	// run (End Defining the lesson's 13 excutable block)
}

// Lesson 13 : COPY CONSTRUCTORS  (END NAMESPACE'S BLOCK)