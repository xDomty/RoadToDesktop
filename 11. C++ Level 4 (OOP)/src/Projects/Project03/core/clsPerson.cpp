#include "Projects/Project03/core/clsPerson.hpp"
#include <iostream>

// Project03: Bank Project
//        clsPerson.cpp

namespace Project03 {

    namespace core {
        // clsPerson class Definition Starts Here

        // constructor
        // Lesson 01: Find Client
        clsPerson::clsPerson(const std::string& FirstName,
                             const std::string& LastName,
                             const unsigned short Age, const std::string& Email,
                             const std::string& PhoneNumber) {
            _FirstName = FirstName;
            _LastName = LastName;
            _FullName = _FirstName + " " + _LastName;
            _Age = Age;
            _Email = Email;
            _PhoneNumber = PhoneNumber;
        }

        // Setters
        // Lesson 01: Find Client
        void clsPerson::SetFirstName(const std::string& FirstName) {
            _FirstName = FirstName;
            _FullName = _FirstName + " " + _LastName;
        }

        void clsPerson::SetLastName(const std::string& LastName) {
            _LastName = LastName;
            _FullName = _FirstName + " " + _LastName;
        }

        void clsPerson::SetAge(const unsigned short Age) { _Age = Age; }

        void clsPerson::SetEmail(const std::string& Email) { _Email = Email; }

        void clsPerson::SetPhoneNumber(const std::string& PhoneNumber) {
            _PhoneNumber = PhoneNumber;
        }

        // Getters
        // Lesson 01: Find Client
        std::string clsPerson::GetFirstName() const { return _FirstName; }
        std::string clsPerson::GetLastName() const { return _LastName; }
        std::string clsPerson::GetFullName() const { return _FullName; }
        unsigned short clsPerson::GetAge() const { return _Age; }
        std::string clsPerson::GetEmail() const { return _Email; }
        std::string clsPerson::GetPhoneNumber() const {
            return _PhoneNumber;
        } // okie nice

        // Other methods
        // Lesson 01: Find Client
        void clsPerson::Print() {
            std::cout << "Person INFO:\n";
            std::cout << "------------------------" << std::endl;
            std::cout << "Name: " << _FullName << std::endl;
            std::cout << "Age: " << _Age << std::endl;
            std::cout << "Email: " << _Email << std::endl;
            std::cout << "Phone Number: " << _PhoneNumber << std::endl;
            std::cout << "------------------------" << std::endl;
        }

        // clsPerson class Definition Ends Here

    } // namespace core
} // namespace Project03

// clsPerson.cpp
//       Project03: Bank Project
