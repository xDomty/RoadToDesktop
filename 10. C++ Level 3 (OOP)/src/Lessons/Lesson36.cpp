#include "Lessons/Lesson36.hpp"
#include <iostream>

// Lesson36: Adding Objects to vectors

namespace Lesson36 {

    // clsPerson START DEFINITION

        clsPerson::clsPerson(const std::string& firstName, const std::string& lastName, int age)
            : _firstName(firstName), _lastName(lastName), _age(age) {
        }

        std::string clsPerson::GetFirstName() const { return _firstName; }
        std::string clsPerson::GetLastName() const { return _lastName; }
        int clsPerson::GetAge() const { return _age; }

        void clsPerson::Print() const {
            std::cout << "Person: " << _firstName << " " << _lastName
                << " | Age = " << _age << std::endl;
        }

    // clsPerson END DEFINITION


    void AddPerson(std::vector<clsPerson>& persons, const clsPerson& person) {
        persons.push_back(person);
    }

    void PrintPersons(const std::vector<clsPerson>& persons) {
        for (const auto& person : persons) {
            person.Print();
        }
    }

    void run() {
        std::vector<clsPerson> persons;

        AddPerson(persons, clsPerson("Adam", "Ahmed", 16));
        AddPerson(persons, clsPerson("Ahmed", "Amer", 43));
        AddPerson(persons, clsPerson("Waheed", "idk", 22));
        AddPerson(persons, clsPerson("Say", "idk", 15));

        std::cout << "All persons in the vector:" << std::endl;
        PrintPersons(persons);
    }

}

// Lesson36: Adding Objects to vectors
