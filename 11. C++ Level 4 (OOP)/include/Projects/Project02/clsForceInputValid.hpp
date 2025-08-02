#include "clsIsValid.hpp"

// Project02: clsForceInputValid/clsIsValid
	// clsForceInputValid.hpp

namespace Project02 {

	class clsForceInputValid : private clsIsValid /*private inheritance from clsIsValid*/ {

	public:
		static std::string Email();
		static std::string PhoneNumber();
		static std::string URL();
		static std::string Password(size_t minLength = 8, bool requireSpecialChar = true);
		static size_t Number(std::string message, std::string messageIfTextFail);
		static size_t PositiveNumber(std::string message, std::string messageIfTextFail, std::string messageIfNumFail);
		static size_t NegativeNumber(std::string message, std::string messageIfTextFail, std::string messageIfNumFail);
		static size_t NumberBetween(size_t from, size_t to);

	}; // class clsForceInputValid

}

// clsForceInputValid.hpp
	// Project02: clsForceInputValid/clsIsValid