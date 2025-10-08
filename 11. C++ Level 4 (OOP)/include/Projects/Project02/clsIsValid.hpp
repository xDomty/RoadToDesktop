#pragma once
#include <string>

namespace Project02{

	class clsIsValid /*BASE CLASS FOR clsForceValid*/ {
		
		public:
			static bool Email(const std::string email);
			static bool PhoneNumber(const std::string phoneNumber);
			static bool URL(const std::string url);
			static bool Password(const std::string password, size_t minLength = 8, bool requireSpecialChar = true);
			static bool PositiveNumber(const size_t number);
			static bool NegativeNumber(const size_t number);
			static bool NumberBetween(const size_t number, const size_t from,const size_t to);
	};

}