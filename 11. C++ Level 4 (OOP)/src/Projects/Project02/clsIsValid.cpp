#include "Projects/Project02/clsIsValid.hpp"
#include "Global/clsDate.hpp"
#include <algorithm>

namespace Project02 {

	// clsIsValid class definition starts here
	 
	   bool clsIsValid::Email(const std::string email) {
		   if (email.empty() || email.find('@') == std::string::npos || email.find('.') == std::string::npos) {
			   return false;
		   } return true;
	   }
	   bool clsIsValid::PhoneNumber(const std::string phoneNumber) {
		   if (phoneNumber.empty() || phoneNumber.length() < 10 || !std::all_of(phoneNumber.begin(), phoneNumber.end(), ::isdigit)) {
			   return false;
		   } return true;
	   }
	   bool clsIsValid::URL(const std::string url) {
		   if (url.empty() || (url.find("http://") != 0 && url.find("https://") != 0)) {
			   return false;
		   } return true;
	   }
	   bool clsIsValid::Password(const std::string password, size_t minLength, bool requireSpecialChar) {
		   if (password.length() < minLength) {
			   return false;
		   }
		   if (requireSpecialChar && password.find_first_of("!@#$%^&*()_+-=[]{}|;':\",.<>?") == std::string::npos) {
			   return false;
		   }
		   return true;
	   }
	   bool clsIsValid::PositiveNumber(const size_t number) {
		   if (number > 0) return true;
		   else return false;
	   }
	   bool clsIsValid::NegativeNumber(const size_t number) {
		   if (number < 0) return true;
		   else return false;
	   }
	   bool clsIsValid::NumberBetween(const size_t number, const size_t from, const size_t to) {
		   if (number >= from && number <= to) return true;
		   else return false;
	   }


	// clsIsValid class definition ends here

}