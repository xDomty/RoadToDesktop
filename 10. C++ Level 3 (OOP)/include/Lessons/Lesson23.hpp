#pragma once

// Lesson23: Classes Inheritance Types

namespace Lesson23 {

    // =============================
    // 1. Single Inheritance
    // =============================
    namespace SingleInheritance {

        class clsSingleBase {
        public:
            void baseMethod() const;
        }; // class clsSingleBase

        class clsSingleDerived : public clsSingleBase {
        public:
            void derivedMethod() const;
        }; // class clsSingleDerived

        void demo();

    } // namespace SingleInheritance


    // =============================
    // 2. Multi-level Inheritance
    // =============================
    namespace MultiLevelInheritance {

        class clsMultiLevelBase {
        public:
            void baseMethod() const;
        }; // class clsMultiLevelBase

        class clsMultiLevelMid : public clsMultiLevelBase {
        public:
            void midMethod() const;
        }; // class clsMultiLevelMid

        class clsMultiLevelDerived : public clsMultiLevelMid {
        public:
            void derivedMethod() const;
        }; // class clsMultiLevelDerived

        void demo();

    } // namespace MultiLevelInheritance


    // =============================
    // 3. Multiple Inheritance
    // =============================
    namespace MultipleInheritance {

        class clsMultipleBase1 {
        public:
            void base1Method() const;
        }; // class clsMultipleBase1

        class clsMultipleBase2 {
        public:
            void base2Method() const;
        }; // class clsMultipleBase2

        class clsMultipleDerived : public clsMultipleBase1, public clsMultipleBase2 {
        public:
            void derivedMethod() const;
        }; // class clsMultipleDerived

        void demo();

    } // namespace MultipleInheritance


    // =============================
    // 4. Hierarchical Inheritance
    // =============================
    namespace HierarchicalInheritance {

        class clsHierarchicalBase {
        public:
            void baseMethod() const;
        }; // class clsHierarchicalBase

        class clsHierarchicalDerived1 : public clsHierarchicalBase {
        public:
            void derived1Method() const;
        }; // class clsHierarchicalDerived1

        class clsHierarchicalDerived2 : public clsHierarchicalBase {
        public:
            void derived2Method() const;
        }; // class clsHierarchicalDerived2

        void demo();

    } // namespace HierarchicalInheritance


    // =============================
    // 5. Hybrid Inheritance (Multiple + Multi-level)
    // =============================
    namespace HybridInheritance {

        class clsHybridBase1 {
        public:
            void base1Method() const;
        }; // class clsHybridBase1

        class clsHybridBase2 {
        public:
            void base2Method() const;
        }; // class clsHybridBase2

        class clsHybridMid : public clsHybridBase2 {
        public:
            void midMethod() const;
        }; // class clsHybridMid

        class clsHybridDerived : public clsHybridBase1, public clsHybridMid {
        public:
            void hybridMethod() const;
        }; // class clsHybridDerived

        void demo();

    } // namespace HybridInheritance


    // =============================
    // Run All Demos
    // =============================
    void run();

} // namespace Lesson23

// Lesson23: Classes Inheritance Types