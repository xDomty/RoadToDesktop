#include "Projects/Project03/Lesson03/backend/clsPerson.hpp"
#include <iostream>
#include <string>

// Project03: Bank Project
// Lesson03: Add Client
// clsPerson.cpp (backend)

namespace Project03 {
    namespace Lesson03 {
        namespace backend {

          // clsPerson class Definition Starts Here

            // constructor
            clsPerson::clsPerson(const std::string& FirstName, const std::string& LastName, const unsigned short Age, const std::string& Email, const std::string& PhoneNumber) {
                _FirstName = FirstName;
                _LastName = LastName;
                _FullName = _FirstName + " " + _LastName;
                _Age = Age;
                _Email = Email;
                _PhoneNumber = PhoneNumber;
            }

            // Setters
            void clsPerson::SetFirstName(const std::string& FirstName) {
                _FirstName = FirstName;
                _FullName = _FirstName + " " + _LastName;
            }

            void clsPerson::SetLastName(const std::string& LastName) {
                _LastName = LastName;
                _FullName = _FirstName + " " + _LastName;
            }

            void clsPerson::SetAge(const unsigned short Age) {
                _Age = Age;
            }

            void clsPerson::SetEmail(const std::string& Email) {
                _Email = Email;
            }

            void clsPerson::SetPhoneNumber(const std::string& PhoneNumber) {
                _PhoneNumber = PhoneNumber;
            }

            // Getters
            std::string clsPerson::GetFirstName() const{
                return _FirstName;
            }

            std::string clsPerson::GetLastName() const {
                return _LastName;
            }

            std::string clsPerson::GetFullName() const {
                return _FullName;
            }

            unsigned short clsPerson::GetAge() const {
                return _Age;
            }

            std::string clsPerson::GetEmail() const {
                return _Email;
            }

            std::string clsPerson::GetPhoneNumber() const {
                return _PhoneNumber;
            }

            // Other methods
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

        } // namespace backend

    } // namespace Lesson03

} // namespace Project03

// clsPerson.cpp (backend)
// Lesson03: Add Client
// Project03: Bank Project