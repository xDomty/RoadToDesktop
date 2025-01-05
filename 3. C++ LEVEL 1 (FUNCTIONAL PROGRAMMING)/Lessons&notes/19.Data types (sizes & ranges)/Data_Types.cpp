#include <iostream>
#include <climits>
#include <cfloat>
using namespace std;
int main()
{
 //Sizes And Ranges Of Data Types 
     cout << "Here is the sizes of Data Types\n\n";
     cout << "****************************************************************************************************\n";
     cout << "The size of void (empty) is " <<  "0 Bytes and it has no ranges\n" ; 
     cout << "The size of bool (boolean) is " << sizeof(bool) << " Bytes and it ranges between : (0, 1)." << endl ; 
     cout << "The size of char (character) is " << sizeof(char) << " Bytes and it ranges between : (" << CHAR_MIN << ", " << CHAR_MAX <<").\n"; 
     cout << "The size of wchar_t (wide character) is " << sizeof(wchar_t) <<  " Bytes and it has no ranges\n" ;
     cout << "The size of unsigned short int is " << sizeof(short int) <<  " Bytes and it ranges between : (" << 0 << ", " << USHRT_MAX <<").\n" ; 
     cout << "The size of signed short int is " << sizeof(short int) <<  " Bytes and it ranges between : " << SHRT_MIN << ", " << SHRT_MAX <<".\n" ; 
     cout << "The size of unsigned int is " << sizeof(int) <<  " Bytes and it ranges between : " << 0 << ", " << UINT_MAX <<".\n" ; 
     cout << "The size of signed int is " << sizeof(int) <<  " Bytes and it ranges between : " << INT_MIN << ", " << INT_MAX <<"." << endl ; 
     cout << "The size of unsigned long int is " << sizeof(long) <<  " Bytes and it ranges between : " << 0 << ", " << ULONG_MAX <<".\n" ; 
     cout << "The size of signed long int is " << sizeof(long) <<  " Bytes and it ranges between : " << LONG_MIN << ", " << LONG_MAX <<".\n"; 
     cout << "The size of signed float is " << sizeof(float) <<  " Bytes and it ranges between : " << FLT_MIN << ", " << FLT_MAX <<".\n"; // IMPORTANT NOTE: FLOAT DOES NOT HAVE UNSIGNED (SIGNED ONLY)
     cout << "The size of unsigned long long int is " << sizeof(long long) <<  " Bytes and it ranges between : " << 0 << ", " << ULLONG_MAX <<".\n";
     cout << "The size of signed long long int is " << sizeof(long long) <<  " Bytes and it ranges between : " << LLONG_MIN << ", " << LLONG_MAX <<".\n";
     cout << "The size of signed double is " << sizeof(double) <<  " Bytes and it ranges between : " << DBL_MIN << ", " << DBL_MAX <<"." << endl; // IMPORTANT NOTE: DOUBLE DOES NOT HAVE UNSIGNED (SIGNED ONLY)
     cout << "The size of signed long double is " << sizeof(long double) <<  " Bytes and it ranges between : " << LDBL_MIN << ", " << LDBL_MAX <<".\n";
     cout << "The size of string (text) is " << sizeof(string) <<  " Bytes in 64x systems and it has no ranges\n" ; 
     cout << "****************************************************************************************************\n";
       //returning 0
     return 0;
}