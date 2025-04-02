   //Problem 1/2

#include <iostream>
using namespace std;

void TableHeader()
{

    cout << "\n\n\t\t\t---- Multiplication table from 1 to 10 ----\n" << endl;

    cout << " TABLE FACE";

    for (int counterNUMBERS = 1; counterNUMBERS <= 10; counterNUMBERS++)
    {
        cout << "\t" << counterNUMBERS;
    }

    cout << endl;

    for (int counterMINUS = 0; counterMINUS <= 95; counterMINUS++)
    {
        cout << "_";
    }

    cout << endl;
}

string ColumSperator(int TableFaceVertical)
{
    if (TableFaceVertical < 10)
    {
        return "      |";
    }
    else
    {
        return "     |";
    }
}

void PrintTableContent()
{
    TableHeader();
    for (int TableFaceVertical = 1; TableFaceVertical <= 10; TableFaceVertical++)
    {
        cout << "     " << TableFaceVertical << ColumSperator(TableFaceVertical) << "\t";

        for (int TableFaceDiagonal = 1; TableFaceDiagonal <= 10; TableFaceDiagonal++)
        {
            cout << TableFaceDiagonal * TableFaceVertical << "\t\b\b|";
        }
        
        cout << endl;

    }
    
    for (int counterMINUS = 0; counterMINUS <= 95; counterMINUS++)
        {
            cout << "_";
        }

}

int main()
{
    PrintTableContent();
}

