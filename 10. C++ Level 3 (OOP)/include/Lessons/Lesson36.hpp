#pragma once

// Lesson36: Adding Objects to vectors

#include <string>
#include <vector>

namespace Lesson36 {

    class clsPerson {

         private:
             std::string _firstName;
             std::string _lastName;
             int _age;
         
         public:
             clsPerson(const std::string& firstName, const std::string& lastName, int age);
         

             // Getters

                 std::string GetFirstName() const;
                 std::string GetLastName() const;
                 int GetAge() const;
                 
                 void Print() const;

    };

    // Function to add a person to the vector
    void AddPerson(std::vector<clsPerson>& persons, const clsPerson& person);

    // Function to print all persons in the vector
    void PrintPersons(const std::vector<clsPerson>& persons);

    void run();

}

// Lesson36: Adding Objects to vectors