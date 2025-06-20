#pragma once
#include <string>

// Lesson26: Static/Early Binding vs Dynamic/Late Binding 

namespace Lesson26{

    // Hierarchical INHERITANCE START

         class clsPerson{
             public:
                virtual void GetInfo();
         };
     
         class clsEmployee : public clsPerson{
             public:
                void GetInfo() override;
         };
     
         class clsStudent : public clsPerson{
             public:
                void GetInfo() override;
         };

    // Hierarchical INHERITANCE END


    void run();

}

// Lesson26: Static/Early Binding vs Dynamic/Late Binding 
