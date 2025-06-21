#pragma once

// Lesson22: DERIVED CLASSES VISIBILITY MODES

namespace Lesson22 {

    
    class clsBase { // Base class with members of all access types
       private:
           int privateVar;
           void privateMethod();
       
       protected:
           int protectedVar;
           void protectedMethod();
       
       public:
           int publicVar;
           void publicMethod();
       
           clsBase();
    }; // class clsBase
    
    class clsBaseDerived : protected clsBase {  // Derived with protected inheritance
        public:
            void showAccess();
    }; // class clsBaseDerived
    
    class clsDerived : private clsBaseDerived { // Derived with private inheritance from clsBaseDerived
        public:
            void showAccess();
    }; // class clsDerived
    
    // Demo function to illustrate visibility
    void run();

} // namespace Lesson22

// Lesson22: DERIVED CLASSES VISIBILITY MODES