#include "Lessons/Lesson24.hpp"
#include <iostream>

namespace Lesson24 {

    // =============================
    // Base and Derived Classes
    // =============================
    void Base::speak() const {
        std::cout << "Base speaking." << std::endl;
    }

    void Derived::speak() const {
        std::cout << "Derived speaking!" << std::endl;
    }

    void Derived::derivedOnly() const {
        std::cout << "Derived-only method called." << std::endl;
    }

    // =============================
    // Upcasting Demo
    // =============================
    namespace Upcasting {

        void demo() {
            std::cout << "[Upcasting Demo]" << std::endl;

            Derived derivedObj;
            Base* basePtr = &derivedObj; // Upcasting: Derived* -> Base*
            basePtr->speak();            // Calls Derived::speak() due to virtual function

            std::cout << "Upcasting allows treating a Derived object as a Base pointer/reference." << std::endl;
            std::cout << std::endl;
        }

    } // namespace Upcasting

    // =============================
    // Downcasting Demo
    // =============================
    namespace Downcasting {

        void demo() {
            std::cout << "[Downcasting Demo]" << std::endl;

            Derived derivedObj;
            Base* basePtr = &derivedObj; // Upcasting

            // Downcasting: Base* -> Derived*
            Derived* derivedPtr = dynamic_cast<Derived*>(basePtr);
            if (derivedPtr) {
                derivedPtr->speak();        // Calls Derived::speak()
                derivedPtr->derivedOnly();  // Safe access to derived-only members
                std::cout << "Downcasting successful!" << std::endl;
            } else {
                std::cout << "Downcasting failed!" << std::endl;
            }

            // Unsafe downcasting example
            Base baseObj;
            Base* basePtr2 = &baseObj;
            Derived* wrongCast = dynamic_cast<Derived*>(basePtr2);
            if (!wrongCast)
                std::cout << "Downcasting failed as expected when casting Base* to Derived*." << std::endl;

            std::cout << "Downcasting is needed to access derived-specific members from a base pointer, but should be used with care!" << std::endl;
            std::cout << std::endl;
        }
   
    } // namespace Downcasting

    // =============================
    // Run All Demos
    // =============================
    void run() {
        std::cout << "=== Lesson24: Upcasting and Downcasting Demo ===\n" << std::endl;
        Upcasting::demo();
        Downcasting::demo();
        std::cout << "=== End of Lesson24 ===" << std::endl;
    }

} // namespace Lesson24

// Lesson24: Upcasting and Downcasting