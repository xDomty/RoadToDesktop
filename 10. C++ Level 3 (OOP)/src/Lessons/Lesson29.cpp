#include "Lessons/Lesson29.hpp"
#include <iostream>

namespace Lesson29 {

    // Implementation of clsX methods
    clsX::clsX() {
        privateVar = 1;
        protectedVar = 2;
        publicVar = 3;
    }

    void clsX::privateMethod() {
        std::cout << "clsX::privateMethod() called. privateVar = " << privateVar << std::endl;
    }

    void clsX::protectedMethod() {
        std::cout << "clsX::protectedMethod() called. protectedVar = " << protectedVar << std::endl;
    }

    void clsX::publicMethod() {
        std::cout << "clsX::publicMethod() called. publicVar = " << publicVar << std::endl;
    }

    // Implementation of clsY
    void clsY::iHaveThePowerOfClsX() {
        // Because clsY is a friend of clsX, it can access all members of clsX.
        clsX obj;

        // Accessing private member
        std::cout << "Accessing privateVar: " << obj.privateVar << std::endl;
        obj.privateMethod();

        // Accessing protected member
        std::cout << "Accessing protectedVar: " << obj.protectedVar << std::endl;
        obj.protectedMethod();

        // Accessing public member
        std::cout << "Accessing publicVar: " << obj.publicVar << std::endl;
        obj.publicMethod();

        // Accessing inherited protected and public members
        std::cout << "Inherited protectedVar: " << protectedVar << std::endl;
        protectedMethod();
        std::cout << "Inherited publicVar: " << publicVar << std::endl;
        publicMethod();
    }

}