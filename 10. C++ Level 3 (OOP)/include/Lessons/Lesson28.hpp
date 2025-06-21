#pragma once
#include <string>

// Lesson28: Interfaces --> Pure Virtual Functions and Abstract Classes 

namespace Lesson28{
    
    // Hierarchical INHERITANCE START

        class clsMobile{ // BASE
            virtual void Dial(std::string PhoneNumber);
            virtual void SendSMS(std::string PhoneNumber , std::string Message);
            virtual void TakePicture();
        }; // WTF I FORGOT IT'S VIRTUALLLLLLLLLLLLLLLLLLLLLLL
    
        class clsIphone : clsMobile { // YOU MUST FILL THE VIRTUAL FUNCTIONS FROM THE BASE CLASS
            public:
              void Dial(std::string PhoneNumber) override;
              void SendSMS(std::string PhoneNumber , std::string Message) override;
              void TakePicture() override;
        };
       
        class clsSamsung : clsMobile {
            public:
                void Dial(std::string PhoneNumber) override;
                void SendSMS(std::string PhoneNumber , std::string Message) override;
                void TakePicture() override;
        };
    
    // Hierarchical INHERITANCE START

    void run();


    

}

// Lesson28: Interfaces --> Pure Virtual Functions and Abstract Classes 