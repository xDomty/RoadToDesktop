#pragma once

// Lesson29: Friend Classes

namespace Lesson29 {

    class clsY; // Forward declaration

    class clsX { // class --> members --> objects

        friend class clsY; // friend class is accessible to all the classes below

    private:
        int privateVar;
        void privateMethod();

    protected:
        int protectedVar;
        void protectedMethod();

    public:
        int publicVar;
        void publicMethod();

        // Constructor for demonstration
        clsX();

    };

    class clsY {
    public:
        void iHaveThePowerOfClsX();
    };

    void run();

}

// Lesson29: Friend Classes
