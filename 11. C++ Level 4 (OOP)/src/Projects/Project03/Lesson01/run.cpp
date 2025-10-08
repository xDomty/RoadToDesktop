#include "Projects/Project03/Lesson01/run.hpp"
#include "Projects/Project03/Lesson01/clsBankClient.hpp" // clsBankClient.hpp
#include "Projects/Project01/clsUtil.hpp"
#include "Global/clsDate.hpp"

// Project03: Bank Project
    // Lesson01: Find Person
       // run.cpp

using namespace Project01;

namespace Project03 {

    namespace Lesson01 {
        void run() {
            Global::clsDate CurrentDate; // Print the calendar for the year 2023
            CurrentDate.PrintDate();
            
            std::cout << "WELCOME TO BANK PROGRAM :D\n";

            clsBankClient Client1("Adam", "Ahmed", 16, "xdomty@gmail.com", "+97152XXXXXXX", "AS", "1234", 4000);
            Client1.Save();

             
            
        }
        
    }

}

// run.cpp
   // Lesson01: Find Person
      // Project03: Bank Project