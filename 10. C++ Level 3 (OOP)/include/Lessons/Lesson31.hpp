#pragma once
#include <string>


// Lesson31: Structures Inside Clasees

namespace Lesson31 {

    class clsPerson {

       public:
       
           struct stName {
       
               private:
                   std::string _first, _last;
                   friend class clsPerson;
       
               public:
                   stName(const std::string& first, const std::string& last);
       
           };
       
           struct stAddress {
       
               private:
                   std::string _street, _city, _country;
                   friend class clsPerson;
       
               public:
                   stAddress(const std::string& street, const std::string& city, const std::string& country);
       
           };
       
           struct stCommunication {
       
               private:
                   std::string _email, _phone;
                   friend class clsPerson;
       
               public:
                   stCommunication(const std::string& email, const std::string& phone);
       
           };
       
           clsPerson(const stName& name, const stAddress& address, const stCommunication& comm);
           
           // Setters
              void SetName(std::string first, std::string last);
              void SetAddress(std::string street, std::string city, std::string country);
              void SetCommunication(std::string email, std::string phone);
              

           // Getters
              std::string GetFullName() const;
              std::string GetAddress() const;
              std::string GetCommunication() const;
              void GetInfo() const;
       
       private:
           stName _StObjName;
           stAddress _StObjAddress;
           stCommunication _StObjComm;
       
    };

    void run();

}

// Lesson31: Structures Inside Clasees
