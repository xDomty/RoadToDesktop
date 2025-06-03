#pragma once
#include <iostream>
using namespace std;

// Lesson 17 : Inheritance (Start Namespace's block)

namespace Lesson17{

    // clsPerson (Start Block)

        class clsPerson{

            private: 
               int    _ID;
               string _FirstName;
               string _LastName;
               string _Email;
               string _PhoneNumber;

            public:

            // constructor
                clsPerson(); // Default constructor
                clsPerson(int ID,string FirstName, string LastName,string Email, string PhoneNumber);

            // Normal Methods

              // Propery Set (Write Only)
                 void SetFirstName(string FirstName);     // Defined in source

                 void SetLastName(string LastName);       // Defined in source

                 void SetEmail(string Email);             // Defined in source

                 void SetPhoneNumber(string PhoneNumber); // Defined in source

              //  Property Get (Read Only)
                 int GetID() const;                // Defined in source

                 string GetFirstName() const;      // Defined in source

                 string GetLastName() const;       // Defined in source

                 string GetFullName() const;       // Defined in source

                 string GetEmail() const;          // Defined in source

                 string GetPhoneNumber() const;    // Defined in source

                 void GetPersonInfo();             // Defined in source

              // Property Send
                 void SendEmail(string Subject, string Body);  // Defined in source
 
                 void SendSMS(string Message);                 // Defined in source


        };
    
    // clsPerson (End Block)


    // clsEmployee --> INHERITS FROM clsPerson (Start Block)

        class clsEmployee : public clsPerson{

            private:
                string _Title;      
                string _Department; 
                float _Salary;      

            public:

              // Property Set (Write Only)
                void SetFirstName(string FirstName); // Defined in source

                void SetLastName(string LastName);   // Defined in source

                void SetEmail(string Email);         // Defined in source

              // Property Get (Read Only)
                string GetTitle()      const;        // Defined in source             

                string GetDepartment() const;        // Defined in source       

                float GetSalary()      const;        // Defined in source    

                void GetEmployeeInfo()      ;        // Defined in source

        };

    // clsEmployee --> INHERITS FROM clsPerson (End Block)


    
    // run (Start declaring the lesson's excutable block)

        void run(); // defined in source

    // run (End declaring the lesson's excutable block)
}

// Lesson 17 : Inheritance (End Namespace's block)