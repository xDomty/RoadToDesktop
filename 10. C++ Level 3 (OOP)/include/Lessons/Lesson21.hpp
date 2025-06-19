#pragma once
#include <string>

// Lesson 21 :  Inheritance Visibility Modes (REVIEW)

namespace Lesson21 {

    // Base class demonstrating public, protected, and private members
    class clsBase {
        
        public:
            clsBase(const std::string& name);
        
            // Public method: accessible from anywhere
            void publicMethod() const;
        
            // Public getter for private member
            std::string getPrivateData() const;
        
        protected:
            // Protected member: accessible in this class and derived classes
            std::string protectedData;
        
            // Protected method: accessible in this class and derived classes
            void protectedMethod() const;
        
        private:
            // Private member: accessible only in this class
            std::string privateData;
        
            // Private method: accessible only in this class
            void privateMethod() const;

    }; // class clsBase
    
    // Derived class to show access to protected and public members
    class clsDerived : public clsBase {
    
        public:
           clsDerived(const std::string& name);
           void accessBaseMembers();  // Method to show access to protected and public members
    }; // class clsDerived
    
    // This function acts as the 'main' demonstration entry point
    void run();

} // namespace Lesson21

// Lesson 21 :  Inheritance Visibility Modes (REVIEW)