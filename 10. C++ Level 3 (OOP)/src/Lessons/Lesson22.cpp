#include "Lessons/Lesson22.hpp"

namespace Lesson22 {

    // clsBase methods
       clsBase::clsBase() : privateVar(1), protectedVar(2), publicVar(3) {}
       
       void clsBase::privateMethod() {
           std::cout << "clsBase::privateMethod()" << std::endl;
       }
       
       void clsBase::protectedMethod() {
           std::cout << "clsBase::protectedMethod()" << std::endl;
       }
       
       void clsBase::publicMethod() {
           std::cout << "clsBase::publicMethod()" << std::endl;
       }

    // end clsBase
    
    
    // clsBaseDerived methods

    void clsBaseDerived::showAccess() {
        // privateVar;              // ❌ Not accessible
        // privateMethod();         // ❌ Not accessible
        protectedVar = 20;          // ✅ Accessible (remains protected)
        protectedMethod();          // ✅ Accessible (remains protected)
        publicVar = 30;             // ✅ Accessible (becomes protected)
        publicMethod();             // ✅ Accessible (becomes protected)
        std::cout << "clsBaseDerived::showAccess()" << std::endl;
    }

    // end clsBaseDerived


    // clsDerived methods
    
    void clsDerived::showAccess() {
        // privateVar;              // ❌ Not accessible
        // privateMethod();         // ❌ Not accessible
        protectedVar = 200;         // ✅ Accessible (becomes private here)
        protectedMethod();          // ✅ Accessible (becomes private here)
        publicVar = 300;            // ✅ Accessible (becomes private here)
        publicMethod();             // ✅ Accessible (becomes private here)
        std::cout << "clsDerived::showAccess()" << std::endl;
    }

    // end clsDerived

void run() {
    clsBase base;
    base.publicVar = 100;
    base.publicMethod();
    // base.protectedVar = 10;    // ❌ Not accessible
    // base.privateVar = 10;      // ❌ Not accessible

    clsBaseDerived baseDerived;
    // baseDerived.publicVar = 101;     // ❌ Not accessible (became protected)
    // baseDerived.protectedVar = 20;   // ❌ Not accessible
    baseDerived.showAccess();

    clsDerived derived;
    // derived.publicVar = 102;         // ❌ Not accessible (became private)
    // derived.protectedVar = 30;       // ❌ Not accessible
    derived.showAccess();
}

} // namespace Lesson22

// Lesson22: DERIVED CLASSES VISIBILITY MODES