#include "Homeworks/Based On (Lesson 1 TO 16)/Homework2.hpp"

// Homework1: clsEmployee Exercise (Start Namespace Block)

namespace Homework2{

    // clsEmployee (Start Block)

            // constructor
                clsEmployee::clsEmployee(int ID,string FirstName, string LastName,string Email, string PhoneNumber , string Title, string Department, float Salary){
                    this->_ID           = ID          ;
                    this->_FirstName    = FirstName   ;
                    this->_LastName     = LastName    ;
                    this->_Email        = Email       ;
                    this->_PhoneNumber  = PhoneNumber ;
                    this->_Title        = Title       ;
                    this->_Department   = Department  ;
                    this->_Salary       = Salary      ;
                }

            // Normal Methods

              // Propery Set (Write Only)
                 void clsEmployee::SetFirstName(string FirstName){
                    this->_FirstName = FirstName;
                 }

                 void clsEmployee::SetLastName(string LastName){
                    this->_LastName = LastName;
                 }

                 void clsEmployee::SetEmail(string Email){
                    this->_Email = Email;
                 }

                 void clsEmployee::SetPhoneNumber(string PhoneNumber){
                    this->_PhoneNumber = PhoneNumber;
                 }

                 void clsEmployee::SetTitle(string Title){
                     this->_Title = Title;
                 }

                 void clsEmployee::SetDepartment(string Department){
                     this->_Department = Department;
                 }

                 void clsEmployee::SetSalary(float Salary){
                     this->_Salary = Salary;
                 }

              //  Property Get (Read Only)
                 int clsEmployee::GetID() const {
                    return this->_ID;
                 }

                 string clsEmployee::GetFirstName() const {
                    return this->_FirstName;
                 }

                 string clsEmployee::GetLastName() const {
                    return this->_LastName;
                 }

                 string clsEmployee::GetFullName() const {
                    return this->_FirstName + " " + this->_LastName;
                 }

                 string clsEmployee::GetEmail() const {
                    return this->_Email;
                 }

                 string clsEmployee::GetPhoneNumber() const {
                    return this->_PhoneNumber;
                 }

                 string clsEmployee::GetDepartment() const {
                    return this->_Department;
                 }

                 string clsEmployee::GetTitle() const {
                    return this->_Title;
                 }

                 float clsEmployee::GetSalary() const {
                    return this->_Salary;
                 }

                void clsEmployee::GetInfo(){
                    cout << "Info:\n"                                 ;
                    cout << "_____________________________________\n" ;
                    cout << "ID           : " << _ID          << '\n' ;
                    cout << "First Name   : " << _FirstName   << '\n' ;
                    cout << "Last Name    : " << _LastName    << '\n' ;
                    cout << "Email        : " << _Email       << '\n' ;
                    cout << "Phone Number : " << _PhoneNumber << '\n' ;
                    cout << "Title        : " << _Title       << '\n' ;
                    cout << "Department   : " << _Department  << '\n' ;
                    cout << "Salary       : " << _Salary      << '\n' ;
                    cout << "_____________________________________\n" ;
                }

              // Property Send
                 void clsEmployee::SendEmail(string Subject, string Body){
                    cout << "Sending Email to: " << _Email << endl;
                    cout << "Subject: " << Subject << endl;
                    cout << "Body:\n" << Body << endl << endl;
                    cout << "Email sent successfully!" << endl;
                 }  

                 void clsEmployee::SendSMS(string Message){
                    cout << "Sending SMS to: " << _PhoneNumber << endl;
                    cout << "Message: " << Message << endl << endl;
                    cout << "SMS sent successfully!" << endl;
                 }
    
    // clsEmployee (End Block)

    
    // run (Start defining the homework's excutable block)

        void run(){
             clsEmployee Employee1(12,"Adam", "Ahmed", "xdomty@gmail.com" , "+971525239436", "Software Engineer", "Development", 5000.0);

             Employee1.GetInfo(); cout << endl;
             
             Employee1.SendEmail("Welcome to the system", "Hello " + Employee1.GetFirstName() + ", welcome to our system. We are glad to have you here in " + Employee1.GetDepartment() + " department as a " + Employee1.GetTitle() + ".");

             cout << endl;

             Employee1.SendSMS("Hello " + Employee1.GetFirstName() + ", welcome to our system. We are glad to have you here in " + Employee1.GetDepartment() + " department as a " + Employee1.GetTitle() + ".");
        };

    // run (End defining the homework's excutable block)

}

// Homework1: clsEmployee Exercise (End Namespace Block)
