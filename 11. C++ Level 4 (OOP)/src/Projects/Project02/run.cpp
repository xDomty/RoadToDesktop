#include "Projects/Project02/run.hpp"
#include "Projects/Project02/clsForceInputValid.hpp"
#include <iostream>

namespace Project02 {
	
	void run() {

		std::cout << "Welcome to the Input Validation Program!" << std::endl;

		std::cout << "1. Please enter a valid number demo: ";
		int Number = clsForceInputValid::Number("Please enter a number: ", "Invalid input. Please enter a valid number: ");
		std::cout << "You entered: " << Number << std::endl << std::endl;

		std::cout << "2. Please enter a valid email demo: ";
		std::string Email = clsForceInputValid::Email("Email? ");
		std::cout << "You entered: " << Email << std::endl << std::endl;

		std::cout << "3. Please enter a valid phone number demo: ";
		std::string PhoneNumber = clsForceInputValid::PhoneNumber("Phone Number? ");
		std::cout << "You entered: " << PhoneNumber << std::endl << std::endl;

		std::cout << "4. Please enter a valid URL demo: ";
		std::string URL = clsForceInputValid::URL();
		std::cout << "You entered: " << URL << std::endl << std::endl;

		std::cout << "5. Please enter a valid password demo: ";
		std::string Password = clsForceInputValid::Password(8, true);
		std::cout << "You entered: " << Password << std::endl << std::endl;

		std::cout << "6. Please enter a positive number demo: ";
		size_t PositiveNumber = clsForceInputValid::PositiveNumber("Please enter a positive number: ", "Invalid input. Please enter a valid positive number: ", "Number must be positive. Please try again: ");
		std::cout << "You entered: " << PositiveNumber << std::endl;

		std::cout << "7. Please enter a negative number demo: ";
		size_t NegativeNumber = clsForceInputValid::NegativeNumber("Please enter a negative number: ", "Invalid input. Please enter a valid negative number: ", "Number must be negative. Please try again: ");
		std::cout << "You entered: " << NegativeNumber << std::endl;

		std::cout << "8. Please enter a number between 1 and 10 demo: ";
		size_t NumberBetween = clsForceInputValid::NumberBetween("pls enter num between 1 and 10: ",1, 10, "number");
		std::cout << "You entered: " << NumberBetween << std::endl;

		std::cout << "Thank you for using the Input Validation Program! made by domty :D" << std::endl;

		// waziha

	}

}