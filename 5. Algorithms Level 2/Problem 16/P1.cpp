#include <iostream>
using namespace std;
void LoopPatternOfChar()
{

    cout << "Here is your pattern\n";

    for (int x = 65; x <= 90; x++)
    {
       for (int y = 65; y <= 90; y++)
        {
           for (int z = 65; z <= 90; z++)
               {

                  cout << char(x);
                  cout << char(y);
                  cout << char(z);

                  cout << endl;
               }
        }
    }
    cout << endl;
    
}

int main()
{
    cout << endl;

    LoopPatternOfChar();
    cout << endl;

    return 0;
}