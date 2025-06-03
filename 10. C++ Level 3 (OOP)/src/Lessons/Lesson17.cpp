#include "Lessons/Lesson17.hpp"

// Lesson 17 : Inheritance (Start Namespace's block)

namespace Lesson17{

    // clsPerson (Start Block)

        // Default constructor
        clsPerson::clsPerson(){}

        // Parameterized constructor
        clsPerson::clsPerson(int ID, string FirstName, string LastName, string Email, string PhoneNumber) {
            _ID = ID;
            _FirstName = FirstName;
            _LastName = LastName;
            _Email = Email;
            _PhoneNumber = PhoneNumber;
        }

        // Property Set (Write Only)
            void clsPerson::SetFirstName(string FirstName) {
                _FirstName = FirstName;
            }
    
            void clsPerson::SetLastName(string LastName) {
                _LastName = LastName;
            }
    
            void clsPerson::SetEmail(string Email) {
                _Email = Email;
            }
    
            void clsPerson::SetPhoneNumber(string PhoneNumber) {
                _PhoneNumber = PhoneNumber;
            }

        // Property Get (Read Only)
            int clsPerson::GetID() const {
                return _ID;
            }
    
            string clsPerson::GetFirstName() const {
                return _FirstName;
            }
    
            string clsPerson::GetLastName() const {
                return _LastName;
            }
    
            string clsPerson::GetFullName() const {
                return _FirstName + " " + _LastName;
            }
    
            string clsPerson::GetEmail() const {
                return _Email;
            }
    
            string clsPerson::GetPhoneNumber() const {
                return _PhoneNumber;
            }
    
            void clsPerson::GetPersonInfo() {
                cout << "ID: " << _ID << endl;
                cout << "Name: " << GetFullName() << endl;
                cout << "Email: " << _Email << endl;
                cout << "Phone: " << _PhoneNumber << endl;
            }
    
        // Property Send
            void clsPerson::SendEmail(string Subject, string Body) {
                cout << "Sending Email to " << _Email << endl;
                cout << "Subject: " << Subject << endl;
                cout << "Body: " << Body << endl;
            }
    
            void clsPerson::SendSMS(string Message) {
                cout << "Sending SMS to " << _PhoneNumber << endl;
                cout << "Message: " << Message << endl;
            }

    // clsPerson (End Block)


    // clsEmployee --> INHERITS FROM clsPerson (Start Block)

        // Property Set (Write Only)
           void clsEmployee::SetFirstName(string FirstName) {
               clsPerson::SetFirstName(FirstName);
           }
   
           void clsEmployee::SetLastName(string LastName) {
               clsPerson::SetLastName(LastName);
           }
   
           void clsEmployee::SetEmail(string Email) {
               clsPerson::SetEmail(Email);
           }

        // Property Get (Read Only)
           string clsEmployee::GetTitle() const {
               return _Title;
           }
   
           string clsEmployee::GetDepartment() const {
               return _Department;
           }
   
           float clsEmployee::GetSalary() const {
               return _Salary;
           }
   
           void clsEmployee::GetEmployeeInfo() {
               GetPersonInfo();
               cout << "Title: " << _Title << endl;
               cout << "Department: " << _Department << endl;
               cout << "Salary: " << _Salary << endl;
           }

    // clsEmployee --> INHERITS FROM clsPerson (End Block)


    // run (Start defining the lesson's executable block)

        void run() {
            cout << "Lesson 17: Inheritance Example" << endl;

            cout << "person object..." << endl;
            clsPerson person(1, "John", "Doe", "john.doe@email.com", "123456789");
            person.GetPersonInfo();
            person.SendEmail("Welcome", "Hello John!");
            person.SendSMS("Hi John!");

            cout << "\n";

            cout << "employee object..." << endl;
            clsEmployee emp;
            emp.SetFirstName("Jane");
            emp.SetLastName("Smith");
            emp.SetEmail("jane.smith@email.com");
            emp.GetEmployeeInfo();
        }

    // run (End defining the lesson's executable block)

}

// Lesson 17 : Inheritance (End Namespace's block)