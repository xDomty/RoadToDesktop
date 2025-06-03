#include <iostream>
using namespace std;

// Homework2: clsEmployee Exercise (Start Namespace Block)

namespace Homework2{

    // clsEmployee (Start Block)

        class clsEmployee{

            private: 
               int    _ID;
               string _FirstName;
               string _LastName;
               string _Email;
               string _PhoneNumber;
               string _Title;
               string _Department;
               float _Salary;

            public:

            // constructor
                clsEmployee(int ID,string FirstName, string LastName,string Email, string PhoneNumber , 
                            string Title, string Department, float Salary);

            // Normal Methods

              // Propery Set (Write Only)
                 void SetFirstName(string FirstName);

                 void SetLastName(string LastName);

                 void SetEmail(string Email);

                 void SetPhoneNumber(string PhoneNumber);

                 void SetTitle(string Title);

                 void SetDepartment(string Department);

                 void SetSalary(float Salary);

              //  Property Get (Read Only)
                 int GetID() const;

                 string GetFirstName() const;

                 string GetLastName() const;

                 string GetFullName() const;

                 string GetEmail() const;

                 string GetPhoneNumber() const;
                 
                 string GetTitle() const;

                 string GetDepartment() const;

                 float GetSalary() const;
                 
                 void GetInfo();

                 

              // Property Send
                 void SendEmail(string Subject, string Body);
 
                 void SendSMS(string Message);


        };
    
    // clsEmployee (End Block)


    // run (Start declaring the homework's excutable block)

        void run();

    // run (End declaring the homework's excutable block)

}

// Homework1: clsEmployee Exercise (End Namespace Block)
