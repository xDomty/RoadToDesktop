#include "Lessons/Lesson20.hpp"

// Lesson20 : Multi Level INHERITANCE --> Review on HW3 (Start Namespace's Block)

namespace Lesson20 {

    // clsPerson (Start Block)

    clsPerson::clsPerson(int ID, string FirstName, string LastName, string Email, string PhoneNumber) {
		_ID = ID;
        _FirstName = FirstName;
        _LastName = LastName;
        _Email = Email;
		_PhoneNumber = PhoneNumber;
    }

    // Property Set (Write Only)
    void clsPerson::SetFirstName(string FirstName) { _FirstName = FirstName; }
    void clsPerson::SetLastName(string LastName) { _LastName = LastName; }
    void clsPerson::SetEmail(string Email) { _Email = Email; }
    void clsPerson::SetPhoneNumber(string PhoneNumber) { _PhoneNumber = PhoneNumber; }

    // Property Get (Read Only)
    int clsPerson::GetID() const { return _ID; }
    string clsPerson::GetFirstName() const { return _FirstName; }
    string clsPerson::GetLastName() const { return _LastName; }
    string clsPerson::GetFullName() const { return _FirstName + " " + _LastName; }
    string clsPerson::GetEmail() const { return _Email; }
    string clsPerson::GetPhoneNumber() const { return _PhoneNumber; }

    void clsPerson::GetInfo() {
        cout << "ID: " << _ID << endl;
        cout << "Name: " << GetFullName() << endl;
        cout << "Email: " << _Email << endl;
        cout << "Phone: " << _PhoneNumber << endl;
    }

    // Property Send
    void clsPerson::SendEmail(string Subject, string Body) {
        cout << "Sending Email to " << _Email << "..." << endl;
        cout << "Subject: " << Subject << endl;
        cout << "Body: " << Body << endl;
    }

    void clsPerson::SendSMS(string Message) {
        cout << "Sending SMS to " << _PhoneNumber << "..." << endl;
        cout << "Message: " << Message << endl;
    }

    // clsPerson (End Block)


    // clsEmployee (Start Block)

    clsEmployee::clsEmployee(int ID, string FirstName, string LastName, string Email, string PhoneNumber,
        string Title, string Department, float Salary) : clsPerson(ID,FirstName,LastName,Email,PhoneNumber){
		_Title = Title;
        _Department = Department;
		_Salary = Salary;
    }

    // Property Set (Write Only)
    void clsEmployee::SetTitle(string Title) { _Title = Title; }
    void clsEmployee::SetDepartment(string Department) { _Department = Department; }
    void clsEmployee::SetSalary(float Salary) { _Salary = Salary; }

    // Property Get (Read Only)
    string clsEmployee::GetTitle() const { return _Title; }
    string clsEmployee::GetDepartment() const { return _Department; }
    float clsEmployee::GetSalary() const { return _Salary; }

    void clsEmployee::GetInfo() {
        clsPerson::GetInfo();
        cout << "Title: " << _Title << endl;
        cout << "Department: " << _Department << endl;
        cout << "Salary: " << _Salary << endl;
    }

    // clsEmployee (End Block)


    // clsProgrammer (Start Block)

    clsProgrammer::clsProgrammer(int ID, string FirstName, string LastName, string Email, string PhoneNumber,
        string Title, string Department, float Salary, string ProgrammingLanguage, short ExperienceYears)
        : clsEmployee(ID, FirstName, LastName, Email, PhoneNumber, Title, Department, Salary) {
		_ProgrammingLanguage = ProgrammingLanguage;
		_ExperienceYears = ExperienceYears;
    }


    // Property Set (Write Only)
    void clsProgrammer::SetProgrammingLanguage(string ProgrammingLanguage) { _ProgrammingLanguage = ProgrammingLanguage; }
    void clsProgrammer::SetExperienceYears(short ExperienceYears) { _ExperienceYears = ExperienceYears; }

    // Property Get (Read Only)
    string clsProgrammer::GetProgrammingLanguage() const { return _ProgrammingLanguage; }
    short clsProgrammer::GetExperienceYears() const { return _ExperienceYears; }

    void clsProgrammer::GetInfo() {
        clsEmployee::GetInfo();
        cout << "Programming Language: " << _ProgrammingLanguage << endl;
        cout << "Experience Years: " << _ExperienceYears << " Years" << endl;
    }

    // clsProgrammer (End Block)


    // run (Start declaring the Homework's 3 excutable block)

    void run() {
        clsProgrammer programmer(
            1, "John", "Doe", "john.doe@email.com", "1234567890",
            "Senior Developer", "IT", 90000.0f, "C++", 7
        );

        programmer.GetInfo();
        programmer.SendEmail("Welcome", "Hello John, welcome to the team!");
        programmer.SendSMS("Your onboarding starts Monday.");
    }

    // run (End declaring the Homework's 3 excutable block)

}

// Lesson20 : Multi Level INHERITANCE --> Review on HW3 (Start Namespace's Block)
