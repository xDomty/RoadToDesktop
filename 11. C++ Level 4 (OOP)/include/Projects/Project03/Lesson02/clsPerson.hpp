    #pragma once

    #include <string>

    // Project03: Bank Project
       // Lesson02: Update Client
           // clsPerson.hpp

    namespace Project03 {

	    namespace Lesson02 {

		    class clsPerson /*Base class for clsBankClient*/ {
               private:
					std::string _FirstName = "";
					std::string _LastName = "";
					std::string _FullName = "";
					unsigned short _Age = 0;
					std::string _Email = "";
					std::string _PhoneNumber = "";
      
          public:

			 // Constructors
                 clsPerson(const std::string& FirstName, const std::string& LastName, unsigned short Age, const std::string& Email, const std::string& PhoneNumber);
      
             // Setters
                 void SetFirstName(const std::string& FirstName);
                 void SetLastName(const std::string& LastName);
                 void SetAge(unsigned short Age);
                 void SetEmail(const std::string& Email);
                 void SetPhoneNumber(const std::string& PhoneNumber);
                 // uhm so the clsBankClient will inherit from this class all of these methods
      
			 // Getters
                 std::string GetFirstName() const;
                 std::string GetLastName() const;
                 std::string GetFullName() const;
                 unsigned short GetAge() const;
                 std::string GetEmail() const; // u are kidding me right
                 std::string GetPhoneNumber() const;
		     
      
      
		     // Other methods
		         void Print();

		    }; // class clsPerson

	    } // namespace Lesson01
    } // namespace Project03

    // clsPerson.hpp
      // Lesson02: Update Client
         // Project03: Bank Project
