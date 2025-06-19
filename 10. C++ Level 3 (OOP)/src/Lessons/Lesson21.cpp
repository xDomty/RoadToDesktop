#include "Lessons/Lesson21.hpp"
#include <iostream>

// Lesson 21 :  Inheritance Visibility Modes (REVIEW)

namespace Lesson21 {

    // clsBase class method implementations
    
        clsBase::clsBase(const std::string& name)
            : privateData("Private: " + name), protectedData("Protected: " + name)
        {}
        
        void clsBase::publicMethod() const {
            std::cout << "Public method called. " << std::endl;
            // Can access private and protected members inside the class
            std::cout << privateData << std::endl;
            std::cout << protectedData << std::endl;
        }
        
        std::string clsBase::getPrivateData() const {
            return privateData;
        }
        
        void clsBase::protectedMethod() const {
            std::cout << "Protected method called. " << std::endl;
        }
        
        void clsBase::privateMethod() const {
            std::cout << "Private method called. " << std::endl;
        }
    
    // end clsBase

    // clsDerived class method implementations

        clsDerived::clsDerived(const std::string& name) : clsBase(name) {}
        
        void clsDerived::accessBaseMembers() {
            std::cout << "Accessing base members from clsDerived class:" << std::endl;
        
            // Can access public method
            publicMethod();
        
            // Can access protected member
            std::cout << protectedData << std::endl;
        
            // Can call protected method
            protectedMethod();
        
            // Cannot access privateData or privateMethod() here; would cause a compile error
            // std::cout << privateData << std::endl; // ERROR
            // privateMethod(); // ERROR
        }

    // end clsDerived

void run() {
    clsBase baseObj("BaseObject");
    clsDerived derivedObj("DerivedObject");

    std::cout << "=== Using clsBase object ===" << std::endl;
    baseObj.publicMethod();
    std::cout << "Getting private data via public getter: " << baseObj.getPrivateData() << std::endl;

    // Can't access protected or private members directly:
    // std::cout << baseObj.protectedData << std::endl; // ERROR
    // std::cout << baseObj.privateData << std::endl;   // ERROR

    std::cout << "\n=== Using clsDerived object ===" << std::endl;
    derivedObj.accessBaseMembers();
}

} // namespace Lesson21

// Lesson 21 :  Inheritance Visibility Modes (REVIEW)