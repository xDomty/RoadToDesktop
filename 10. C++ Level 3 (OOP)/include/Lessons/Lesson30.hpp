#pragma once
#include <string>

// Lesson30: Structures Inside Classes

namespace Lesson30{


    class clsPerson{

        public:

          struct stAddress {
              std::string street;
              std::string city;
              std::string country;
          };
  
          struct stName {
              std::string firstName;
              std::string lastName;
          };
  
          struct stCommunication {
              std::string email;
              std::string phone;
          };


        private:
        stAddress       _Address      ;
        stName          _Name         ;
        stCommunication _Communication;

        public:
        clsPerson(const stAddress& addr, const stName& name, const stCommunication& comm);
        
        // Property Set
           void setAddress(const stAddress& addr);
           void setName(const stName& name);
           void setCommunication(const stCommunication& comm);

        // Property Get
           stAddress       GetAddress()       const;
           stName          GetName()          const;
           stCommunication GetCommunication() const;

        // Property Print
           void PrintAddress();
           void PrintName();
           void PrintCommunication();
    };

}

// Lesson30: Structures Inside Classes