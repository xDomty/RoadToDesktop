#include "Lessons/Lesson15.hpp"

// Lesson 15 : CLASS STATIC VARIABLES (START NAMESPACE'S BLOCK)

namespace Lesson15{

    // clsA (Start Source's block)

      // static vars
        int clsA::counter = 0;
       
      // constructor
        clsA::clsA(){
            counter++;
        }
     
      // functions and procedures
        void clsA::Print(){
            cout << "var = " << ExpVar << endl;
            cout << "counter = " << counter << endl << endl;
        }
    
        
    // clsA (Start Source's block)


    void run(){

        clsA A1, A2,A3;
        A1.ExpVar = 10;
        A2.ExpVar = 20;
        A3.ExpVar = 30;

        cout << "A1 Info:\n"; A1.Print();
        cout << "A2 Info:\n"; A2.Print();
        cout << "A3 Info:\n"; A3.Print();

        A1.counter = 500;
        cout << "\nafter chaning the static member counter in A1 object to 500:\n\n";

        cout << "A1 Info:\n"; A1.Print();
        cout << "A2 Info:\n"; A2.Print();
        cout << "A3 Info:\n"; A3.Print();

    }

}


// Lesson 15 : CLASS STATIC VARIABLES (END NAMESPACE'S BLOCK)