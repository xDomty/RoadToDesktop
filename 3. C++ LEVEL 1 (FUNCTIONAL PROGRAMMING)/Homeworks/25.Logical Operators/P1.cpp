#include <iostream>
using namespace std;
int main()
{
   bool a;
   a = (12>=12);  //true
   cout << a << "\n";
   a = !(12 >=12); //false
   cout << a << "\n";
   a = (1&&1); //true
   cout << a << "\n";
   a = ((7==7)&&(7>5)); //true
   cout << a << "\n";
   a = (12 > 7); //true
   cout << a << endl;
   a = ! (12<7); //true
   cout << a << "\n";
   a = (1&&0); //false
   cout << a << "\n";
   a = ((7==7)&&(7<5)); //false
   cout << a << "\n";
   a = (8 < 6); //false
   cout << a << "\n";
   a = !(8<6); //true
   cout << a << endl;
   a = (0||1); //true
   cout << a << "\n";
   a = ((7==7)||(7<5)); //true
   cout << a << "\n";
   a = (8==8); //true
   cout << a << "\n";
   a = ! (12 <= 12); //false
   cout << a << "\n";
   a = !(false); //true
   cout << a << endl;
   a = !((7==7)&&(7>5)); //false
   cout << a << "\n";
   a = (7==5); //false
   cout << a << "\n";
   a = !((true||false)); //false
   cout << a << "\n";
   a = ((7 == 7)&& !(7<5)); //true
   cout << a << "\n";
   a = (((5>6) && (7==7)) || (true||false)); //true
   cout << a << endl;
   a = !(((5>6)&&(7==7)) || (true||false)); //false
   cout << a << "\n";
   a = !(((5>6)||(7==7)) && !(true||false)); //true
   cout << a << "\n";
   a = (((((5>6)&&(7<=8))||(7==7))||((8>1)&&(4<=3)))&&(true)); //true
   cout << a << "\n";
   a = ((((5>6)&& (!(7<=8)))&&((8>1)&&(4<=3)))||(true)); //true
   cout << a << endl;
   system("pause");
   return 0;
}