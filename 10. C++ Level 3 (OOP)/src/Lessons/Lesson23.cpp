#include "Lessons/Lesson23.hpp"
#include <iostream>

// Lesson23: Classes Inheritance Types

namespace Lesson23 {

    // =============================
    // 1. Single Inheritance
    // =============================
    namespace SingleInheritance {

        void clsSingleBase::baseMethod() const {
            std::cout << "clsSingleBase::baseMethod()" << std::endl;
        }

        void clsSingleDerived::derivedMethod() const {
            std::cout << "clsSingleDerived::derivedMethod()" << std::endl;
        }

        void demo() {
            std::cout << "[Single Inheritance]" << std::endl;
            clsSingleDerived obj;
            obj.baseMethod();
            obj.derivedMethod();
            std::cout << std::endl;
        }

    } // namespace SingleInheritance


    // =============================
    // 2. Multi-level Inheritance
    // =============================
    namespace MultiLevelInheritance {

        void clsMultiLevelBase::baseMethod() const {
            std::cout << "clsMultiLevelBase::baseMethod()" << std::endl;
        }

        void clsMultiLevelMid::midMethod() const {
            std::cout << "clsMultiLevelMid::midMethod()" << std::endl;
        }

        void clsMultiLevelDerived::derivedMethod() const {
            std::cout << "clsMultiLevelDerived::derivedMethod()" << std::endl;
        }

        void demo() {
            std::cout << "[Multi-level Inheritance]" << std::endl;
            clsMultiLevelDerived obj;
            obj.baseMethod();
            obj.midMethod();
            obj.derivedMethod();
            std::cout << std::endl;
        }

    } // namespace MultiLevelInheritance


    // =============================
    // 3. Multiple Inheritance
    // =============================
    namespace MultipleInheritance {

        void clsMultipleBase1::base1Method() const {
            std::cout << "clsMultipleBase1::base1Method()" << std::endl;
        }

        void clsMultipleBase2::base2Method() const {
            std::cout << "clsMultipleBase2::base2Method()" << std::endl;
        }

        void clsMultipleDerived::derivedMethod() const {
            std::cout << "clsMultipleDerived::derivedMethod()" << std::endl;
        }

        void demo() {
            std::cout << "[Multiple Inheritance]" << std::endl;
            clsMultipleDerived obj;
            obj.base1Method();
            obj.base2Method();
            obj.derivedMethod();
            std::cout << std::endl;
        }

    } // namespace MultipleInheritance


    // =============================
    // 4. Hierarchical Inheritance
    // =============================
    namespace HierarchicalInheritance {

        void clsHierarchicalBase::baseMethod() const {
            std::cout << "clsHierarchicalBase::baseMethod()" << std::endl;
        }

        void clsHierarchicalDerived1::derived1Method() const {
            std::cout << "clsHierarchicalDerived1::derived1Method()" << std::endl;
        }

        void clsHierarchicalDerived2::derived2Method() const {
            std::cout << "clsHierarchicalDerived2::derived2Method()" << std::endl;
        }

        void demo() {
            std::cout << "[Hierarchical Inheritance]" << std::endl;
            clsHierarchicalDerived1 d1;
            clsHierarchicalDerived2 d2;
            d1.baseMethod();
            d1.derived1Method();
            d2.baseMethod();
            d2.derived2Method();
            std::cout << std::endl;
        }

    } // namespace HierarchicalInheritance


    // =============================
    // 5. Hybrid Inheritance (Multiple + Multi-level)
    // =============================
    namespace HybridInheritance {

        void clsHybridBase1::base1Method() const {
            std::cout << "clsHybridBase1::base1Method()" << std::endl;
        }

        void clsHybridBase2::base2Method() const {
            std::cout << "clsHybridBase2::base2Method()" << std::endl;
        }

        void clsHybridMid::midMethod() const {
            std::cout << "clsHybridMid::midMethod()" << std::endl;
        }

        void clsHybridDerived::hybridMethod() const {
            std::cout << "clsHybridDerived::hybridMethod()" << std::endl;
        }

        void demo() {
            std::cout << "[Hybrid Inheritance]" << std::endl;
            clsHybridDerived obj;
            obj.base1Method();     // From clsHybridBase1
            obj.base2Method();     // From clsHybridBase2 via clsHybridMid
            obj.midMethod();       // From clsHybridMid
            obj.hybridMethod();    // Own method
            std::cout << std::endl;
        }

    } // namespace HybridInheritance


    // =============================
    // Run All Demos
    // =============================
    void run() {
        std::cout << "=== Lesson23: Inheritance Types Demo ===\n" << std::endl;
        SingleInheritance::demo();
        MultiLevelInheritance::demo();
        MultipleInheritance::demo();
        HierarchicalInheritance::demo();
        HybridInheritance::demo();
        std::cout << "=== End of Lesson23 ===" << std::endl;
    }

} // namespace Lesson23

// Lesson23: Classes Inheritance Types