#include "Lessons/Lesson25.hpp"
#include <iostream>

// Lesson25: Virtual Functions

namespace Lesson25{

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

        clsPerson *Person1 = new clsPerson;
        clsPerson *Person2 = new clsPerson;

        Person1 = &Employee1;
        Person2 = &Student1;
        
        Person1->GetInfo();
        Person2->GetInfo();
    }
}

// Lesson25: Virtual Functions