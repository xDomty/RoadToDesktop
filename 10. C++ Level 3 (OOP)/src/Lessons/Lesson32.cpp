#include "Lessons/Lesson31.hpp"
#include <iostream>

// Lesson31: Classes Inside clsPerson

namespace Lesson31 {

    // class clsPerson definition start 

    // clsName constructor
    clsPerson::clsName::clsName(const std::string& first, const std::string& last)
        : _first(first), _last(last) {
    }

    // clsAddress constructor
    clsPerson::clsAddress::clsAddress(const std::string& street, const std::string& city, const std::string& country)
        : _street(street), _city(city), _country(country) {
    }

    // clsCommunication constructor
    clsPerson::clsCommunication::clsCommunication(const std::string& email, const std::string& phone)
        : _email(email), _phone(phone) {
    }

    // clsPerson constructor
    clsPerson::clsPerson(const clsName& name, const clsAddress& address, const clsCommunication& comm)
        : _ClsObjName(name), _ClsObjAddress(address), _ClsObjComm(comm) {
    }

    // Setters
    void clsPerson::SetName(std::string first, std::string last) {
        if (!first.empty()) _ClsObjName._first = first;
        if (!last.empty())  _ClsObjName._last = last;
    }

    void clsPerson::SetAddress(std::string street, std::string city, std::string country) {
        if (!street.empty())  _ClsObjAddress._street = street;
        if (!city.empty())    _ClsObjAddress._city = city;
        if (!country.empty()) _ClsObjAddress._country = country;
    }

    void clsPerson::SetCommunication(std::string email, std::string phone) {
        if (!email.empty())   _ClsObjComm._email = email;
        if (!phone.empty())   _ClsObjComm._phone = phone;
    }

    // Getters

    std::string clsPerson::GetFullName() const {
        return _ClsObjName._first + " " + _ClsObjName._last;
    }

    std::string clsPerson::GetAddress() const {
        return (_ClsObjAddress._city + ", " + _ClsObjAddress._country + ", " + _ClsObjAddress._street);
    }

    std::string clsPerson::GetCommunication() const {
        return (_ClsObjComm._email + ", " + _ClsObjComm._phone);
    }

    void clsPerson::GetInfo() const {
        std::cout << "Full Name: " << clsPerson::GetFullName() << "\n"
            << "Address: " << clsPerson::GetAddress() << "\n"
            << "Communication: " << clsPerson::GetCommunication() << "\n";
    }

    // class clsPerson definition end

    void run() {

        clsPerson Person(
            clsPerson::clsName("Adam", "Ahmed"),
            clsPerson::clsAddress("Street 10", "Cairo", "Egypt"),
            clsPerson::clsCommunication("xdomty@gmail.com", "+971525239436")
        );

        Person.GetInfo();

    }

}

// Lesson31: Classes Inside clsPerson