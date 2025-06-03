#include <iostream>
using namespace std;

// Homework1: clsPerson Exercise (Start Namespace Block)

namespace Homework1{

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
                clsPerson(int ID,string FirstName, string LastName,string Email, string PhoneNumber);

            // Normal Methods

              // Propery Set (Write Only)
                 void SetFirstName(string FirstName);

                 void SetLastName(string LastName);

                 void SetEmail(string Email);

                 void SetPhoneNumber(string PhoneNumber);

              //  Property Get (Read Only)
                 int GetID() const;

                 string GetFirstName() const;

                 string GetLastName() const;

                 string GetFullName() const;

                 string GetEmail() const;

                 string GetPhoneNumber() const;

                 void GetInfo();

              // Property Send
                 void SendEmail(string Subject, string Body);
 
                 void SendSMS(string Message);


        };
    
    // clsPerson (End Block)


    // run (Start declaring the homework's excutable block)

        void run();

    // run (End declaring the homework's excutable block)

}

// Homework1: clsPerson Exercise (End Namespace Block)
