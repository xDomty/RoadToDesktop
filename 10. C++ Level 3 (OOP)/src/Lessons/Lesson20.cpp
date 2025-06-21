#include "Lessons/Lesson20.hpp"
#include <iostream> 

// Lesson20 : Multi Level INHERITANCE --> Review on HW3 (Start Namespace's Block)

namespace Lesson20 {

    // clsPerson (Start Block)

    clsPerson::clsPerson(int ID, std::string FirstName, std::string LastName, std::string Email, std::string PhoneNumber) {
		_ID = ID;
        _FirstName = FirstName;
        _LastName = LastName;
        _Email = Email;
		_PhoneNumber = PhoneNumber;
    }

    // Property Set (Write Only)
    void clsPerson::SetFirstName(std::string FirstName) { _FirstName = FirstName; }
    void clsPerson::SetLastName(std::string LastName) { _LastName = LastName; }
    void clsPerson::SetEmail(std::string Email) { _Email = Email; }
    void clsPerson::SetPhoneNumber(std::string PhoneNumber) { _PhoneNumber = PhoneNumber; }

    // Property Get (Read Only)
    int clsPerson::GetID() const { return _ID; }
    std::string clsPerson::GetFirstName() const { return _FirstName; }
    std::string clsPerson::GetLastName() const { return _LastName; }
    std::string clsPerson::GetFullName() const { return _FirstName + " " + _LastName; }
    std::string clsPerson::GetEmail() const { return _Email; }
    std::string clsPerson::GetPhoneNumber() const { return _PhoneNumber; }

    void clsPerson::GetInfo() {
        std::cout << "ID: " << _ID << std::endl;
        std::cout << "Name: " << GetFullName() << std::endl;
        std::cout << "Email: " << _Email << std::endl;
        std::cout << "Phone: " << _PhoneNumber << std::endl;
    }

    // Property Send
    void clsPerson::SendEmail(std::string Subject, std::string Body) {
        std::cout << "Sending Email to " << _Email << "..." << std::endl;
        std::cout << "Subject: " << Subject << std::endl;
        std::cout << "Body: " << Body << std::endl;
    }

    void clsPerson::SendSMS(std::string Message) {
        std::cout << "Sending SMS to " << _PhoneNumber << "..." << std::endl;
        std::cout << "Message: " << Message << std::endl;
    }

    // clsPerson (End Block)


    // clsEmployee (Start Block)

    clsEmployee::clsEmployee(int ID, std::string FirstName, std::string LastName, std::string Email, std::string PhoneNumber,
        std::string Title, std::string Department, float Salary) : clsPerson(ID,FirstName,LastName,Email,PhoneNumber){
		_Title = Title;
        _Department = Department;
		_Salary = Salary;
    }

    // Property Set (Write Only)
    void clsEmployee::SetTitle(std::string Title) { _Title = Title; }
    void clsEmployee::SetDepartment(std::string Department) { _Department = Department; }
    void clsEmployee::SetSalary(float Salary) { _Salary = Salary; }

    // Property Get (Read Only)
    std::string clsEmployee::GetTitle() const { return _Title; }
    std::string clsEmployee::GetDepartment() const { return _Department; }
    float clsEmployee::GetSalary() const { return _Salary; }

    void clsEmployee::GetInfo() {
        clsPerson::GetInfo();
        std::cout << "Title: " << _Title << std::endl;
        std::cout << "Department: " << _Department << std::endl;
        std::cout << "Salary: " << _Salary << std::endl;
    }

    // clsEmployee (End Block)


    // clsProgrammer (Start Block)

    clsProgrammer::clsProgrammer(int ID, std::string FirstName, std::string LastName, std::string Email, std::string PhoneNumber,
        std::string Title, std::string Department, float Salary, std::string ProgrammingLanguage, short ExperienceYears)
        : clsEmployee(ID, FirstName, LastName, Email, PhoneNumber, Title, Department, Salary) {
		_ProgrammingLanguage = ProgrammingLanguage;
		_ExperienceYears = ExperienceYears;
    }


    // Property Set (Write Only)
    void clsProgrammer::SetProgrammingLanguage(std::string ProgrammingLanguage) { _ProgrammingLanguage = ProgrammingLanguage; }
    void clsProgrammer::SetExperienceYears(short ExperienceYears) { _ExperienceYears = ExperienceYears; }

    // Property Get (Read Only)
    std::string clsProgrammer::GetProgrammingLanguage() const { return _ProgrammingLanguage; }
    short clsProgrammer::GetExperienceYears() const { return _ExperienceYears; }

    void clsProgrammer::GetInfo() {
        clsEmployee::GetInfo();
        std::cout << "Programming Language: " << _ProgrammingLanguage << std::endl;
        std::cout << "Experience Years: " << _ExperienceYears << " Years" << std::endl;
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
