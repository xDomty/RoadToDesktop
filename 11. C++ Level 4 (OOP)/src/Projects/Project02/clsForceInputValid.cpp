#include "Projects/Project02/clsForceInputValid.hpp"
#include "Global/clsString.hpp"
#include <limits>

namespace Project02 {

    std::string clsForceInputValid::Email(std::string message) {
        std::string email = "";
        do {
            email = Global::clsString::ReadString(message);
        } while (!clsIsValid::Email(email));
        return email;
    }

    std::string clsForceInputValid::PhoneNumber(std::string message) {
        std::string phoneNumber;
        do {
            phoneNumber = Global::clsString::ReadString(message);
        } while (!clsIsValid::PhoneNumber(phoneNumber));
        return phoneNumber;
    }

    std::string clsForceInputValid::URL() {
        std::string url;
        do {
            url = Global::clsString::ReadString("Please enter a valid URL: ");
        } while (!clsIsValid::URL(url));
        return url;
    }

    std::string clsForceInputValid::Password(size_t minLength, bool requireSpecialChar) {
        std::string password;
        do {
            password = Global::clsString::ReadString("Please enter a valid password: ");
        } while (!clsIsValid::Password(password, minLength, requireSpecialChar));
        return password;
    }

    size_t clsForceInputValid::Number(std::string message, std::string messageIfTextFail) {
        size_t number;
        std::cout << message;
        std::cin >> number;
        while (std::cin.fail()) {
            std::cin.clear();                                                   // clear the error flag
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // discard invalid input
            std::cout << messageIfTextFail;
            std::cin >> number;
        }
        return number;
    }

    size_t clsForceInputValid::PositiveNumber(std::string message, std::string messageIfTextFail, std::string messageIfNumFail) {
        size_t number;
        while (true) {
            std::cout << message;
            std::cin >> number;

            if (std::cin.fail()) {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << messageIfTextFail;
                continue;
            }

            if (!clsIsValid::PositiveNumber(number)) {
                std::cout << messageIfNumFail;
                continue;
            }

            break;
        }
        return number;
    }

    size_t clsForceInputValid::NegativeNumber(std::string message, std::string messageIfTextFail, std::string messageIfNumFail) { // wtf
        size_t number;
        while (true) {
            std::cout << message;
            std::cin >> number;

            if (std::cin.fail()) {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << messageIfTextFail;
                continue;
            }

            if (!clsIsValid::NegativeNumber(number)) {
                std::cout << messageIfNumFail;
                continue;
            }

            break;
        }
        return number;
    }

    size_t clsForceInputValid::NumberBetween(std::string message, size_t from, size_t to, std::string inputType) {
        std::cout << message;
        size_t number;
        std::cin >> number;
        while (std::cin.fail() || !clsIsValid::NumberBetween(number, from, to)) {
            std::cin.clear();                                                   // clear the error flag
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // discard invalid input
            std::cout << "\nPlease enter a valid " << inputType << "between " << from << " and " << to << ": ";
            std::cin >> number;
        }
        return number;
    }

} // namespace Project02
