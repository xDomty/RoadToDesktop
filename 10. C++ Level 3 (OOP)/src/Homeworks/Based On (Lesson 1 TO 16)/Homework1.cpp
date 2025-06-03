#include "Homeworks/Based On (Lesson 1 TO 16)/Homework1.hpp"

// Homework1: clsPerson Exercise (Start Namespace Block)

namespace Homework1{

    // clsPerson (Start Block)

            // constructor
                clsPerson::clsPerson(int ID,string FirstName, string LastName,string Email, string PhoneNumber){
                    this->_ID           = ID          ;
                    this->_FirstName    = FirstName   ;
                    this->_LastName     = LastName    ;
                    this->_Email        = Email       ;
                    this->_PhoneNumber  = PhoneNumber ;
                }

            // Normal Methods

              // Propery Set (Write Only)
                 void clsPerson::SetFirstName(string FirstName){
                    this->_FirstName = FirstName;
                 }

                 void clsPerson::SetLastName(string LastName){
                    this->_LastName = LastName;
                 }

                 void clsPerson::SetEmail(string Email){
                    this->_Email = Email;
                 }

                 void clsPerson::SetPhoneNumber(string PhoneNumber){
                    this->_PhoneNumber = PhoneNumber;
                 }

              //  Property Get (Read Only)
                 int clsPerson::GetID() const {
                    return this->_ID;
                 }

                 string clsPerson::GetFirstName() const {
                    return this->_FirstName;
                 }

                 string clsPerson::GetLastName() const {
                    return this->_LastName;
                 }

                 string clsPerson::GetFullName() const {
                    return this->_FirstName + " " + this->_LastName;
                 }

                 string clsPerson::GetEmail() const {
                    return this->_Email;
                 }

                 string clsPerson::GetPhoneNumber() const {
                    return this->_PhoneNumber;
                 }

                void clsPerson::GetInfo(){
                    cout << "Info:\n"                                 ;
                    cout << "_____________________________________\n" ;
                    cout << "ID           : " << _ID          << '\n' ;
                    cout << "First Name   : " << _FirstName   << '\n' ;
                    cout << "Last Name    : " << _LastName    << '\n' ;
                    cout << "Email        : " << _Email       << '\n' ;
                    cout << "Phone Number : " << _PhoneNumber << '\n' ;
                    cout << "_____________________________________\n" ;
                }

              // Property Send
                 void clsPerson::SendEmail(string Subject, string Body){
                    cout << "Sending Email to: " << _Email << endl;
                    cout << "Subject: " << Subject << endl;
                    cout << "Body:\n" << Body << endl << endl;
                    cout << "Email sent successfully!" << endl;
                 }  

                 void clsPerson::SendSMS(string Message){
                    cout << "Sending SMS to: " << _PhoneNumber << endl;
                    cout << "Message: " << Message << endl << endl;
                    cout << "SMS sent successfully!" << endl;
                 }
    
    // clsPerson (End Block)

    
    // run (Start defining the homework's excutable block)

        void run(){
             clsPerson Person1(12,"Adam", "Ahmed", "xdomty@gmail.com" , "+971525239436");

             Person1.GetInfo(); cout << endl;
             
             Person1.SendEmail("Welcome to the system", "Hello " + Person1.GetFirstName() + ", welcome to our system. We are glad to have you here.");

             cout << endl;

             Person1.SendSMS("Hello " + Person1.GetFirstName() + ", welcome to our system. We are glad to have you here.");
        };

    // run (End defining the homework's excutable block)

}

// Homework1: clsPerson Exercise (End Namespace Block)
