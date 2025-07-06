#include "Lessons/Lesson30.hpp"
#include <iostream>
#include <stdexcept>

// Lesson30: Structures inside classes

namespace Lesson30 {

    bool clsPerson::_IsDataValid() {
        return _WhichDataIsMissing() == MissingNone;
    }

    void clsPerson::GetInfo() {
        if (!_IsDataValid()) return;

        std::cout << "Name: " << Name.firstName << " " << Name.lastName << "\n";
        std::cout << "Address: " << Address.street << ", " << Address.city << ", " << Address.country << "\n";
        std::cout << "Communication: " << Communication.email << ", " << Communication.phone << "\n";
    }

    void clsPerson::_CheckField(const std::string& fieldValue, const std::string& fieldName, std::vector<std::string>& errors) {
        if (fieldValue.empty()) {
            errors.push_back(fieldName + " is missing");
        }
    }

    std::vector<std::string> clsPerson::_ReturnMissedName() {
        std::vector<std::string> errors;
        _CheckField(Name.firstName, "First Name", errors);
        _CheckField(Name.lastName, "Last Name", errors);
        return errors;
    }

    std::vector<std::string> clsPerson::_ReturnMissedAddress() {
        std::vector<std::string> errors;
        _CheckField(Address.street, "Street", errors);
        _CheckField(Address.city, "City", errors);
        _CheckField(Address.country, "Country", errors);
        return errors;
    }

    std::vector<std::string> clsPerson::_ReturnMissedCommunication() {
        std::vector<std::string> errors;
        _CheckField(Communication.email, "Email", errors);
        _CheckField(Communication.phone, "Phone", errors);
        return errors;
    }

    clsPerson::_enMissingData clsPerson::_WhichDataIsMissing() {
        int result = MissingNone;

        if (!Name.IsValid()) result |= MissingName;
        if (!Address.IsValid()) result |= MissingAddress;
        if (!Communication.IsValid()) result |= MissingCommunication;

        return static_cast<_enMissingData>(result);
    }

    

    void clsPerson::_PrintInvalidData() {
        if (_IsDataValid()) return;

        std::cout << "INVALID DATA OF THE OBJECT (" << _ObjName << ") REPORT : \n\n";
        if (!Name.IsValid()) {
            std::cout << "Name Errors:\n";
            for (const auto& err : _ReturnMissedName()) {
                std::cout << "- " << err << "\n";
            }
            std::cout << std::endl;
        }

        if (!Address.IsValid()) {
            std::cout << "Address Errors:\n";
            for (const auto& err : _ReturnMissedAddress()) {
                std::cout << "- " << err << "\n";
            }
            std::cout << std::endl;
        }

        if (!Communication.IsValid()) {
            std::cout << "Communication Errors:\n";
            for (const auto& err : _ReturnMissedCommunication()) {
                std::cout << "- " << err << "\n";
            }
            std::cout << std::endl;
        }
    }

    clsPerson::clsPerson(std::string ObjName){
        _ObjName = ObjName;
    }
    
    clsPerson::~clsPerson(){
        if (!clsPerson::_IsDataValid()){
            std::cerr << "Warning: Object (" << _ObjName << ") was destroyed with invalid data.\n\n";
            _PrintInvalidData();
        }
    }

    void run() {
        clsPerson person1("person1");

        
        person1.Address.city = "hi";

        
    }

} // namespace Lesson30

// Lesson30: Structures inside classes
