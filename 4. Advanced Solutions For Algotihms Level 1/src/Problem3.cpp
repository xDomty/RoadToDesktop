#include "../include/Problem3.hpp"
#include "../include/Force.hpp"
namespace Problem3
{
       void main()
       {
          int number;
          cout << "Hello,This program makes you enter a number then it prints if it odd or even\n";
          number = InputForce::Any<int>("Please enter your number : "); 
          cout << ResultOfIsEven(number);
       }
}