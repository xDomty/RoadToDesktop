#include "Lessons/Lesson24.hpp"
#include <iostream>

namespace Lesson24 {

    // =============================
    // clsBase and clsDerived Classes
    // =============================
    void clsBase::speak() const {
        std::cout << "clsBase speaking." << std::endl;
    }

    void clsDerived::speak() const {
        std::cout << "clsDerived speaking!" << std::endl;
    }

    // =============================
    // Upcasting Demo
    // =============================
    namespace Upcasting {

        void demo() {
            std::cout << "[Upcasting Demo]" << std::endl;

            clsDerived derivedObj;
            clsBase* basePtr = &derivedObj; // Upcasting: clsDerived* -> clsBase*
            basePtr->speak();            // Calls clsDerived::speak() due to virtual function

            std::cout << "Upcasting allows treating a clsDerived object as a clsBase pointer/reference." << std::endl;
            std::cout << std::endl;
        }

    } // namespace Upcasting

    // =============================
    // Downcasting Demo
    // =============================
    namespace Downcasting {

        void demo() {
            std::cout << "[Downcasting Demo]" << std::endl;
            std::cout << "U Can't DownCasting because it gives us errors\n";
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