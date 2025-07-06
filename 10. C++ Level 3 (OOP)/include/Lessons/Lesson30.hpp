#pragma once
#include <string>
#include <vector>

// Lesson30: Structures Inside Classes

namespace Lesson30{

    // Protected Structures
        

    class clsPerson {

        private:
            struct _stAddress{
                  std::string street;
                  std::string city;
                  std::string country;

                  private: 
                  friend class clsPerson;

                  bool IsValid() const {
                      return (!street.empty() && !city.empty() && !country.empty());
                  }
            };
        
            struct _stName{
                  std::string firstName;
                  std::string lastName;

                  private:
                  friend class clsPerson;

                  bool IsValid() const {
                     return (!firstName.empty() && !lastName.empty());
                  }
            };
        
            struct _stCommunication {
                  std::string email;
                  std::string phone;

                  private:
                  friend class clsPerson;

                  bool IsValid() const {
                      return (!email.empty() && !phone.empty());
                  }

            };

           std::string _ObjName;

        public:
        _stAddress Address; _stName Name; _stCommunication Communication;

        void GetInfo();

        private:

         enum _enMissingData {
             MissingNone          = 0,
             MissingName          = 1 << 0, 
             MissingAddress       = 1 << 1,
             MissingCommunication = 1 << 2
         };
         
         void _CheckField(const std::string& fieldValue, const std::string& fieldName, std::vector<std::string>& errors);

         std::vector<std::string> _ReturnMissedName();

         std::vector<std::string> _ReturnMissedAddress();

         std::vector<std::string> _ReturnMissedCommunication();

         _enMissingData _WhichDataIsMissing();

         bool _IsDataValid();

         void _PrintInvalidData();

        public:
        clsPerson(std::string ObjName);
        ~clsPerson();

    };

    void run();

}

// Lesson30: Structures Inside Classes