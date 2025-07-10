#include "Lessons/Lesson31.hpp"
#include <iostream>

// Lesson31: Structures Inside Clasees

namespace Lesson31 {

    // class clsPerson definition start 
     
        // stName constructor
           clsPerson::stName::stName(const std::string& first, const std::string& last)
               : _first(first), _last(last) {}
        
        // stAddress constructor
           clsPerson::stAddress::stAddress(const std::string& street, const std::string& city, const std::string& country)
               : _street(street), _city(city), _country(country) {}
        
        // stCommunication constructor
           clsPerson::stCommunication::stCommunication(const std::string& email, const std::string& phone)
               : _email(email), _phone(phone) {}
        
        // clsPerson constructor
           clsPerson::clsPerson(const stName& name, const stAddress& address, const stCommunication& comm)
               : _StObjName(name), _StObjAddress(address), _StObjComm(comm) {}

        // Setters
           void clsPerson::SetName(std::string first, std::string last) {
               if (!first.empty()) _StObjName._first = first;
               if (!last.empty())  _StObjName._last = last;
           }
           
           void clsPerson::SetAddress(std::string street, std::string city, std::string country) {
               if (!street.empty())  _StObjAddress._street  =  street;
               if (!city.empty())    _StObjAddress._city    =    city;
               if (!country.empty()) _StObjAddress._country = country;
           }

           void clsPerson::SetCommunication(std::string email, std::string phone) {
               if (!email.empty())   _StObjComm._email = email;
               if (!phone.empty())   _StObjComm._phone = phone;
           }

        // Getters
        
           std::string clsPerson::GetFullName() const {
               return _StObjName._first + " " + _StObjName._last;
           }

           std::string clsPerson::GetAddress() const {
               return (_StObjAddress._city + ", " + _StObjAddress._country + ", " + _StObjAddress._street);
           }
           
           std::string clsPerson::GetCommunication() const {
               return (_StObjComm._email + ", " + _StObjComm._phone);
           }

           void clsPerson::GetInfo() const {
               std::cout << "Full Name: " << clsPerson::GetFullName() << "\n"
                   << "Address: " << clsPerson::GetAddress() << "\n"
                   << "Communication: " << clsPerson::GetCommunication() << "\n";
           }

    // class clsPerson definition end
        
    void run() {

        clsPerson Person(
            clsPerson::stName("Adam", "Ahmed"),
            clsPerson::stAddress("Street 10", "Cairo", "Egypt"),
            clsPerson::stCommunication("xdomty@gmail.com", "+971525239436")
        );

        Person.GetInfo();

    }

}

// Lesson31: Structures Inside Clasees
