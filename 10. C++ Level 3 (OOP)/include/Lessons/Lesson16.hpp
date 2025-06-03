#pragma once
#include <iostream>
using namespace std;

// Lesson 16 : CLASS STATIC METHODS (START NAMESPACE'S BLOCK)

namespace Lesson16{
    
    // clsA (Start Header's block)

        class clsA{
            private:    // nothing here
            protected:  // nothing here
            public:

              // static methods
               static int StaticFunc1();  // defined in source

              // normal methods
               int NormalFunc1();         // defined in source

        };

    // clsA (Start Header's block)


    // run (Start declaring the lesson's 16 excutable block)

       void run(); // defined in source

    // run (Start declaring the lesson's 16 excutable block)
    
}

// Lesson 16 : CLASS STATIC METHODS (END NAMESPACE'S BLOCK)