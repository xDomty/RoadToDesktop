#pragma once

// Lesson24: Upcasting VS Downcasting

namespace Lesson24 {

    // =============================
    // clsBase and clsDerived Classes
    // =============================
    class clsBase {
    public:
        virtual void speak() const;
        virtual ~clsBase() = default;
    }; // class clsBase

    class clsDerived : public clsBase {
    public:
        void speak() const override;
    }; // class clsDerived

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