#pragma once
#include <string>

// Lesson24: Upcasting VS Downcasting

namespace Lesson24 {

    // =============================
    // Base and Derived Classes
    // =============================
    class Base {
    public:
        virtual void speak() const;
        virtual ~Base() = default;
    }; // class Base

    class Derived : public Base {
    public:
        void speak() const override;
        void derivedOnly() const;
    }; // class Derived

    // =============================
    // Upcasting Demo
    // =============================
    namespace Upcasting {

        void demo();

    } // namespace Upcasting

    // =============================
    // Downcasting Demo
    // =============================
    namespace Downcasting {

        void demo();

    } // namespace Downcasting

    // =============================
    // Run All Demos
    // =============================
    void run();

} // namespace Lesson24

// Lesson24: Upcasting VS Downcasting