#pragma once
#include <iostream>
using namespace std;

// Lesson 18 : Inheritence with prametraized constructors (Start Namespace's Block)

    namespace Lesson18 {

        // clsPerson (Start Block)

            class clsPerson {
                private:
                    int    _ID;
                    string _FirstName;
                    string _LastName;
                    string _Email;
                    string _PhoneNumber;

                public:

                // constructor
                    clsPerson(int ID, string FirstName, string LastName, string Email, string PhoneNumber);

                // Normal Methods
                 
                  // Propery Set (Write Only)
                    void SetFirstName(string FirstName);          // Defined in source
                    void SetLastName(string LastName);            // Defined in source
                    void SetEmail(string Email);                  // Defined in source
                    void SetPhoneNumber(string PhoneNumber);      // Defined in source

                  //  Property Get (Read Only)                    
                    int GetID() const;                            // Defined in source
                    string GetFirstName() const;                  // Defined in source
                    string GetLastName() const;                   // Defined in source
                    string GetFullName() const;                   // Defined in source
                    string GetEmail() const;                      // Defined in source
                    string GetPhoneNumber() const;                // Defined in source
                    void GetPersonInfo();                         // Defined in source

                  // Property Send
                    void SendEmail(string Subject, string Body);  // Defined in source
                    void SendSMS(string Message);                 // Defined in source
			};

        //clsPerson (End Block)
       

        // clsEmployee (Start Block)

            class clsEmployee : public clsPerson {

                private:
                    string _Title;
                    string _Department;
                    float  _Salary;
                public:

                // constructor
                    clsEmployee(int ID, string FirstName, string LastName, string Email, string PhoneNumber,
                        string Title, string Department, float Salary); // Defined in source

                // Normal Methods
                
                  // Propery Set (Write Only)
                    void SetTitle(string Title);                  // Defined in source
                    void SetDepartment(string Department);        // Defined in source
                    void SetSalary(float Salary);                 // Defined in source

                  //  Property Get (Read Only)
                    string GetTitle() const;                      // Defined in source
                    string GetDepartment() const;                 // Defined in source
                    float GetSalary() const;                      // Defined in source
					void GetEmployeeInfo();                       // Defined in source
            };

		// clsEmployee (End Block)


        // run (Start declaring the Lesson's 18 excutable block)

			void run(); // Defined in source

		// run (End declaring the Lesson's 18 excutable block)

    }

// Lesson 18 : Inheritence with prametraized constructors (End Namespace's Block)
