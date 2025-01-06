#include "Problem2.h"
using namespace std;

namespace Problem2
{
       string name()
       {
           string name;
           cout << "Please enter your name\n";
           cin >> name;
           return name;
       }

       void main()
       {
           cout << name();
       }
}