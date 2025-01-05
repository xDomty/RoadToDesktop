#include <iostream>
using namespace std;

enum enWeekDay { Sun = 1, Mon = 2, Tue = 3, Wed = 4, Thu = 5, Fri = 6, Sat = 7 };


void ShowWeekDayMenue()
{
    cout << "************************" << endl;
    cout << "       Week Days        " << endl;
    cout << "************************" << endl;
    cout << "1: Sunday" << endl;
    cout << "2: Monday" << endl;
    cout << "3: Tuesday" << endl;
    cout << "4: Wednesday" << endl;
    cout << "5: Thursday" << endl;
    cout << "6: Friday" << endl;
    cout << "7: Saturday" << endl;
    cout << "************************" << endl;
    cout << "Please enter the number of day?" << endl;
}

enWeekDay ReadTheDay()
{
    int WeekDay;
    cin >> WeekDay;
    return (enWeekDay)WeekDay;
}

void PrintTheDay(enWeekDay StrWeekDay)
{
    switch (StrWeekDay)
    {
       case enWeekDay::Sun:
           cout << "The day is: Sunday\n";
           break;
       case enWeekDay::Mon:
           cout << "The day is: Monday\n";
           break;
       case enWeekDay::Tue:
           cout << "The day is : tuesday\n";
           break;
       case enWeekDay::Wed:
           cout << "The day is: wednesday";
           break;
       case enWeekDay::Thu:
           cout << "The day is: thursday";
           break;
       case enWeekDay::Fri:
           cout << "The day is: friday";
           break;
       case enWeekDay::Sat:
           cout << "The day is: saturday";
           break;
       default:
           cout << "Not a week day!\nPlease repeat\n";
           ShowWeekDayMenue();
           PrintTheDay(ReadTheDay());
           cout << "\n";
           break;
    }
    cout << "Do you want to enter another day ? (y/n)\n";
    char Opinion;
    cin >> Opinion;
    if (Opinion == 'y')
    {
        ShowWeekDayMenue();
        PrintTheDay(ReadTheDay());
    }
    else
    {
        cout << "Thanks for using my program :)\n";
        cout << "made by adam\n";
        cout << "EXITING PROGRAM...";
    }
}

int main()
{
    ShowWeekDayMenue();
    PrintTheDay(ReadTheDay());
    return 0;
}