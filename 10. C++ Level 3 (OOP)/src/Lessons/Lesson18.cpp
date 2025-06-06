#include "Lessons/Lesson18.hpp"

// Lesson 18 : Inheritence with prametraized constructors (Start Namespace's Block)

namespace Lesson18 {

    // clsPerson (Start Block)

        clsPerson::clsPerson(int ID, string FirstName, string LastName, string Email, string PhoneNumber){
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


    // clsEmployee (Start Block)

        clsEmployee::clsEmployee(int ID, string FirstName, string LastName, string Email, string PhoneNumber,
            string Title, string Department, float Salary)
            : clsPerson(ID, FirstName, LastName, Email, PhoneNumber){
			_Title = Title;
            _Department = Department;
			_Salary = Salary;
        }
        
        // Property Set (Write Only)
           void clsEmployee::SetTitle(string Title) {
               _Title = Title;
           }
           
           void clsEmployee::SetDepartment(string Department) {
               _Department = Department;
           }
           
           void clsEmployee::SetSalary(float Salary) {
               _Salary = Salary;
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

    // clsEmployee (End Block)


    // run (Start defining the Lesson's 18 excutable block)

        void run() {
            cout << "Lesson 18: Inheritance with parameterized constructors" << endl;
            clsEmployee emp(1, "Adam", "Ahmed", "xDomty@gmail.com", "+971525239436", "Senior", "Programmer", 5000.0f);
            emp.GetEmployeeInfo();
            emp.SendEmail("Welcome", "Welcome to the company!");
            emp.SendSMS("Your first day is Monday.");
        }

    // run (End defining the Lesson's 18 excutable block)

}

// Lesson 18 : Inheritence with prametraized constructors (End Namespace's Block)