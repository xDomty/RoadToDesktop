#pragma once
#include <iostream>
using namespace std;

// Lesson 15 : CLASS STATIC VARIABLES (START NAMESPACE'S BLOCK)

namespace Lesson15{
    
    // clsA (Start Header's block)

        class clsA{
            private:    // nothing here
            protected:  // nothing here
            public:

              // vars
               int ExpVar;          // defined per object (in source)

              // static vars
               static int counter; // defined in source (and can be modified in object globally)

              // constructors
               clsA();             // defined in source

              // procedures and functions
               void Print();       // defined in src

        };

    // clsA (Start Header's block)


    // run (Start declaring the lesson's 15 excutable block)

       void run(); // defined in source

    // run (Start declaring the lesson's 15 excutable block)
    
}

// Lesson 15 : CLASS STATIC VARIABLES (END NAMESPACE'S BLOCK)