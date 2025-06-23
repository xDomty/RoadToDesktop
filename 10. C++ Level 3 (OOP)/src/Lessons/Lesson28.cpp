#include "Lessons/Lesson28.hpp"
#include <iostream>

// Lesson28: Interfaces --> Pure Virtual Functions and Abstract Classes 

namespace Lesson28{
    
   // clsMobile Start

        void clsMobile::Dial(std::string PhoneNumber){
            std::cout << "clsMobile : The Phone " << PhoneNumber << " has ringed !";
        }
     
        void clsMobile::SendSMS(std::string PhoneNumber , std::string Message){
            std::cout << "clsMobile : Sending Message: " << Message << "\nTo " << PhoneNumber << std::endl;
            std::cout << "The Message Has Sended :>";
        }
  
        void clsMobile::TakePicture(){
           std::cout << "clsMobile : The Pic Is Taken :)";
        }

    // clsMobile End

    
    // clsIphone Start

        void clsIphone::Dial(std::string PhoneNumber){
            std::cout << "clsIphone : The Phone " << PhoneNumber << " has ringed !";
        }
     
        void clsIphone::SendSMS(std::string PhoneNumber , std::string Message){
            std::cout << "clsIphone : Sending Message: " << Message << "\nTo " << PhoneNumber << std::endl;
            std::cout << "The Message Has Sended :>";
        }
  
        void clsIphone::TakePicture(){
           std::cout << "clsIphone : The Pic Is Taken :)";
        }

    // clsIphone End

    
    // clsSamsung Start

        void clsSamsung::Dial(std::string PhoneNumber){
            std::cout << "clsSamsung : The Phone " << PhoneNumber << " has ringed !";
        }
     
        void clsSamsung::SendSMS(std::string PhoneNumber , std::string Message){
            std::cout << "clsSamsung : Sending Message: " << Message << "\nTo " << PhoneNumber << std::endl;
            std::cout << "The Message Has Sended :>";
        }
  
        void clsSamsung::TakePicture(){
           std::cout << "clsSamsung : The Pic Is Taken :)";
        }

    // clsSamsung End
    

    void run(){

        std::cout << "Lesson28 DEMO: interface with pure functions\n";

        std::cout << "- clsMobile can't be an object because it's a interface\n\n";

        std::cout << "- clsIphone:\n";

        clsIphone IphoneX;
        IphoneX.Dial("+971525239436");                                 std::cout << std::endl;
        IphoneX.SendSMS("+971525239436", "Hi , I'm ADAM :>");  std::cout << std::endl;
        IphoneX.TakePicture();                                                      std::cout << std::endl << std::endl ;

        std::cout << "- clsSamsung:\n";

        clsSamsung GalaxyS10;
        GalaxyS10.Dial("+971525239436");                                 std::cout << std::endl;
        GalaxyS10.SendSMS("+971525239436", "Hi , I'm ADAM :>");  std::cout << std::endl;
        GalaxyS10.TakePicture();                                                      std::cout << std::endl << std::endl;

    }

}

// Lesson28: Interfaces --> Pure Virtual Functions and Abstract Classes 
