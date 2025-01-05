#include <iostream>
using namespace std;
int main()
{
   bool a=1,b=0;
   cout << (a&&b); // and operators must be all of the variables be true to get true otherwise it gets false
   cout << (a||b); // or operators must be one of the variables be true to get true otherwise it gets false
   cout << !a; // not operators do the otherwise of the operator (if the operator is true it converts to false or vice versa)
}