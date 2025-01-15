#pragma once
#include "../include/Problem24.hpp"
#include <optional>
#include <iostream>

namespace Problem24
{
    void WELCOMER()
    {
        std::cout << "This program checks if the entered age is valid or not\n";
    }

    inline std::optional<short> CheckAge()
    {
        short age;
        std::cout << "Enter age: ";
        std::cin >> age;

        if (age >= 0 && age <= 100) {
            return age;
        }
        else {
            return std::nullopt;
        }
    }


    void PrintResult(std::optional<short> age)
    {
        if (age.has_value())
            std::cout << "VALID AGE";
        else
            std::cout << "INVALID AGE";
    }

    void main()
    { 
        WELCOMER();
        optional <short> age;
		age = CheckAge();
        PrintResult(age);
        std::cout << std::endl;
    }
}
