#pragma once


// Lesson25: Virtual Functions

namespace Lesson25{

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

// Lesson25: Virtual Functions