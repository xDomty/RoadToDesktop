#pragma once
#include <string>

// Lesson20 : Multi Level INHERITANCE --> Review on HW3 (Start Namespace's Block)

namespace Lesson20 {

    // clsPerson (Start Block)

    class clsPerson {
      private:
        int    _ID;
        std::string _FirstName;
        std::string _LastName;
        std::string _Email;
        std::string _PhoneNumber;

      public:

        // constructor
        clsPerson(int ID, std::string FirstName, std::string LastName, std::string Email, std::string PhoneNumber);

        // Normal Methods

          // Propery Set (Write Only)
            void SetFirstName(std::string FirstName);          // Defined in source
            void SetLastName(std::string LastName);            // Defined in source
            void SetEmail(std::string Email);                  // Defined in source
            void SetPhoneNumber(std::string PhoneNumber);      // Defined in source

          //  Property Get (Read Only)                    
            int GetID() const;                            // Defined in source
            std::string GetFirstName() const;                  // Defined in source
            std::string GetLastName() const;                   // Defined in source
            std::string GetFullName() const;                   // Defined in source
            std::string GetEmail() const;                      // Defined in source
            std::string GetPhoneNumber() const;                // Defined in source
            virtual void GetInfo();                       // Defined in source
           
          // Property Send
            void SendEmail(std::string Subject, std::string Body);  // Defined in source
            void SendSMS(std::string Message);                 // Defined in source
    };

    //clsPerson (End Block)


    // clsEmployee (Start Block)

    class clsEmployee : public clsPerson {

    private:
        std::string _Title;
        std::string _Department;
        float  _Salary;

    public:

        // constructor
        clsEmployee(int ID, std::string FirstName, std::string LastName, std::string Email, std::string PhoneNumber,
            std::string Title, std::string Department, float Salary); // Defined in source

        // Normal Methods

          // Propery Set (Write Only)
        void SetTitle(std::string Title);                  // Defined in source
        void SetDepartment(std::string Department);        // Defined in source
        void SetSalary(float Salary);                 // Defined in source

        //  Property Get (Read Only)
        std::string GetTitle() const;                      // Defined in source
        std::string GetDepartment() const;                 // Defined in source
        float GetSalary() const;                      // Defined in source
        void GetInfo() override;                      // Defined in source
    };

    // clsEmployee (End Block)


	// clsProgrammer (Start Block)

    class clsProgrammer : public clsEmployee {

        protected:

            std::string _ProgrammingLanguage;
			short  _ExperienceYears;

        public:

            // constructor
            clsProgrammer(int ID, std::string FirstName, std::string LastName, std::string Email, std::string PhoneNumber,
                std::string Title, std::string Department, float Salary, std::string ProgrammingLanguage, short ExperienceYears); // Defined in source

            // Normal Methods
               // Propery Set (Write Only)
			            void SetProgrammingLanguage(std::string ProgrammingLanguage);   // Defined in source
				          void SetExperienceYears(short ExperienceYears);            // Defined in source
                  
               //  Property Get (Read Only)
				          std::string GetProgrammingLanguage() const;                     // Defined in source
				          short  GetExperienceYears() const;                         // Defined in source
				          void   GetInfo() override;                                 // Defined in source

    };

	// clsProgrammer (End Block)


    // run (Start declaring the Homework's 3 excutable block)

    void run(); // Defined in source

    // run (End declaring the Homework's 3 excutable block)

}

// Lesson20 : Multi Level INHERITANCE --> Review on HW3 (Start Namespace's Block)