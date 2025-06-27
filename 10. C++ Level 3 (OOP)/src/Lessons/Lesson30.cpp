#include "Lessons/Lesson30.hpp"
#include <iostream>

// Lesson30: Structures inside classes

namespace Lesson30{
    

    // clsPerson

       clsPerson::clsPerson(const stAddress& addr, const stName& name, const stCommunication& comm)
           : _Address(addr), _Name(name), _Communication(comm) {}
       
       // Property Set
       void clsPerson::setAddress(const stAddress& addr) { _Address = addr; }
       void clsPerson::setName(const stName& name) { _Name = name; }
       void clsPerson::setCommunication(const stCommunication& comm) { _Communication = comm; }
       
       // Property Get
       clsPerson::stAddress clsPerson::GetAddress() const { return _Address; }
       clsPerson::stName clsPerson::GetName() const { return _Name; }
       clsPerson::stCommunication clsPerson::GetCommunication() const { return _Communication; }

       // Property Print
       void clsPerson::PrintAddress(){
           std::cout << "City    : " << _Address.city    << std::endl;
           std::cout << "Street  : " << _Address.street  << std::endl;
           std::cout << "Country : " << _Address.country << std::endl;
       }
       void clsPerson::PrintName(){
           std::cout << "First Name : " << _Name.firstName << std::endl;
           std::cout << "Last Name  : " << _Name.lastName  << std::endl;
       }
       void clsPerson::PrintCommunication(){
           std::cout << "Email        : " << _Communication.email << std::endl;
           std::cout << "Phone Number : " << _Communication.phone << std::endl;
       }

    // clsPerson
       
   
    // run 

    void run(){
        
    }

    // run

}

// Lesson30: Structures inside classes
