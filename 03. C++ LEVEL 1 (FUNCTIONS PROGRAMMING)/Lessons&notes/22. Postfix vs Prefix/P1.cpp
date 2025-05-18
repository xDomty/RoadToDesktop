#include <iostream>
using namespace std;
int main()
{
   short int a = 10;
   short int c = a++; // (c) will take the old value of (a) ((10)), Then (a) will increase by 1, and become 11
   cout << "short int a = 10\n";
   cout << "short int c = a++:\n";
   cout << "c = " << c << "\n"; // (c) = 10
   cout << "a = " << a << "\n"; // (a) = 11
   cout << "EXPLNATION: (c) will take the old value of (a) ((10)), Then (a) will increase by 1, and become 11\n" << "_______________________" <<  endl;
   a = 10; //RESTARTING
   c; //RESTARTING
   c = ++a; // (a) will increase by 1 and become 11
   cout << "short int a = 10\n";
   cout << "short int c = ++a:\n";
   cout << "c = " << c << "\n"; // c = 11
   cout << "a = " << a << "\n"; // a = 11
   cout << "EXPLNATION: (a) will increase by 1 and become 11 , then (c) takes the new value of (a) and become 11\n" << "_______________________" <<  endl;
   a = 10; //RESTARTING THE VARS
   c; //RESTARTING THE VARS
   c = a--; // c=10 , a=9
   cout << "short int a = 10\n";
   cout << "short int c = a--:\n";
   cout << "a =" << a << "\n" << "c =" << c << "\n"; // c=10 , a=9
   cout << "EXPLNATION: (c) will take the old value of (a) ((10)), Then (a) will decrease by 1, and become 9\n" << "_______________________" <<  endl;
   a = 10; //RESTARTING THE VARS
   c; //RESTARTING THE VARS
   c = --a;
   cout << "short int a = 10\n";
   cout << "short int c = --a:\n";
   cout << "c = " << c << "\n"; // c = 9
   cout << "a = " << a << "\n"; // a = 9
   cout << "EXPLNATION: (a) will decrease by 1 and become 9 , then (c) takes the new value of (a) and become 9\n" << "_______________________" <<  endl;
   system("pause");
}