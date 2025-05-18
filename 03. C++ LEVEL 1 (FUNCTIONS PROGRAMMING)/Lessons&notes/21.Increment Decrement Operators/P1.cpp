#include <iostream>
using namespace std;
int main()
{
  //defining vars
     int a = 10 , b = 20;
     int d = 10 , c = 20;
     ++a; // a = a + 1
     --b; // b = b - 1
     d++; // d = d + 1
     c--; // c = c - 1
    //Printing the results
     cout << "a = " << a << "\nb = " << b << "\nd = " << d << "\nc = " << c << endl;
    // ++a or a++ does not have a differance if they are not in the same line
    // returning 0;
     return 0;
}