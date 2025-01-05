#include <iostream>
using namespace std;

string ReadPasswordOf3Chars(string message)
{

    string Password;
    cout << message << endl;

    char Letter[3];

    
        for (int i = 0; i < 3; i++)
        {
            cin >> Letter[i];
        }
    


    Password += Letter[0];
    Password += Letter[1];
    Password += Letter[2];

    
    return Password;

}

bool GuessThePasswordOf3Chars(string ThePassword)
{

    cout << "Here is your password\n\n";
    string text = "";
    int counter = 0;
    for (int x = 65; x <= 90; x++)
    {
       for (int y = 65; y <= 90; y++)
        {
           for (int z = 65; z <= 90; z++)
               {
                  counter++;

                  text = text + char(x);
                  text = text + char(y);
                  text = text + char(z);
                  
                  cout << "Trial [" << counter << "] : " << text << endl;

                  if (text == ThePassword)
                  {
                       cout << endl;
                       cout << "Password is : " << text << endl;
                       cout << "Found after " << counter << " Trials.";
                       text = "";
                       return true;
                  }

                  text = "";
               }
        }
    }

    if (text != ThePassword)
    {
        cout << "You are forbidden to write numbers in chars dude\n";
        return false;
    }

}

int main()
{
    cout << endl;

    string ThePassword = ReadPasswordOf3Chars("Please enter a chars password from 3 charachters to guess it?");
    cout << endl;

    GuessThePasswordOf3Chars(ThePassword);
    cout << endl;

    return 0;
}