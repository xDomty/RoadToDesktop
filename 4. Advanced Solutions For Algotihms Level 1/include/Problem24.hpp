#ifndef PROBLEM24_HPP
#define PROBLEM24_HPP
#include <iostream>
#include <optional>
#include "Force.hpp"
using namespace std;

namespace Problem24
{
    void WELCOMER();

    inline std::optional<short> CheckAge();

    void PrintResult(std::optional<short> age);
    
    void main();
}
#endif