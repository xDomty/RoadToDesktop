#include "Lessons/Lesson12.hpp"


// Lesson 12 : CONSTRUCTORS  (START NAMESPACE'S BLOCK)

namespace Lesson12 {

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
	

	// run (Start Defining the lesson's 12 excutable block)

		void run() {
			clsAddress Address1("Abu DHABI", "UAE", "00000", "00000");
			Address1.GetAddress();
		}

	// run (End Defining the lesson's 12 excutable block)
}

// Lesson 12 : CONSTRUCTORS  (END NAMESPACE'S BLOCK)