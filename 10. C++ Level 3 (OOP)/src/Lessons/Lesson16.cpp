#include "Lessons/Lesson16.hpp"

// Lesson 16 : CLASS STATIC METHODS (START NAMESPACE'S BLOCK)

namespace Lesson16{

    // clsA (Start Source's block)

      
      // Static Methods
         int clsA::StaticFunc1(){
             return 10;
         };

      // Normal Methods
         int clsA::NormalFunc1(){
            return 20;
         }
        
    // clsA (End Source's block)



    void run(){

        clsA A1, A2,A3;

        //The following line calls static function directly via class not through the object
        //At class level you can call only static methods and static members
        
        cout << clsA::StaticFunc1() <<endl;

        //static methods can also be called throught the object.

        cout << A1.StaticFunc1() << endl;
        cout << A1.NormalFunc1() << endl;
        cout << A2.StaticFunc1() << endl;

    }

}


// Lesson 16 : CLASS STATIC METHODS (END NAMESPACE'S BLOCK)