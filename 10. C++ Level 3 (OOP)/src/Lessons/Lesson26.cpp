#include "Lessons/Lesson26.hpp"
#include <iostream>

// Lesson26: Static/Early Binding vs Dynamic/Late Binding 

namespace Lesson26{

    // clsPerson
       void clsPerson::GetInfo(){
          std::cout << "Hi, I'm the person";
       }
    // clsPerson

    // clsEmployee
       void clsEmployee::GetInfo(){
          std::cout << "Hi, I'm the employee\n";
       }
    // clsEmployee

    // clsStudent
       void clsStudent::GetInfo(){
         std::cout << "Hi, I'm the Student\n";
       }
    // clsStudent

     
    void run(){
        clsEmployee Employee1;
        clsStudent  Student1;

        clsPerson Person0;
        std::cout << "Static / Early Bining DEMO:\n";
        Person0.GetInfo(); std::cout << std::endl;
       

        clsPerson *Person1 = new clsPerson;
        clsPerson *Person2 = new clsPerson;

        

        Person1 = &Employee1;
        Person2 = &Student1;
        

        std::cout << "Dynamic/Late Binding DEMO:\n";

        Person1->GetInfo();
        Person2->GetInfo();
    }
}

// Lesson26: Static/Early Binding vs Dynamic/Late Binding 