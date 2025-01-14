#pragma once
#include "../include/Problem2.hpp"

namespace Problem2
{
       void TheName()
       {
           string nameOfUser;
           cout << "Please enter your name\n";
           cin >> nameOfUser;
           cout << "Your name is : " << nameOfUser;
       }

       void main()
       {
           TheName();
       }
}